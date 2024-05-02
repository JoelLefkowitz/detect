#ifndef DETECT_CONSTANTS_UNIX_HPP
#define DETECT_CONSTANTS_UNIX_HPP

namespace platform {

#if PLATFORM_UNIX
    constexpr bool unix = true;

#else
    constexpr bool unix  = false;

#endif

#if PLATFORM_POSIX
    constexpr bool posix = true;

#else
    constexpr bool posix = false;

#endif

}

#endif
