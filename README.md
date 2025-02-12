# Detect

Detect the OS at compile time.

c++11
dependency free
header only

![Review](https://img.shields.io/github/actions/workflow/status/JoelLefkowitz/detect/review.yaml)
![Quality](https://img.shields.io/codacy/grade/fbc5f4145f4748ee81be186027b7e5b5)

## Installing

```bash
conan search detect
```

You can also download the [sources](https://download-directory.github.io?url=https://github.com/JoelLefkowitz/detect/tree/master/src).

## Documentation

Documentation and more detailed examples are hosted on [Github Pages](https://joellefkowitz.github.io/detect).

## Usage

Using [compiler predefined macros](http://web.archive.org/web/20191012035921/http://nadeausoftware.com/articles/2012/01/c_c_tip_how_use_compiler_predefined_macros_detect_operating_system) we can detect the operating system before compilation. This allows us to conditionally compile code:

```cpp
#include <detect/macros.hpp>

#if PLATFORM_LINUX
...
#endif
```

If we can check this at runtime then constants are more flexible:

```cpp
#include <detect/constants.hpp>

if (platform::os == platform::linux) {
  ...
}
```

The exported macros are:

- `PLATFORM_LINUX`
- `PLATFORM_SOLARIS`
- `PLATFORM_WINDOWS`
- `PLATFORM_BSD`
- `PLATFORM_MACOS`
- `PLATFORM_IOS`
- `PLATFORM_WATCHOS`
- `PLATFORM_TVOS`
- `PLATFORM_ANDROID`
- `PLATFORM_UNIX`
- `PLATFORM_POSIX`
- `PLATFORM_MOBILE`

The compile time constants are contained in the `platform` namesapce:

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

    constexpr bool unix
    constexpr bool posix
    constexpr bool mobile

    constexpr char sep
    constexpr char devnull[]
}
```

## Tooling

### Dependencies

To install dependencies:

```bash
yarn install
pip install .[all]
conan install .
```

### Tests

To run tests:

```bash
scons test
```

### Documentation

To generate the documentation locally:

```bash
scons docs
```

### Linters

To run linters:

```bash
scons lint
```

### Formatters

To run formatters:

```bash
scons format
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

<div align='center'>
    <img width=200 height=200 src='https://media.giphy.com/media/osAcIGTSyeovPq6Xph/giphy.gif' alt='Be kind to your mind' />
    <img width=200 height=200 src='https://media.giphy.com/media/KEAAbQ5clGWJwuJuZB/giphy.gif' alt='Love each other' />
    <img width=200 height=200 src='https://media.giphy.com/media/WRWykrFkxJA6JJuTvc/giphy.gif' alt="It's ok to have a bad day" />
</div>
