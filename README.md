# Detect

A single header library to detect the OS at compile time.

## Status

| Source     | Shields                                                       |
| ---------- | ------------------------------------------------------------- |
| Project    | ![latest_release] ![license] ![line_count] ![language_count]  |
| Health     | ![documentation] ![review_action] ![codacy_quality]           |
| Repository | ![open_issues] ![closed_issues] ![open_pulls] ![closed_pulls] |
| Activity   | ![contributors] ![monthly_commits] ![last_commit]             |

## Installation

### Sources

```bash
conan install detect
```

You can also download the [source](https://raw.githubusercontent.com/JoelLefkowitz/detect/master/src/detect.hpp) and drop it straight into your project.

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

## Documentation

This repository's documentation is hosted on [Github Pages](https://JoelLefkowitz.github.io/detect).

To generate the documentation locally:

```bash
doxygen
```

## Linters

To run linters:

```bash
nps lint
```

## Formatters

To run formatters:

```bash
nps format
```

## Continuous integration

This repository uses GitHub Actions to lint and test each commit. Each commit should be formatted and its corresponding documentation should be updated.

## Versioning

This repository adheres to semantic versioning standards. For more information on semantic versioning visit [semver](https://semver.org).

Bump2version is used to version and tag changes. For example:

```bash
bump2version patch
```

## Changelog

Please read this repository's [changelog](CHANGELOG.md) for details on changes that have been made.

## Contributing

Please read this repository's guidelines on [contributing](CONTRIBUTING.md) for details on the process for submitting pull requests. Moreover, our [code of conduct](CODE_OF_CONDUCT.md) declares our collaboration standards.

## Contributors

- [Joel Lefkowitz](https://github.com/joellefkowitz) - Initial work

## Remarks

Lots of love to the open source community!

<p align='center'>
    <img width=200 height=200 src='https://media.giphy.com/media/osAcIGTSyeovPq6Xph/giphy.gif' alt='Be kind to your mind' />
    <img width=200 height=200 src='https://media.giphy.com/media/KEAAbQ5clGWJwuJuZB/giphy.gif' alt='Love each other' />
    <img width=200 height=200 src='https://media.giphy.com/media/WRWykrFkxJA6JJuTvc/giphy.gif' alt="It's ok to have a bad day" />
</p>

[test_ubuntu_20.04]: https://img.shields.io/github/actions/workflow/status/JoelLefkowitz/detect/test_ubuntu_20.04.yml "Review action"
[test_macos_12 ]: https://img.shields.io/github/actions/workflow/status/JoelLefkowitz/detect/test_macos_12.yml "Review action"
[test_windows_2022]: https://img.shields.io/github/actions/workflow/status/JoelLefkowitz/detect/test_windows_2022.yml "Review action"
[latest_release]: https://img.shields.io/github/v/tag/joellefkowitz/detect "Latest release"
[license]: https://img.shields.io/github/license/joellefkowitz/detect "License"
[line_count]: https://img.shields.io/tokei/lines/github/joellefkowitz/detect "Line count"
[language_count]: https://img.shields.io/github/languages/count/joellefkowitz/detect "Language count"
[documentation]: https://img.shields.io/readthedocs/detect "Documentation"
[review_action]: https://img.shields.io/github/actions/workflow/status/JoelLefkowitz/detect/review.yml "Review action"
[codacy_quality]: https://img.shields.io/codacy/grade/fbc5f4145f4748ee81be186027b7e5b5 "Codacy quality"
[conan_version]: https://img.shields.io/conan/v/detect "Conan Version"
[open_issues]: https://img.shields.io/github/issues/joellefkowitz/detect "Open issues"
[closed_issues]: https://img.shields.io/github/issues-closed/joellefkowitz/detect "Closed issues"
[open_pulls]: https://img.shields.io/github/issues-pr/joellefkowitz/detect "Open pull requests"
[closed_pulls]: https://img.shields.io/github/issues-pr-closed/joellefkowitz/detect "Closed pull requests"
[contributors]: https://img.shields.io/github/contributors/joellefkowitz/detect "Contributors"
[monthly_commits]: https://img.shields.io/github/commit-activity/m/joellefkowitz/detect "Monthly commits"
[last_commit]: https://img.shields.io/github/last-commit/joellefkowitz/detect "Last commit"
