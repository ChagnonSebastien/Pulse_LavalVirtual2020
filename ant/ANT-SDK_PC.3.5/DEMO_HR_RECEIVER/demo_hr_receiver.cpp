/*
This software is subject to the license described in the License.txt file
included with this software distribution. You may not use this file except
in compliance with this license.

Copyright (c) Dynastream Innovations Inc. 2016
All rights reserved.
*/
#include "demo_hr_receiver.h"
#include <string>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <sstream>
////////////////////////////////////////////////////////////////////////////////
// The Demo ANT+ HRM Receiver PC app.
//
// For preventing dependency issues, please launch the ANT_Libraries.sln file in
// Visual Studio 2008 instead of accessing the project on its own.
//
// A simple command line HRM Receiver app built on top of the ANT library that
// demonstrates how to comply with the required ANT+ specifications.
// Please note that other additions can be made while designing an HRM Receiver;
// this is just for demonstration purposes. For details regarding the ANT+ HRM
// specs, please visit www.thisisant.com/developer
////////////////////////////////////////////////////////////////////////////////

int main(int argc, char **argv)
{

   HRMReceiver* Receiver = new HRMReceiver();
   bool PLAYTEST_MODE = false;

   // Initialising with invalid device. 
   // User will be prompted later if it wasn't passed in.
   // ucDeviceNumber = USB device to which the ANT device is connected
   UCHAR ucDeviceNumber = 0;

   // ask user if playtest mode on
   // if playtest mode on, log data

   // if playtest mode off, server runs continuously


   if(Receiver->Init(ucDeviceNumber, true))
      Receiver->Start(); // initANT and receives hr from monitor
   else
      delete Receiver;
   return 0;
}

////////////////////////////////////////////////////////////////////////////////
// HRMReceiver (Heart Rate Receiver)
//
// Constructor, intializes HRMReceiver class
//
////////////////////////////////////////////////////////////////////////////////
HRMReceiver::HRMReceiver()
{
   ucChannelType = CHANNEL_TYPE_SLAVE; // HRM Receiver is a slave
   pclSerialObject = (DSISerialGeneric*)NULL;
   pclMessageObject = (DSIFramerANT*)NULL;
   uiDSIThread = (DSI_THREAD_ID)NULL;
   uiDSIThreadRead = (DSI_THREAD_ID)NULL;
   bMyDone = FALSE;
   bDone = FALSE;
   bDisplay = TRUE;
   bProcessedData = TRUE;
   bBroadcasting = FALSE;
   socket = SocketServer();
   logsManager = LogsManager();
   logsManager.setUserProfile();
}

////////////////////////////////////////////////////////////////////////////////
// ~HRMReceiver
//
// Destructor, clean up and loose memory
//
////////////////////////////////////////////////////////////////////////////////
HRMReceiver::~HRMReceiver()
{
   if(pclMessageObject)
      delete pclMessageObject;

   if(pclSerialObject)
      delete pclSerialObject;
}

////////////////////////////////////////////////////////////////////////////////
// Init
//
// Initize the HRMReceiver and ANT Library.
//
// ucDeviceNumber_: USB Device Number (0 for first USB stick plugged and so on)
//                  If not specified on command line, 0xFF is passed in as invalid.
////////////////////////////////////////////////////////////////////////////////
BOOL HRMReceiver::Init(UCHAR ucDeviceNumber_, BOOL initializeSocket)
{
	if (initializeSocket) {
		socket.init();
	}
	
   BOOL bStatus;

   // Initialize condition var and mutex (message thread)
   UCHAR ucCondInit = DSIThread_CondInit(&condTestDone);
   assert(ucCondInit == DSI_THREAD_ENONE);

   UCHAR ucMutexInit = DSIThread_MutexInit(&mutexTestDone);
   assert(ucMutexInit == DSI_THREAD_ENONE);

   // Initialize condition var and mutex (reading message thread)
   UCHAR ucCondInitRead = DSIThread_CondInit(&condTestDoneRead);
   assert(ucCondInitRead == DSI_THREAD_ENONE);

   UCHAR ucMutexInitRead = DSIThread_MutexInit(&mutexTestDoneRead);
   assert(ucMutexInitRead == DSI_THREAD_ENONE);

#if defined(DEBUG_FILE)
   // Enable logging
   DSIDebug::Init();
   DSIDebug::SetDebug(TRUE);
#endif

   // Create Serial object.
   pclSerialObject = new DSISerialGeneric();
   assert(pclSerialObject);

   ucAntChannel = USER_ANTCHANNEL;
   ucTransType = USER_TRANSTYPE;
   usDeviceNum = (USHORT)std::stoi(getenv("WAHOO_ID"));
   ucNetworkNum = USER_NETWORK_NUM;

   // Message Period
   USHORT usMessagePeriods[] = USER_MESSAGE_PERIODS;
   usMessagePeriod = usMessagePeriods[USER_PERIOD_OPTION];


   // Initialize Serial object.
   // The device number depends on how many USB sticks have been
   // plugged into the PC. The first USB stick plugged will be 0
   // the next 1 and so on.
   //
   // The Baud Rate depends on the ANT solution being used. AP1
   // is 50000, all others are 57600
   bStatus = pclSerialObject->Init(USER_BAUDRATE, ucDeviceNumber_);
   assert(bStatus);

   // Create Framer object.
   pclMessageObject = new DSIFramerANT(pclSerialObject);
   assert(pclMessageObject);

   // Initialize Framer object.
   bStatus = pclMessageObject->Init();
   assert(bStatus);

   // Let Serial know about Framer.
   pclSerialObject->SetCallback(pclMessageObject);

   // Open Serial.
   bStatus = pclSerialObject->Open();

   // If the Open function failed, most likely the device
   // we are trying to access does not exist, or it is connected
   // to another program
   if(!bStatus)
   {
      printf("Failed to connect to device at USB port %d\n", ucDeviceNumber_);
      printf("Press any key to continue.\n"); fflush(stdout);
      char st[1024];
      fgets(st, sizeof(st), stdin);
      return FALSE;
   }

   // Create message thread.
   uiDSIThread = DSIThread_CreateThread(&HRMReceiver::RunMessageThread, this);
   assert(uiDSIThread);


   // Create thread for reading messages
   // Create message thread.
   uiDSIThreadRead = DSIThread_CreateThread(&HRMReceiver::RunReadMessageThread, this);
   assert(uiDSIThreadRead);



   printf("USB device initialisation was successful!\n"); fflush(stdout);

   return TRUE;
}

