#ifndef _IUDPSERVICE_H_
#define _IUDPSERVICE_H_

#include "socket_export.h"
#include <iostream>
#include <WinSock2.h>





namespace ISocket {
	class IUDPService {
	public:
		IUDPService() {};
		virtual ~IUDPService() {};
	public:

		/*
		@brief	读取配置文件
		*/
		virtual bool	readConfig() = 0;

		/*
		@brief	版本校验
		*/
		virtual bool	version() = 0;

		/*
		@brief	设置套接字接收模式
		@param	sockSrv		套接字
		@param	flag		接收模式
		*/
		virtual void	setSocket(SOCKET* sockSrv, int flag) = 0;

		/*
		@brief	设置地址
		@param	addr		地址指针，用于保存地址信息
		@param	IP			IP地址
		@param	port		端口号
		*/
		virtual void	setAddr(SOCKADDR_IN* addr, const std::string& IP, int port) = 0;

		/*
		@brief	套接字绑定地址
		@param	sockSrv		套接字
		@param	addr		地址
		@return	bool		绑定成功返回true
		*/
		virtual bool	bindAddr(SOCKET sockSrv, SOCKADDR* addr) = 0;

		/*
		@brief	加入组播
		@param	sockSrv		服务端套接字
		@param	IP			IP地址
		@return	bool		加入成功返回ture
		*/
		virtual bool	joinGroup(SOCKET sockSrv, const std::string& IP) = 0;

		/*
		@brief	发送数据
		@param	sendBuf		数据包
		@param	size		数据包大小
		@param	toAddr		目标地址
		@param  len			目标地址长度
		@return	int			成功发送数据长度
		*/
		virtual int		sendData(char* sendBuf, int size, SOCKADDR* toAddr, int len) = 0;

		/*
		@brief	接收数据
		*/
		virtual int		recvData() = 0;
	};

	//创建实例
	UDPSERVICE_API IUDPService* CreateUDPservice();


}

#endif // !_IUDPSERVICE_H

