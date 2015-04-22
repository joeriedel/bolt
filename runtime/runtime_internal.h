#pragma once

#if defined(WIN32)

#if defined(runtime_EXPORTS)
#define RUNTIME_API __declspec(dllexport)
#else
#define RUNTIME_API __declspec(dllimport)
#endif

#else

#if defined(__GNUC__)
#define RUNTIME_API __attribute__ ((visibility("default"))
#else
#define RUNTIME_API
#endif

#endif
