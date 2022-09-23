# Detect

A single header library to detect the OS at compile time.

## Status

| Source     | Shields                                                                                                                     |
| ---------- | --------------------------------------------------------------------------------------------------------------------------- |
| Project    | ![release][release_shield] ![license][license_shield]                                                                       |
| Health     | ![readthedocs][readthedocs_shield] ![github_review][github_review_shield]                                                   |
| Repository | ![issues][issues_shield] ![issues_closed][issues_closed_shield] ![pulls][pulls_shield] ![pulls_closed][pulls_closed_shield] |
| Activity   | ![contributors][contributors_shield] ![monthly_commits][monthly_commits_shield] ![last_commit][last_commit_shield]          |

## Usage

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
}
```

For more details read the [documentation][pages].

## Tooling

### Lint

```bash
grunt lint
```

### Format

```bash
grunt format
```

## Continuous integration

This repository uses github actions to lint and test each commit. Formatting tasks and writing/generating documentation must be done before committing new code.

## Versioning

This repository adheres to semantic versioning standards.
For more information on semantic versioning visit [SemVer][semver].

Bump2version is used to version and tag changes.
For example:

```bash
bump2version patch
```

## Changelog

Please read this repository's [changelog](CHANGELOG.md) for details on changes that have been made.

## Contributing

Please read this repository's guidelines on [contributing](CONTRIBUTING.md) for details on the process for submitting pull requests. Moreover, our [code of conduct](CODE_OF_CONDUCT.md) declares our collaboration standards.

## Contributors

- **Joel Lefkowitz** - _Initial work_ - [Joel Lefkowitz][author]

[![Buy Me A Coffee][coffee_button]][author_coffee]

## Remarks

Lots of love to the open source community!

![Be kind][be_kind]

<!-- External links -->

[pages]: https://joellefkowitz.github.io/detect
[semver]: http://semver.org/
[be_kind]: https://media.giphy.com/media/osAcIGTSyeovPq6Xph/giphy.gif
[macros]: http://web.archive.org/web/20191012035921/http://nadeausoftware.com/articles/2012/01/c_c_tip_how_use_compiler_predefined_macros_detect_operating_system

<!-- Contributor links -->

[author]: https://github.com/joellefkowitz
[author_coffee]: https://www.buymeacoffee.com/joellefkowitz
[coffee_button]: https://cdn.buymeacoffee.com/buttons/default-blue.png

<!-- Project shields -->

[release_shield]: https://img.shields.io/github/v/tag/joellefkowitz/detect
[license_shield]: https://img.shields.io/github/license/joellefkowitz/detect

<!-- Health shields -->

[readthedocs_shield]: https://img.shields.io/readthedocs/detect
[github_review_shield]: https://img.shields.io/github/workflow/status/JoelLefkowitz/detect/Review

<!-- Repository shields -->

[issues_shield]: https://img.shields.io/github/issues/joellefkowitz/detect
[issues_closed_shield]: https://img.shields.io/github/issues-closed/joellefkowitz/detect
[pulls_shield]: https://img.shields.io/github/issues-pr/joellefkowitz/detect
[pulls_closed_shield]: https://img.shields.io/github/issues-pr-closed/joellefkowitz/detect

<!-- Activity shields -->

[contributors_shield]: https://img.shields.io/github/contributors/joellefkowitz/detect
[monthly_commits_shield]: https://img.shields.io/github/commit-activity/m/joellefkowitz/detect
[last_commit_shield]: https://img.shields.io/github/last-commit/joellefkowitz/detect
