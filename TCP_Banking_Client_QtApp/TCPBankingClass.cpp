#include "TCPBankingClass.h"

using namespace std;

TCPBankingClass::TCPBankingClass()
{

}

int TCPBankingClass::initializeWinsock()
{
	WSADATA wsaData;
	int wsaerr;
	WORD wVersionRequested = MAKEWORD(2, 2);
	wsaerr = WSAStartup(wVersionRequested, &wsaData);

	if (wsaerr != 0)
	{
		cout << "winsock dll not found!" << endl;
		return 0;
	}
	else
	{
		cout << "winsock dll found!" << endl;
		cout << "STATUS: " << wsaData.szSystemStatus << endl;
	}
}

int TCPBankingClass::initializeSocket()
{
	clientSocket = INVALID_SOCKET;
	clientSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	if (clientSocket == INVALID_SOCKET)
	{
		cout << "error at socket(): " << WSAGetLastError() << endl;
		WSACleanup();
		return 0;
	}
	else
	{
		cout << "socket is OK." << endl;
	}
}

SOCKET TCPBankingClass::getSocket()
{
	return clientSocket;
}

int TCPBankingClass::initializeConnection()
{
	initializeWinsock();
	initializeSocket();

	// Connect to the server
	sockaddr_in clientService;
	clientService.sin_family = AF_INET;
	InetPton(AF_INET, __TEXT("10.150.12.191"), &clientService.sin_addr.s_addr);
	clientService.sin_port = htons(54000);

	if (connect(getSocket(), reinterpret_cast<SOCKADDR*>(&clientService), sizeof(clientService)) == SOCKET_ERROR)
	{
		cout << "client: connect() - failed to connect: " << WSAGetLastError() << endl;
		WSACleanup();
		return 0;
	}
	else
	{
		cout << "client: connect() is OK." << endl;
		cout << "client: can start sending and receiving data..." << endl;
	}

	return 1;
}

int TCPBankingClass::sendData(QString data)
{
	// Send data
	QByteArray tempArray = data.toLocal8Bit();
	char* charData = tempArray.data();
	int dataSize = tempArray.size();
	int sbyteCount = send(getSocket(), charData, dataSize, 0);
	if (sbyteCount == SOCKET_ERROR)
	{
		cout << "client send error: " << WSAGetLastError() << endl;
		return -1;
	}
	else
	{
		cout << "client: sent " << sbyteCount << " bytes" << endl;
	}
	//return sbyteCount;
}

int TCPBankingClass::receiveData()
{
	const int receivedDataSize = 1024;
	char receiveBuffer[receivedDataSize] = {};
	int rbyteCount = recv(getSocket(), receiveBuffer, receivedDataSize - 1, 0);
	if (rbyteCount < 0)
	{
		cout << "server recv() error: " << WSAGetLastError() << endl;
		return -1;
	}
	else
	{
		cout << "received data: " << receiveBuffer << endl;
	}

	receiveBuffer[rbyteCount] = '\0';

	string receiveBufferStr = receiveBuffer;
	string tempStr = "true";
	cout << strcmp(receiveBufferStr.c_str(), tempStr.c_str());
	if (strcmp(receiveBufferStr.c_str(), tempStr.c_str()) == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