DSI_THREAD_RETURN HRMReceiver::RunReadMessageThread(void *pvParameter_)
{
	((HRMReceiver*)pvParameter_)->ReadMessageThread();
	return NULL;
}




void HRMReceiver::Restart() {
	UCHAR ucDeviceNumber = 0;
	ReinitAttributes();
	if (Init(ucDeviceNumber, false)) {
		Start();
	}
	
}


void HRMReceiver::ReinitAttributes() {

	ucChannelType = CHANNEL_TYPE_SLAVE; // HRM Receiver is a slave
	pclSerialObject = (DSISerialGeneric*)NULL;
	pclMessageObject = (DSIFramerANT*)NULL;
	uiDSIThread = (DSI_THREAD_ID)NULL;
	uiDSIThreadRead = (DSI_THREAD_ID)NULL;
	bMyDone = FALSE;
	bDone = FALSE;
	bDisplay = TRUE;
	bProcessedData = TRUE;
	bBroadcasting = FALSE;

}



////////////////////////////////////////////////////////////////////////////////
// Close
//
// Close connection to USB stick.
//
////////////////////////////////////////////////////////////////////////////////
void HRMReceiver::Close()
{
   //Wait for test to be done
   DSIThread_MutexLock(&mutexTestDone);
   DSIThread_MutexLock(&mutexTestDoneRead);
   bDone = TRUE;

   UCHAR ucWaitResult = DSIThread_CondTimedWait(&condTestDone, &mutexTestDone, DSI_THREAD_INFINITE);
   assert(ucWaitResult == DSI_THREAD_ENONE);

   UCHAR ucWaitResultRead = DSIThread_CondTimedWait(&condTestDoneRead, &mutexTestDoneRead, DSI_THREAD_INFINITE);
   assert(ucWaitResultRead == DSI_THREAD_ENONE);

   DSIThread_MutexUnlock(&mutexTestDone);
   DSIThread_MutexUnlock(&mutexTestDoneRead);

   //Destroy mutex and condition var
   DSIThread_MutexDestroy(&mutexTestDone);
   DSIThread_CondDestroy(&condTestDone);
   DSIThread_MutexDestroy(&mutexTestDoneRead);
   DSIThread_CondDestroy(&condTestDoneRead);

   //Close all stuff
   if(pclSerialObject)
      pclSerialObject->Close();

#if defined(DEBUG_FILE)
   DSIDebug::Close();
#endif


   // reinitalize receiver
}

