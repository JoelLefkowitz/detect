# Usage {#mainpage}

A single header library to detect the OS at compile time.

Using [compiler predefined macros](http://web.archive.org/web/20191012035921/http://nadeausoftware.com/articles/2012/01/c_c_tip_how_use_compiler_predefined_macros_detect_operating_system) we can detect the operating system before compilation. To trigger conditional compilation in a readable way we can check for equality against macros exported for each operating system.

```cpp
#include "detect.hpp"

#if PLATFORM_OS == PLATFORM_OS_LINUX
...
#endif
```

The exported macros are:

- `PLATFORM_OS_LINUX`
- `PLATFORM_OS_SOLARIS`
- `PLATFORM_OS_WINDOWS`
- `PLATFORM_OS_BSD`
- `PLATFORM_OS_MACOS`
- `PLATFORM_OS_IOS`
- `PLATFORM_OS_WATCHOS`
- `PLATFORM_OS_TVOS`
- `PLATFORM_OS_ANDROID`

We can also detect if the operating system is compliant with the Unix and Posix standards or is for a mobile.

- `PLATFORM_UNIX`
- `PLATFORM_POSIX`
- `PLATFORM_MOBILE`

These will be booleans rather than defined or undefined.

It is also useful to define compile time constants:

```cpp
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
    }

    constexpr OS os
    constexpr char sep
    constexpr char devnull[]

    constexpr bool unix
    constexpr bool posix
    constexpr bool mobile
}
```
