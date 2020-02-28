
#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#pragma once

#include <winsock2.h>


//#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdlib.h>
#include <stdio.h>


// Need to link with Ws2_32.lib
#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")

#define DEFAULT_BUFLEN 512
#define DEFAULT_PORT "27015"


class SocketServer
{

public:
	SocketServer();
	int sendMessage(const char *senddata);
	void init();

private:
	SOCKET ClientSocket;
	SOCKET ListenSocket;
};