////////////////////////////////////////////////////////////////////////////////
// Start
//
// Starts the Demo
//
////////////////////////////////////////////////////////////////////////////////
void HRMReceiver::Start()
{
   BOOL bStatus;

   // Print out the menu to start
   //PrintMenu();

   // Start ANT channel setup
   bStatus = InitANT();
   if (bStatus)
   {
      printf("ANT initialisation was successful!\n"); fflush(stdout);

      while(!bMyDone)
      {
         //printf("Press Q to exit.\n");
         UCHAR ucChar;
         char st[1024];
         fgets(st, sizeof(st), stdin);
         sscanf(st, "%c", &ucChar);

         switch(ucChar)
         {

            case 'M':
            case 'm':
            {
               PrintMenu();
               break;
            }
            case 'Q':
            case 'q':
            {
               // Quit
               printf("Closing channel...\n");
               bBroadcasting = FALSE;
               pclMessageObject->CloseChannel(ucAntChannel, MESSAGE_TIMEOUT);
               break;
            }

            case 'r':
            case 'R':
            {
               // Reset the system and start over the test
               bStatus = InitANT();
               break;
            }
            case 'c':
            case 'C':
            {
               // Request capabilites.
               ANT_MESSAGE_ITEM stResponse;
               pclMessageObject->SendRequest(MESG_CAPABILITIES_ID, ucAntChannel, &stResponse, 0);
               break;
            }
            case 'v':
            case 'V':
            {
               // Request version
               ANT_MESSAGE_ITEM stResponse;
               pclMessageObject->SendRequest(MESG_VERSION_ID, ucAntChannel, &stResponse, 0);
               break;
            }
            case 'S':
            case 's':
            {
               // Request channel status
               ANT_MESSAGE_ITEM stResponse;
               pclMessageObject->SendRequest(MESG_CHANNEL_STATUS_ID, ucAntChannel, &stResponse, 0);
               break;
            }
            case 'I':
            case 'i':
            {
               // Request channel ID
               ANT_MESSAGE_ITEM stResponse;
               pclMessageObject->SendRequest(MESG_CHANNEL_ID_ID, ucAntChannel, &stResponse, 0);
               break;
            }
            case 'd':
            case 'D':
            {
               // Toggle display of data messages
               bDisplay = !bDisplay;
               break;
            }
            case 'p':
            case 'P':
            {
               // Toggle raw-processed HRM data
               bProcessedData = !bProcessedData;
               break;
            }
            case 'u':
            case 'U':
            {
               // Print out information about the device we are connected to
               printf("USB Device Description\n");
               USHORT usDevicePID;
               USHORT usDeviceVID;
               UCHAR aucDeviceDescription[USB_MAX_STRLEN];
               UCHAR aucDeviceSerial[USB_MAX_STRLEN];
               // Retrieve info
               if(pclMessageObject->GetDeviceUSBVID(usDeviceVID))
               {
                  printf("  VID: 0x%X\n", usDeviceVID);
               }
               if(pclMessageObject->GetDeviceUSBPID(usDevicePID))
               {
                  printf("  PID: 0x%X\n", usDevicePID);
               }
               if(pclMessageObject->GetDeviceUSBInfo(pclSerialObject->GetDeviceNumber(), aucDeviceDescription, aucDeviceSerial, USB_MAX_STRLEN))
               {
                  printf("  Product Description: %s\n", aucDeviceDescription);
                  printf("  Serial String: %s\n", aucDeviceSerial);
               }
               break;
            }

            default:
            {
               break;
            }
         }
         DSIThread_Sleep(0);
      }
   }
   else
   {
      printf("ANT initialisation failed!\n"); fflush(stdout);
   }
   //Disconnecting from module
   printf("Disconnecting module...\n");
   this->Close();

   printf("Closing the Heart Rate Monitor Receiver!\n");

   this->Restart();

   return;

}

////////////////////////////////////////////////////////////////////////////////
// InitANT
//
// Resets the system and starts the test
//
////////////////////////////////////////////////////////////////////////////////
BOOL HRMReceiver::InitANT(void)
{
   BOOL bStatus; // ANT initialisation status

   // Reset system

   bStatus = pclMessageObject->ResetSystem();
   DSIThread_Sleep(1000);

   // Start the test by setting network key
   UCHAR ucNetKey[8] = USER_NETWORK_KEY;

   bStatus &= pclMessageObject->SetNetworkKey(ucNetworkNum, ucNetKey, MESSAGE_TIMEOUT);

   return bStatus;
}

////////////////////////////////////////////////////////////////////////////////
// RunMessageThread
//
// Callback function that is used to create the thread. This is a static
// function.
//
////////////////////////////////////////////////////////////////////////////////
DSI_THREAD_RETURN HRMReceiver::RunMessageThread(void *pvParameter_)
{
   ((HRMReceiver*) pvParameter_)->MessageThread();
   return NULL;
}

////////////////////////////////////////////////////////////////////////////////
// MessageThread
//
// Run message thread
////////////////////////////////////////////////////////////////////////////////
void HRMReceiver::MessageThread()
{

   ANT_MESSAGE stMessage;
   USHORT usSize;
   bDone = FALSE;

   while(!bDone)
   {
      if(pclMessageObject->WaitForMessage(1000))
      {
         usSize = pclMessageObject->GetMessage(&stMessage);

         if(bDone)
            break;

         if(usSize == DSI_FRAMER_ERROR)
         {
            // Get the message to clear the error
            usSize = pclMessageObject->GetMessage(&stMessage, MESG_MAX_SIZE_VALUE);
            continue;
         }

         if(usSize != DSI_FRAMER_ERROR && usSize != DSI_FRAMER_TIMEDOUT && usSize != 0)
         {
            ProcessMessage(stMessage, usSize);
         }
      }
   }

   DSIThread_MutexLock(&mutexTestDone);
   UCHAR ucCondResult = DSIThread_CondSignal(&condTestDone);
   assert(ucCondResult == DSI_THREAD_ENONE);
   DSIThread_MutexUnlock(&mutexTestDone);

}

