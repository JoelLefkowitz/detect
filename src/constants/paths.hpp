#ifndef DETECT_CONSTANTS_PATHS_HPP
#define DETECT_CONSTANTS_PATHS_HPP

namespace platform {

#if PLATFORM_OS == PLATFORM_OS_WINDOWS
    constexpr char sep       = '\\';
    constexpr char devnull[] = "nul";

#else
    constexpr char sep       = '/';
    constexpr char devnull[] = "/dev/null";

#endif

}

#endif
