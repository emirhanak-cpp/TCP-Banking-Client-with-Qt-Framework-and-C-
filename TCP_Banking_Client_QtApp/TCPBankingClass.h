#include <iostream>
#include <QString>
#include <string>
#include <winsock2.h> 
#include <Ws2tcpip.h>

#pragma comment (lib, "ws2_32.lib")

#pragma once
class TCPBankingClass
{
public:
	TCPBankingClass();
	int initializeSocket();
	SOCKET getSocket();
	int initializeWinsock();
	int initializeConnection();
	int sendData(QString);
	int receiveData();

private:
	SOCKET clientSocket;
};