////////////////////////////////////////////////////////////////////////////////
// ReadMessageThread
//
// Run read message thread
////////////////////////////////////////////////////////////////////////////////
void HRMReceiver::ReadMessageThread()
{

	ANT_MESSAGE stMessage;
	USHORT usSize;
	bDone = FALSE;
	int iResult;
	char recvbuf[DEFAULT_BUFLEN] = "";
	int recvbuflen = DEFAULT_BUFLEN;

	while (!bDone)
	{
		iResult = recv(socket.ClientSocket, recvbuf, recvbuflen, 0);
		std::string s(recvbuf);

		if (iResult > 0 && s == "1") { // Game started
			// get current time
			time_t rawtime;
			struct tm * timeinfo;
			time(&rawtime);
			timeinfo = localtime(&rawtime);
			std::string currentTime = "\n" + std::to_string(timeinfo->tm_mon + 1) + " " + std::to_string(timeinfo->tm_mday) + " " + time_in_HH_MM_SS_MMM();
			logsManager.log(currentTime, "start");
		}
		else if (iResult > 0 && s == "2") {
			// get current time
			time_t rawtime;
			struct tm * timeinfo;
			time(&rawtime);
			timeinfo = localtime(&rawtime);
			std::string currentTime = "\n" + std::to_string(timeinfo->tm_mon + 1) + " " + std::to_string(timeinfo->tm_mday) + " " + time_in_HH_MM_SS_MMM();
			logsManager.log(currentTime, "end");
		}

	}

	DSIThread_MutexLock(&mutexTestDoneRead);
	UCHAR ucCondResult = DSIThread_CondSignal(&condTestDoneRead);
	assert(ucCondResult == DSI_THREAD_ENONE);
	DSIThread_MutexUnlock(&mutexTestDoneRead);

}


