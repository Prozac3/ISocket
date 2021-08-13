#pragma once
#include "IUDPService.h"

namespace ISocket {
    class UDPService :public IUDPService
    {
    public:
        UDPService();
        ~UDPService();
       
    public:
        virtual bool readConfig() override;

        virtual bool version() override;


        virtual void setSocket(SOCKET* sockSrv, int flag) override;


        virtual void setAddr(SOCKADDR_IN* addr, const std::string& IP, int port) override;


        virtual bool bindAddr(SOCKET sockSrv, SOCKADDR* addr) override;


        virtual bool joinGroup(SOCKET sockSrv, const std::string& IP) override;


        virtual int sendData(char* sendBuf, int size, SOCKADDR* toAddr, int len) override;


        virtual int recvData() override;

    };

}