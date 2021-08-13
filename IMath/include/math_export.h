#ifndef _MATH_EXPORT_H_
#define _MATH_EXPORT_H_

#if defined(_WIN32)
#if defined(IMATH_EXPORT)
#define IMATH_API	__declspec(dllexport)
#else
#define IMATH_API	__declspec(dllimport)
#endif
#else
#define IMATH_API
#endif

#endif // _MATH_EXPORT_H_
