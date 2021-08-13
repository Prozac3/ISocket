#ifndef _SOCKET_EXPORT_H_
#define _SOCKET_EXPORT_H_

#if defined(_WIN32)
#if defined(UDPSERVICE_EXPORT)
#define UDPSERVICE_API	__declspec(dllexport)
#else
#define UDPSERVICE_API	__declspec(dllimport)
#endif
#endif


#endif
