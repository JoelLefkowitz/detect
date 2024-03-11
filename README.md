# Detect

A single header library to detect the OS at compile time.

![Review](https://img.shields.io/github/actions/workflow/status/JoelLefkowitz/detect/review.yml)
![Quality](https://img.shields.io/codacy/grade/fbc5f4145f4748ee81be186027b7e5b5)

## Installation

```bash
conan install detect
```

You can also download the [source](https://raw.githubusercontent.com/JoelLefkowitz/detect/master/src/detect.hpp) and drop it straight into your project.

## Documentation

Documentation and more detailed examples are hosted on [Github Pages](https://joellefkowitz.github.io/detect).

## Usage

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

## Tooling
 
Set the `CPPPATH` and `LIBPATH` environment variables:

```bash
export CPPPATH="/usr/include"
export LIBPATH="/usr/lib"
```


### Tests

To run tests:

```bash
scons
./dist/tests
```

### Documentation

To generate the documentation locally:

```sh
doxygen
```

### Linters

To run linters:

```sh
cspell . --dot
cppclean . --include-path $CPPPATH
cppcheck **/*.*pp -q --enable=all --suppressions-list=.cppcheck
scons --typecheck
```

### Formatters

To run formatters:

```sh
prettier . --write
clang-format -i **/*.*pp
```

## Contributing

Please read this repository's [Code of Conduct](CODE_OF_CONDUCT.md) which outlines our collaboration standards and the [Changelog](CHANGELOG.md) for details on breaking changes that have been made.

This repository adheres to semantic versioning standards. For more information on semantic versioning visit [SemVer](https://semver.org).

Bump2version is used to version and tag changes. For example:

```bash
bump2version patch
```

### Contributors

- [Joel Lefkowitz](https://github.com/joellefkowitz) - Initial work

## Remarks

Lots of love to the open source community!

<p align='center'>
    <img width=200 height=200 src='https://media.giphy.com/media/osAcIGTSyeovPq6Xph/giphy.gif' alt='Be kind to your mind' />
    <img width=200 height=200 src='https://media.giphy.com/media/KEAAbQ5clGWJwuJuZB/giphy.gif' alt='Love each other' />
    <img width=200 height=200 src='https://media.giphy.com/media/WRWykrFkxJA6JJuTvc/giphy.gif' alt="It's ok to have a bad day" />
</p>
