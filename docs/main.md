# Usage {#mainpage}

Using [compiler predefined macros][macros] we can detect the operating system at compile time. These are aliased so that we can conditionally compile other sections in a readable way.

```cpp
#include "detect.hpp"

#if PLATFORM_DETECTED_OS == PLATFORM_LINUX
...
#endif
```

The platform macros exported are:

```cpp
PLATFORM_LINUX
PLATFORM_DARWIN
PLATFORM_WINDOWS
PLATFORM_BSD
PLATFORM_SOLARIS
PLATFORM_IOS
PLATFORM_ANDROID
```

We provide an enumeration for the operating systems:

```cpp
namespace platform {
    enum OS {
        Linux,
        Darwin,
        Windows,
        BSD,
        Solaris,
        IOS,
        Android
    };
}
```

Using constant expression we can export some operating system specific constants at compile time:

```cpp
namespace platform {
    constexpr OS os = Linux;
    constexpr char sep = '/';
    constexpr char devnull = '/dev/null';
}
```

<!-- External links -->

[macros]: http://web.archive.org/web/20191012035921/http://nadeausoftware.com/articles/2012/01/c_c_tip_how_use_compiler_predefined_macros_detect_operating_system