////////////////////////////////////////////////////////////////////////////////
// ProcessMessage
//
// Process ALL messages that come from ANT, including event messages.
//
// stMessage: Message struct containing message recieved from ANT
// usSize_:
////////////////////////////////////////////////////////////////////////////////
void HRMReceiver::ProcessMessage(ANT_MESSAGE stMessage, USHORT usSize_)
{
   BOOL bStatus;
   BOOL bPrintBuffer = FALSE;
   UCHAR ucDataOffset = MESSAGE_BUFFER_DATA2_INDEX;   // For most data messages

   // For decoding device type -- legacy or current
   static UCHAR ucDeviceType = INVALID_DEVICE;

   switch(stMessage.ucMessageID)
   {
      //RESPONSE MESG
      case MESG_RESPONSE_EVENT_ID:
      {
         //RESPONSE TYPE
         switch(stMessage.aucData[1])
         {
            case MESG_NETWORK_KEY_ID:
            {
               if(stMessage.aucData[2] != RESPONSE_NO_ERROR)
               {
                  printf("Error configuring network key: Code 0%d\n", stMessage.aucData[2]);
                  break;
               }
               printf("Assigning channel...\n");
               bStatus = pclMessageObject->AssignChannel(ucAntChannel, PARAMETER_RX_NOT_TX, 0, MESSAGE_TIMEOUT);
               break;
            }

            case MESG_ASSIGN_CHANNEL_ID:
            {
               if(stMessage.aucData[2] != RESPONSE_NO_ERROR)
               {
                  printf("Error assigning channel: Code 0%d\n", stMessage.aucData[2]);
                  break;
               }
               printf("Channel assigned\n");
               printf("Setting Channel ID...\n");
               bStatus = pclMessageObject->SetChannelID(ucAntChannel, usDeviceNum, USER_DEVICETYPE, ucTransType, MESSAGE_TIMEOUT);
               break;
            }


            case MESG_CHANNEL_ID_ID:
            {
               if(stMessage.aucData[2] != RESPONSE_NO_ERROR)
               {
                  printf("Error configuring Channel ID: Code 0%d\n", stMessage.aucData[2]);
                  break;
               }
               printf("Channel ID set\n");
               printf("Setting Radio Frequency...\n");
               bStatus = pclMessageObject->SetChannelRFFrequency(ucAntChannel, USER_RADIOFREQ, MESSAGE_TIMEOUT);
               break;
            }

            case MESG_CHANNEL_RADIO_FREQ_ID:
            {
               if(stMessage.aucData[2] != RESPONSE_NO_ERROR)
               {
                  printf("Error configuring Radio Frequency: Code 0%d\n", stMessage.aucData[2]);
                  break;
               }
               printf("Radio Frequency set\n");
               printf("Setting Message Period...\n");
               bStatus = pclMessageObject->SetChannelPeriod(ucAntChannel, usMessagePeriod, MESSAGE_TIMEOUT);
               break;
            }

            case MESG_CHANNEL_MESG_PERIOD_ID:
            {
               if(stMessage.aucData[2] != RESPONSE_NO_ERROR)
               {
                  printf("Error assigning Message Period: Code 0%d\n", stMessage.aucData[2]);
                  break;
               }
               printf("Message period assigned\n");
               printf("Opening channel...\n");
               bBroadcasting = TRUE;
               bStatus = pclMessageObject->OpenChannel(ucAntChannel, MESSAGE_TIMEOUT);
               break;
            }

            case MESG_OPEN_CHANNEL_ID:
            {
               if(stMessage.aucData[2] != RESPONSE_NO_ERROR)
               {
                  printf("Error opening channel: Code 0%d\n", stMessage.aucData[2]);
                  bBroadcasting = FALSE;
                  break;
               }
               printf("Chanel opened\n");
#if defined (ENABLE_EXTENDED_MESSAGES)
               printf("Enabling extended messages...\n");
               pclMessageObject->RxExtMesgsEnable(TRUE);
#endif
               break;
            }

            case MESG_RX_EXT_MESGS_ENABLE_ID:
            {
               if(stMessage.aucData[2] == INVALID_MESSAGE)
               {
                  printf("Extended messages not supported in this ANT product\n");
                  break;
               }
               else if(stMessage.aucData[2] != RESPONSE_NO_ERROR)
               {
                  printf("Error enabling extended messages: Code 0%d\n", stMessage.aucData[2]);
                  break;
               }
               printf("Extended messages enabled\n");
               break;
            }

            case MESG_UNASSIGN_CHANNEL_ID:
            {
               if(stMessage.aucData[2] != RESPONSE_NO_ERROR)
               {
                  printf("Error unassigning channel: Code 0%d\n", stMessage.aucData[2]);
                  break;
               }
               printf("Channel unassigned\n");
               printf("Press enter\n");
			   keybd_event(VK_RETURN, 0, 0, 0);
               bMyDone = TRUE;
               break;
            }

            case MESG_CLOSE_CHANNEL_ID:
            {
               if(stMessage.aucData[2] == CHANNEL_IN_WRONG_STATE)
               {
                  // We get here if we tried to close the channel after the search timeout (slave)
                  printf("Channel is already closed\n");
                  printf("Unassigning channel...\n");
                  bStatus = pclMessageObject->UnAssignChannel(ucAntChannel, MESSAGE_TIMEOUT);
                  break;
               }
               else if(stMessage.aucData[2] != RESPONSE_NO_ERROR)
               {
                  printf("Error closing channel: Code 0%d\n", stMessage.aucData[2]);
                  break;
               }

               // If this message was successful, wait for EVENT_CHANNEL_CLOSED to confirm channel is closed
               break;
            }

            case MESG_REQUEST_ID:
            {
               if(stMessage.aucData[2] == INVALID_MESSAGE)
               {
                  printf("Requested message not supported in this ANT product\n");
               }
               break;
            }

            case MESG_EVENT_ID:
            {
               switch(stMessage.aucData[2])
                  {
                  case EVENT_CHANNEL_CLOSED:
                  {
                     printf("Channel Closed\n");
                     printf("Unassigning channel...\n");
                     bStatus = pclMessageObject->UnAssignChannel(ucAntChannel, MESSAGE_TIMEOUT);
                     break;
                  }

                  case EVENT_RX_SEARCH_TIMEOUT:
                  {
                     printf("Search Timeout\n");
                     break;
                  }
                  case EVENT_RX_FAIL:
                  {
                     printf("Rx Fail\n");
                     break;
                  }

                  case EVENT_RX_FAIL_GO_TO_SEARCH:
                  {
                     printf("Go to Search\n");
                     break;
                  }
                  case EVENT_CHANNEL_COLLISION:
                  {
                     printf("Channel Collision\n");
                     break;
                  }

                  default:
                  {
                     printf("Unhandled channel event: 0x%X\n", stMessage.aucData[2]);
                     break;
                  }

               }

               break;
            }

            default:
            {
               printf("Unhandled response 0%d to message 0x%X\n", stMessage.aucData[2], stMessage.aucData[1]);
               break;
            }
         }
         break;
      }

      case MESG_STARTUP_MESG_ID:
      {
        
         break;
      }

      case MESG_CAPABILITIES_ID:
      {
         
         break;
      }
      case MESG_CHANNEL_STATUS_ID:
      {
         printf("Got Status\n");

         char astrStatus[][32] = {  "STATUS_UNASSIGNED_CHANNEL",
                                    "STATUS_ASSIGNED_CHANNEL",
                                    "STATUS_SEARCHING_CHANNEL",
                                    "STATUS_TRACKING_CHANNEL"   };

         UCHAR ucStatusByte = stMessage.aucData[MESSAGE_BUFFER_DATA2_INDEX] & STATUS_CHANNEL_STATE_MASK; // MUST MASK OFF THE RESERVED BITS
         printf("STATUS: %s\n",astrStatus[ucStatusByte]);
         break;
      }
      case MESG_CHANNEL_ID_ID:
      {
         // Channel ID of the device that we just recieved a message from.
         USHORT usDeviceNumber = stMessage.aucData[MESSAGE_BUFFER_DATA2_INDEX] | (stMessage.aucData[MESSAGE_BUFFER_DATA3_INDEX] << 8);
         UCHAR ucDeviceType =  stMessage.aucData[MESSAGE_BUFFER_DATA4_INDEX];
         UCHAR ucTransmissionType = stMessage.aucData[MESSAGE_BUFFER_DATA5_INDEX];

         printf("CHANNEL ID: (%d/%d/%d)\n", usDeviceNumber, ucDeviceType, ucTransmissionType);
         break;
      }
      case MESG_VERSION_ID:
      {
         printf("VERSION: %s\n", (char*) &stMessage.aucData[MESSAGE_BUFFER_DATA1_INDEX]);
         break;
      }

      case MESG_ACKNOWLEDGED_DATA_ID:
      case MESG_BROADCAST_DATA_ID:
      // Burst not supported by ANT+ HRM
      {
         if (ucDeviceType == INVALID_DEVICE)
         {
            // Detecting current vs. legacy transmitter, only if not detected yet
            static BOOL bOldToggleBit = INVALID_TOGGLE_BIT;
            static UCHAR ucToggleAttempts = 0; // The number of attempts made so far
            BOOL bToggleBit = stMessage.aucData[ucDataOffset + 0] >> 7;
            DetectDevice(ucDeviceType, bOldToggleBit, ucToggleAttempts, bToggleBit);
         }

         if ((bProcessedData) && (ucDeviceType == INVALID_DEVICE))
         {
            // The user wants to see processed data, but device type is not detected yet
            break;
         }

         // The flagged and unflagged data messages have the same
         // message ID. Therefore, we need to check the size to
         // verify if a flag is present at the end of a message.
         // To enable flagged messages, must call ANT_RxExtMesgsEnable first.
         if(usSize_ > MESG_DATA_SIZE)
         {
            UCHAR ucFlag = stMessage.aucData[MESSAGE_BUFFER_DATA10_INDEX];

            if(bDisplay && ucFlag & ANT_EXT_MESG_BITFIELD_DEVICE_ID)
            {
               // Channel ID of the device that we just recieved a message from.
               USHORT usDeviceNumber = stMessage.aucData[MESSAGE_BUFFER_DATA11_INDEX] | (stMessage.aucData[MESSAGE_BUFFER_DATA12_INDEX] << 8);
               UCHAR ucDeviceType =  stMessage.aucData[MESSAGE_BUFFER_DATA13_INDEX];
               UCHAR ucTransmissionType = stMessage.aucData[MESSAGE_BUFFER_DATA14_INDEX];

               printf("Chan ID(%d/%d/%d) - ", usDeviceNumber, ucDeviceType, ucTransmissionType);
            }
         }

         // Display recieved message
         bPrintBuffer = TRUE;
         ucDataOffset = MESSAGE_BUFFER_DATA2_INDEX;   // For most data messages

         if(bDisplay)
         {
            if(stMessage.ucMessageID == MESG_ACKNOWLEDGED_DATA_ID )
               printf("Acked Rx:(%d): ", stMessage.aucData[MESSAGE_BUFFER_DATA1_INDEX]);

            else if (stMessage.ucMessageID == MESG_BROADCAST_DATA_ID)
               printf("Rx:(%d): ", stMessage.aucData[MESSAGE_BUFFER_DATA1_INDEX]);

            // Burst is not supported by ANT+ HRM
         }
         break;

      }

      case MESG_EXT_BROADCAST_DATA_ID:
      case MESG_EXT_ACKNOWLEDGED_DATA_ID:
      {
         if (ucDeviceType == INVALID_DEVICE)
         {
            // Detecting current vs. legacy transmitter, only if not detected yet
            static BOOL bOldToggleBit = INVALID_TOGGLE_BIT;
            static UCHAR ucToggleAttempts = 0; // The number of attempts made so far
            BOOL bToggleBit = stMessage.aucData[ucDataOffset + 0] >> 7;
            DetectDevice(ucDeviceType, bOldToggleBit, ucToggleAttempts, bToggleBit);
         }

         if ((bProcessedData) && (ucDeviceType == INVALID_DEVICE))
         {
            // The user wants to see processed data, but device type is not detected yet
            break;
         }

         // The "extended" part of this message is the 4-byte channel
         // id of the device that we recieved this message from. This message
         // is only available on the AT3. The AP2 uses flagged versions of the
         // data messages as shown above.

         // Channel ID of the device that we just recieved a message from.
         USHORT usDeviceNumber = stMessage.aucData[MESSAGE_BUFFER_DATA2_INDEX] | (stMessage.aucData[MESSAGE_BUFFER_DATA3_INDEX] << 8);
         UCHAR ucDeviceType =  stMessage.aucData[MESSAGE_BUFFER_DATA4_INDEX];
         UCHAR ucTransmissionType = stMessage.aucData[MESSAGE_BUFFER_DATA5_INDEX];

         bPrintBuffer = TRUE;
         ucDataOffset = MESSAGE_BUFFER_DATA6_INDEX;   // For most data messages

         if(bDisplay)
         {
            // Display the channel id
            printf("Chan ID(%d/%d/%d) ", usDeviceNumber, ucDeviceType, ucTransmissionType );

            if(stMessage.ucMessageID == MESG_EXT_ACKNOWLEDGED_DATA_ID)
               printf("- Acked Rx:(%d): ", stMessage.aucData[MESSAGE_BUFFER_DATA1_INDEX]);

            else if(stMessage.ucMessageID == MESG_EXT_BROADCAST_DATA_ID)
               printf("- Rx:(%d): ", stMessage.aucData[MESSAGE_BUFFER_DATA1_INDEX]);

            // Burst not supported by ANT+ HRM
         }

         break;
      }

      default:
      {
         break;
      }
   }

   // If we recieved a data message, diplay its contents here.
   if(bPrintBuffer)
   {
      if(bDisplay)
      {
         // If the user wants to see the decoded information
         if (bProcessedData)
         {
            // HR data, common to all data pages and device types

            // Merge the 2 bytes to form the HRM event time
            USHORT usEventTime = ((USHORT)stMessage.aucData[ucDataOffset + 5] << 8) +
                                  (USHORT)stMessage.aucData[ucDataOffset + 4];
            UCHAR ucHR = stMessage.aucData[ucDataOffset + 7];
            UCHAR ucBeatCount = stMessage.aucData[ucDataOffset + 6];

			const char *sendHR = (const char*)&ucHR;

			int sendResult = socket.sendMessage(sendHR);

            printf("HR: %d , Beat Count: %d , Beat Event Time: %d\n", ucHR, ucBeatCount, usEventTime);

			// get current time
			time_t rawtime;
			struct tm * timeinfo;
			time(&rawtime);
			timeinfo = localtime(&rawtime);

			// get hr in string format
			std::string hr;
			hr.push_back(ucHR);
			int c = ucHR;

			std::string currentTime = std::to_string(timeinfo->tm_mon + 1) + " " +  std::to_string(timeinfo->tm_mday) + " "  + time_in_HH_MM_SS_MMM();

			logsManager.log(currentTime, std::to_string(c));

			// If client is disconnected, reinitialize socket
			if (sendResult == -1){
				socket.init();
			}


            if (ucDeviceType == CURRENT_DEVICE)
            {
               // Current device => Page numbers are enabled
               UCHAR ucPageNum = stMessage.aucData[ucDataOffset + 0] & ~TOGGLE_MASK;

               // Page specific data
               switch(ucPageNum) // Removing the toggle bit
               {

                  case PAGE_0:
                  {
                     // Contains only common data
                     break;
                  }

                  case PAGE_1:
                  {
                     // Decoding cumulative operating time
                     ULONG ulOperatingTime = ((ULONG)stMessage.aucData[ucDataOffset + 3] << 16) +
                                             ((ULONG)stMessage.aucData[ucDataOffset + 2] << 8) +
                                             ((ULONG)stMessage.aucData[ucDataOffset + 1]);
                     ulOperatingTime = 2*ulOperatingTime;
                     printf("Transmitter operating Time: %d seconds\n", ulOperatingTime);
                     break;
                  }

                  case PAGE_2:
                  {
                     // Decoding Manufacturer ID & serial number
                     UCHAR ucManufacturerID = stMessage.aucData[ucDataOffset + 1];
                     USHORT usSerialNum = ((USHORT)stMessage.aucData[ucDataOffset + 3] << 8) +
                                           (USHORT)stMessage.aucData[ucDataOffset + 2];
                     printf("Transmitter manufacturer ID : %d , ", ucManufacturerID);
                     printf("Ser. #: %d\n", usSerialNum);
                     break;
                  }

                  case PAGE_3:
                  {
                     // Decoding Hardware, software version and model number
                     UCHAR ucHWVer = stMessage.aucData[ucDataOffset + 1];
                     UCHAR ucSWVer = stMessage.aucData[ucDataOffset + 2];
                     UCHAR ucModelNum = stMessage.aucData[ucDataOffset + 3];
                     printf("Transmitter HW ver: %d , ", ucHWVer);
                     printf("SF ver: %d , ", ucSWVer);
                     printf("Model #: %d\n", ucModelNum);
                     break;
                  }

                  case PAGE_4:
                  {
                     // Decoding R-R Interval Measurements
                     static UCHAR ucPreviousBeatCount;
                     USHORT usPreviousEventTime = ((USHORT)stMessage.aucData[ucDataOffset + 3] << 8) +
                                                   (USHORT)stMessage.aucData[ucDataOffset + 2];
                     if (ucBeatCount - ucPreviousBeatCount == 1)// Ensure that there is only one beat between time intervals
                     {
                        USHORT usR_R_Interval = usEventTime - usPreviousEventTime; // Subracting the event times gives the R-R interval
                        // Converting the timebase from 1/1024 of a second to milliseconds
                        USHORT usR_R_Interval_ms = (((ULONG) usR_R_Interval) * (ULONG) 1000) / (ULONG) 1024;
                        printf("R-R Interval: %d ms\n", usR_R_Interval_ms);
                     }
                     ucPreviousBeatCount = ucBeatCount;
                     break;
                  }
                  default:
                  {
                     // This should never be the case for current ANT+ HRM transmitter
                     // More pages may be implemented in future
                     printf("Unable to recognise the page number. Please check for an updated version of this app.\n");
                  }

               }

            }

         }

         // If the user wants to see the raw bytes received
         else
         {
            printf("[%02x],[%02x],[%02x],[%02x],[%02x],[%02x],[%02x],[%02x]\n",
               stMessage.aucData[ucDataOffset + 0],
               stMessage.aucData[ucDataOffset + 1],
               stMessage.aucData[ucDataOffset + 2],
               stMessage.aucData[ucDataOffset + 3],
               stMessage.aucData[ucDataOffset + 4],
               stMessage.aucData[ucDataOffset + 5],
               stMessage.aucData[ucDataOffset + 6],
               stMessage.aucData[ucDataOffset + 7]);
         }
      }
      else
      {
         static int iIndex = 0;
         static char ac[] = {'|','/','-','\\'};
         printf("Rx: %c\r",ac[iIndex++]); fflush(stdout);
         iIndex &= 3;

      }
   }

   //return;
}

