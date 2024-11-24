from miniscons import (
    Build,
    Flag,
    Routine,
    Script,
    Target,
    Tasks,
    conan,
    packages,
    flags,
)
from walkmate import tree

env = conan()

cspell = Script(
    "cspell",
    ["npx", "cspell", ".", "--dot", "--gitignore"],
)

trufflehog3 = Script(
    "trufflehog3",
    ["trufflehog3"],
)

clang_format = Script(
    "clang-format",
    ["-i", tree(".", r"\.(cpp|hpp|tpp)$")],
)

prettier = Script(
    "prettier",
    ["npx", "prettier", ".", "--write"],
)

doxygen = Script(
    "doxygen",
    ["doxygen", "docs/doxygen/Doxyfile"],
)

breathe = Script(
    "breathe",
    [
        "breathe-apidoc",
        "./docs/doxygen/dist",
        "--output-dir",
        "docs/sphinx/dist",
        "--members",
    ],
)

sphinx = Script(
    "sphinx",
    ["sphinx-build", "docs/sphinx", "docs/dist"],
)

cli = Tasks(
    [],
    [],
    [
        cspell,
        trufflehog3,
        clang_format,
        prettier,
        doxygen,
        breathe,
        sphinx,
    ],
    [
        Routine("lint", [cspell, trufflehog3]),
        Routine("format", [clang_format, prettier]),
        Routine("docs", [doxygen, breathe, sphinx]),
    ],
)

cli.register(env)
