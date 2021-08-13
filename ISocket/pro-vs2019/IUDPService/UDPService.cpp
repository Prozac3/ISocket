#include "UDPService.h"
#include "IUDPService.h"
ISocket::UDPService::UDPService()
{
}

ISocket::UDPService::~UDPService()
{
}

bool ISocket::UDPService::readConfig()
{
	return true;
}

bool ISocket::UDPService::version()
{
	return true;
}

void ISocket::UDPService::setSocket(SOCKET* sockSrv, int flag)
{
	
}

void ISocket::UDPService::setAddr(SOCKADDR_IN* addr, const std::string& IP, int port)
{
	
}

bool ISocket::UDPService::bindAddr(SOCKET sockSrv, SOCKADDR* addr)
{
	return true;
}

bool ISocket::UDPService::joinGroup(SOCKET sockSrv, const std::string& IP)
{
	return true;
}

int ISocket::UDPService::sendData(char* sendBuf, int size, SOCKADDR* toAddr, int len)
{
	return 0;
}

int ISocket::UDPService::recvData()
{
	return 0;
}

ISocket::IUDPService* ISocket::CreateUDPservice() {

	return new UDPService;
}