/// Get current time

std::string HRMReceiver::time_in_HH_MM_SS_MMM()
{
	using namespace std::chrono;

	// get current time
	auto now = system_clock::now();

	// get number of milliseconds for the current second
	// (remainder after division into seconds)
	auto ms = duration_cast<milliseconds>(now.time_since_epoch()) % 1000;

	// convert to std::time_t in order to convert to std::tm (broken time)
	auto timer = system_clock::to_time_t(now);

	// convert to broken time
	std::tm bt = *std::localtime(&timer);

	std::ostringstream oss;

	oss << std::put_time(&bt, "%H:%M:%S"); // HH:MM:SS
	oss << '.' << std::setfill('0') << std::setw(3) << ms.count();

	return oss.str();
}

////////////////////////////////////////////////////////////////////////////////
// PrintMenu
//
// Start the Test program.
//
////////////////////////////////////////////////////////////////////////////////
void HRMReceiver::PrintMenu()
{

   // Printout options
   printf("\n");
   printf("M - Print this menu\n");
   printf("R - Reset\n");
   printf("C - Request Capabilites\n");
   printf("V - Request Version\n");
   printf("I - Request Channel ID\n");
   printf("S - Request Status\n");
   printf("U - Request USB Descriptor\n");
   printf("D - Toggle Display\n");
   printf("P - Toggle Processed-Raw Data\n");
   printf("Q - Quit\n");
   printf("\n");
   fflush(stdout);
}

