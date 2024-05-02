#ifndef DETECT_MACROS_OS_HPP
#define DETECT_MACROS_OS_HPP

#define PLATFORM_OS_LINUX 1
#define PLATFORM_OS_SOLARIS 2
#define PLATFORM_OS_WINDOWS 3
#define PLATFORM_OS_BSD 4
#define PLATFORM_OS_MACOS 5
#define PLATFORM_OS_IOS 6
#define PLATFORM_OS_WATCHOS 7
#define PLATFORM_OS_TVOS 8
#define PLATFORM_OS_ANDROID 9

#ifdef __linux__
#define PLATFORM_OS PLATFORM_OS_LINUX

#elif defined(__sun) && defined(__SVR4)
#define PLATFORM_OS PLATFORM_OS_SOLARIS

#elif defined(_WIN32) || defined(__CYGWIN__)
#define PLATFORM_OS PLATFORM_OS_WINDOWS

#elif defined(__unix__)
#include <sys/param.h>

#if defined(BSD)
#define PLATFORM_OS PLATFORM_OS_BSD

#endif

#elif defined(__APPLE__) && defined(__MACH__)
#include <TargetConditionals.h>

#if TARGET_OS_MAC
#define PLATFORM_OS PLATFORM_OS_MACOS

#elif TARGET_OS_IPHONE
#define PLATFORM_OS PLATFORM_OS_IOS

#elif TARGET_OS_TV
#define PLATFORM_OS PLATFORM_OS_TVOS

#elif TARGET_OS_WATCH
#define PLATFORM_OS PLATFORM_OS_WATCHOS

#endif

#elif defined(__ANDROID__)
#define PLATFORM_OS PLATFORM_OS_ANDROID

#endif

// From these conditions we can see that PLATFORM_OS macro will not be defined
// if the OS is:
//
//  - Not in the Linux, Solaris, Windows, Darwin or Android families
//  - Not in the BSD, Linux or Solaris families but sets the __unix__ flag
//  - In the Darwin family but not macOS, iOS, tvOS, watchOS
//
// In such a case some investigation will be required and so it's sensible to
// throw an error.

#ifndef PLATFORM_OS
#error "Could not detect OS"

#endif

#endif
