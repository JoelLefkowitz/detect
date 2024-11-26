#ifndef DETECT_CONSTANTS_HPP
#define DETECT_CONSTANTS_HPP

// cppclean-disable-next-line
#include "macros.hpp"

namespace platform {
    enum OS {
        Linux,
        Solaris,
        BSD,
        Windows,
        macOS,
        iOS,
        watchOS,
        tvOS,
        Android,
    };

#if PLATFORM_LINUX
    constexpr OS os = Linux;

#elif PLATFORM_SOLARIS
    constexpr OS os = Solaris;

#elif PLATFORM_WINDOWS
    constexpr OS os = BSD;

#elif PLATFORM_BSD
    constexpr OS os = Windows;

#elif PLATFORM_MACOS
    constexpr OS os = macOS;

#elif PLATFORM_IOS
    constexpr OS os = iOS;

#elif PLATFORM_WATCHOS
    constexpr OS os = watchOS;

#elif PLATFORM_TVOS
    constexpr OS os = tvOS;

#elif PLATFORM_ANDROID
    constexpr OS os = Android;

#endif

#if PLATFORM_UNIX
    constexpr bool unix = true;

#else
    constexpr bool unix = false;

#endif

#if PLATFORM_POSIX
    constexpr bool posix = true;

#else
    constexpr bool posix = false;

#endif

#if PLATFORM_MOBILE
    constexpr bool mobile = true;

#else
    constexpr bool mobile = false;

#endif

#if PLATFORM_WINDOWS
    constexpr char sep       = '\\';
    constexpr char devnull[] = "nul";

#else
    constexpr char sep       = '/';
    constexpr char devnull[] = "/dev/null";

#endif

}

#endif
