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
		@brief	��ȡ�����ļ�
		*/
		virtual bool	readConfig() = 0;

		/*
		@brief	�汾У��
		*/
		virtual bool	version() = 0;

		/*
		@brief	�����׽��ֽ���ģʽ
		@param	sockSrv		�׽���
		@param	flag		����ģʽ
		*/
		virtual void	setSocket(SOCKET* sockSrv, int flag) = 0;

		/*
		@brief	���õ�ַ
		@param	addr		��ַָ�룬���ڱ����ַ��Ϣ
		@param	IP			IP��ַ
		@param	port		�˿ں�
		*/
		virtual void	setAddr(SOCKADDR_IN* addr, const std::string& IP, int port) = 0;

		/*
		@brief	�׽��ְ󶨵�ַ
		@param	sockSrv		�׽���
		@param	addr		��ַ
		@return	bool		�󶨳ɹ�����true
		*/
		virtual bool	bindAddr(SOCKET sockSrv, SOCKADDR* addr) = 0;

		/*
		@brief	�����鲥
		@param	sockSrv		������׽���
		@param	IP			IP��ַ
		@return	bool		����ɹ�����ture
		*/
		virtual bool	joinGroup(SOCKET sockSrv, const std::string& IP) = 0;

		/*
		@brief	��������
		@param	sendBuf		���ݰ�
		@param	size		���ݰ���С
		@param	toAddr		Ŀ���ַ
		@param  len			Ŀ���ַ����
		@return	int			�ɹ��������ݳ���
		*/
		virtual int		sendData(char* sendBuf, int size, SOCKADDR* toAddr, int len) = 0;

		/*
		@brief	��������
		*/
		virtual int		recvData() = 0;
	};

	//����ʵ��
	UDPSERVICE_API IUDPService* CreateUDPservice();


}

#endif // !_IUDPSERVICE_H