////////////////////////////////////////////////////////////////////////////////
// DetectDevice
//
// Helper member for detecting the device (type) -- legacy or current.
//
////////////////////////////////////////////////////////////////////////////////
void HRMReceiver::DetectDevice(UCHAR &ucDeviceType_, BOOL &bOldToggleBit_, UCHAR &ucToggleAttempts_, BOOL bToggleBit)
{
   if (ucToggleAttempts_ == 0)
   {
      printf("Detecting transmitter device type...\n");
   }

   if (ucToggleAttempts_ < MAX_TOGGLE_ATTEMPTS)
   {
      // Try to see if the ms bit of the ms byte toggles this time
      // Check MAX_TOGGLE_ATTEMPTS number of times
      if ((bToggleBit != bOldToggleBit_) && (bOldToggleBit_ != INVALID_TOGGLE_BIT))
      {
         ucDeviceType_ = CURRENT_DEVICE; // Toggle Bit toggled => Current device
         printf("Current Device detected\n");
      }
      else
      {
         bOldToggleBit_ = bToggleBit;
         ucToggleAttempts_++;
      }
   }

   if ((ucToggleAttempts_ >= MAX_TOGGLE_ATTEMPTS) && (ucDeviceType_ == INVALID_DEVICE))
   {
      // Toggle Bit didn't toggle for max # of attempts => Legacy device
      ucDeviceType_ = LEGACY_DEVICE;
      printf("Legacy Device detected\n");
   }
} 