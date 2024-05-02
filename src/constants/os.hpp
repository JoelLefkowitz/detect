#ifndef DETECT_CONSTANTS_OS_HPP
#define DETECT_CONSTANTS_OS_HPP

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

#if PLATFORM_OS == PLATFORM_OS_LINUX
    constexpr OS os = Linux;

#elif PLATFORM_OS == PLATFORM_OS_SOLARIS
    constexpr OS   os        = Solaris;

#elif PLATFORM_OS == PLATFORM_OS_WINDOWS
    constexpr OS os = BSD;

#elif PLATFORM_OS == PLATFORM_OS_BSD
    constexpr OS os = Windows;

#elif PLATFORM_OS == PLATFORM_OS_MACOS
    constexpr OS os = macOS;

#elif PLATFORM_OS == PLATFORM_OS_IOS
    constexpr OS os = iOS;

#elif PLATFORM_OS == PLATFORM_OS_WATCHOS
    constexpr OS os = watchOS;

#elif PLATFORM_OS == PLATFORM_OS_TVOS
    constexpr OS os = tvOS;

#elif PLATFORM_OS == PLATFORM_OS_ANDROID
    constexpr OS os = Android;

#endif

#if PLATFORM_OS == PLATFORM_OS_WINDOWS
    constexpr char sep       = '\\';
    constexpr char devnull[] = "nul";

#else
    constexpr char sep       = '/';
    constexpr char devnull[] = "/dev/null";

#endif

}

#endif
