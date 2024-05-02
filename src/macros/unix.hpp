#ifndef DETECT_MACROS_UNIX_HPP
#define DETECT_MACROS_UNIX_HPP

#if !defined(_WIN32) && (defined(__unix__) || (defined(__APPLE__) && defined(__MACH__)) || defined(__CYGWIN__))
#define PLATFORM_UNIX true

#include <unistd.h>

#if defined(_POSIX_VERSION)
#define PLATFORM_POSIX true

#else
#define PLATFORM_POSIX false

#endif

#else
#define PLATFORM_UNIX false

#endif

#endif
