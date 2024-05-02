#ifndef DETECT_CONSTANTS_MOBILE_HPP
#define DETECT_CONSTANTS_MOBILE_HPP

namespace platform {

#if PLATFORM_MOBILE
    constexpr bool mobile = true;

#else
    constexpr bool mobile = false;

#endif

}

#endif
