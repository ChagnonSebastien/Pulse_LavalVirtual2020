// tcp_server.cpp : Ce fichier contient la fonction 'main'. L'ex�cution du programme commence et se termine � cet endroit.
//

#undef UNICODE

#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdlib.h>
#include <stdio.h>

// Need to link with Ws2_32.lib
#pragma comment (lib, "Ws2_32.lib")
// #pragma comment (lib, "Mswsock.lib")

#define DEFAULT_BUFLEN 512
#define DEFAULT_PORT "27015"

/*int __cdecl main(void)
{
	WSADATA wsaData;
	int iResult;

	SOCKET ListenSocket = INVALID_SOCKET;
	SOCKET ClientSocket = INVALID_SOCKET;

	struct addrinfo *result = NULL;
	struct addrinfo hints;

	int iSendResult;
	char recvbuf[DEFAULT_BUFLEN] = "hello";
	int recvbuflen = DEFAULT_BUFLEN;

	// Initialize Winsock
	iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (iResult != 0) {
		printf("WSAStartup failed with error: %d\n", iResult);
		return 1;
	}

	ZeroMemory(&hints, sizeof(hints));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = IPPROTO_TCP;
	hints.ai_flags = AI_PASSIVE;

	// Resolve the server address and port
	iResult = getaddrinfo(NULL, DEFAULT_PORT, &hints, &result);
	if (iResult != 0) {
		printf("getaddrinfo failed with error: %d\n", iResult);
		WSACleanup();
		return 1;
	}

	// Create a SOCKET for connecting to server
	ListenSocket = socket(result->ai_family, result->ai_socktype, result->ai_protocol);
	if (ListenSocket == INVALID_SOCKET) {
		printf("socket failed with error: %ld\n", WSAGetLastError());
		freeaddrinfo(result);
		WSACleanup();
		return 1;
	}

	// Setup the TCP listening socket
	iResult = bind(ListenSocket, result->ai_addr, (int)result->ai_addrlen);
	if (iResult == SOCKET_ERROR) {
		printf("bind failed with error: %d\n", WSAGetLastError());
		freeaddrinfo(result);
		closesocket(ListenSocket);
		WSACleanup();
		return 1;
	}

	freeaddrinfo(result);

	iResult = listen(ListenSocket, SOMAXCONN);
	if (iResult == SOCKET_ERROR) {
		printf("listen failed with error: %d\n", WSAGetLastError());
		closesocket(ListenSocket);
		WSACleanup();
		return 1;
	}

	// Accept a client socket
	ClientSocket = accept(ListenSocket, NULL, NULL);
	//send(ClientSocket, recvbuf, iResult, 0);
	if (ClientSocket == INVALID_SOCKET) {
		printf("accept failed with error: %d\n", WSAGetLastError());
		closesocket(ListenSocket);
		WSACleanup();
		return 1;
	}

	// No longer need server socket
	closesocket(ListenSocket);

	const char *senddata = "160";
	iSendResult = send(ClientSocket, senddata, (int)strlen(senddata), 0);
	Sleep(500);
	iSendResult = send(ClientSocket, senddata, (int)strlen(senddata), 0);
	Sleep(500);
	iSendResult = send(ClientSocket, senddata, (int)strlen(senddata), 0);

	// Receive until the peer shuts down the connection
	/*do {

		const char *senddata = "160";
		iResult = recv(ClientSocket, recvbuf, recvbuflen, 0);
		if (iResult > 0) {
			printf("Bytes received: %d\n", iResult);

			// Echo the buffer back to the sender

			iSendResult = send(ClientSocket, senddata, (int)strlen(senddata), 0);
			Sleep(500);
			iSendResult = send(ClientSocket, senddata, (int)strlen(senddata), 0);
			Sleep(500);
			iSendResult = send(ClientSocket, senddata, (int)strlen(senddata), 0);

			if (iSendResult == SOCKET_ERROR) {
				printf("send failed with error: %d\n", WSAGetLastError());
				closesocket(ClientSocket);
				WSACleanup();
				return 1;
			}
			printf("Bytes sent: %d\n", iSendResult);
		}
		else if (iResult == 0)
			printf("Connection closing...\n");
		else {
			printf("recv failed with error: %d\n", WSAGetLastError());
			closesocket(ClientSocket);
			WSACleanup();
			return 1;
		}


	} while (iResult > 0);
	*/
	// shutdown the connection since we're done
	/*iResult = shutdown(ClientSocket, SD_SEND);
	if (iResult == SOCKET_ERROR) {
		printf("shutdown failed with error: %d\n", WSAGetLastError());
		closesocket(ClientSocket);
		WSACleanup();
		return 1;
	}

	// cleanup
	closesocket(ClientSocket);
	WSACleanup();

	return 0;
}*/

// Ex�cuter le programme�: Ctrl+F5 ou menu D�boguer�> Ex�cuter sans d�bogage
// D�boguer le programme�: F5 ou menu D�boguer�> D�marrer le d�bogage

// Astuces pour bien d�marrer�: 
//   1. Utilisez la fen�tre Explorateur de solutions pour ajouter des fichiers et les g�rer.
//   2. Utilisez la fen�tre Team Explorer pour vous connecter au contr�le de code source.
//   3. Utilisez la fen�tre Sortie pour voir la sortie de la g�n�ration et d'autres messages.
//   4. Utilisez la fen�tre Liste d'erreurs pour voir les erreurs.
//   5. Acc�dez � Projet�> Ajouter un nouvel �l�ment pour cr�er des fichiers de code, ou � Projet�> Ajouter un �l�ment existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, acc�dez � Fichier�> Ouvrir�> Projet et s�lectionnez le fichier .sln.
