#ifndef DETECT_MACROS_HPP
#define DETECT_MACROS_HPP

#ifdef __linux__
#define PLATFORM_LINUX true

#elif defined(__sun) && defined(__SVR4)
#define PLATFORM_SOLARIS true

#elif defined(_WIN32) || defined(__CYGWIN__)
#define PLATFORM_WINDOWS true

#elif defined(__unix__)
#include <sys/param.h>

#ifdef BSD
#define PLATFORM_BSD true

#endif

#elif defined(__APPLE__) && defined(__MACH__)
#include <TargetConditionals.h>

#if TARGET_OS_MAC
#define PLATFORM_MACOS true

#elif TARGET_OS_IPHONE
#define PLATFORM_IOS true
#define PLATFORM_MOBILE true

#elif TARGET_OS_TV
#define PLATFORM_TVOS true

#elif TARGET_OS_WATCH
#define PLATFORM_WATCHOS true
#define PLATFORM_MOBILE true

#endif

#elif defined(__ANDROID__)
#define PLATFORM_ANDROID true
#define PLATFORM_MOBILE true

#endif

#if !defined(_WIN32) && (defined(__unix__) || (defined(__APPLE__) && defined(__MACH__)) || defined(__CYGWIN__))
#define PLATFORM_UNIX true
#include <unistd.h>

#ifdef _POSIX_VERSION
#define PLATFORM_POSIX true

#endif

#endif

// These #ifndef statements reduce nesting over #else blocks
#ifndef PLATFORM_LINUX
#define PLATFORM_LINUX false

#endif

#ifndef PLATFORM_SOLARIS
#define PLATFORM_SOLARIS false

#endif

#ifndef PLATFORM_WINDOWS
#define PLATFORM_WINDOWS false

#endif

#ifndef PLATFORM_BSD
#define PLATFORM_BSD false

#endif

#ifndef PLATFORM_MACOS
#define PLATFORM_MACOS false

#endif

#ifndef PLATFORM_IOS
#define PLATFORM_IOS false

#endif

#ifndef PLATFORM_MOBILE
#define PLATFORM_MOBILE false

#endif

#ifndef PLATFORM_TVOS
#define PLATFORM_TVOS false

#endif

#ifndef PLATFORM_WATCHOS
#define PLATFORM_WATCHOS false

#endif

#ifndef PLATFORM_ANDROID
#define PLATFORM_ANDROID false

#endif

#ifndef PLATFORM_UNIX
#define PLATFORM_UNIX false

#endif

#ifndef PLATFORM_POSIX
#define PLATFORM_POSIX false

#endif

#endif
