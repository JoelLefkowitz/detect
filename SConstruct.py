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

cppclean = Script(
    "cppclean",
    ["cppclean", "."],
)

trufflehog = Script(
    "trufflehog",
    ["trufflehog3"],
)

clang_format = Script(
    "clang-format",
    ["clang-format", "-i", tree(".", r"\.(cpp|hpp|tpp)$")],
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
    "sphinx-build",
    ["sphinx-build", "docs/sphinx", "docs/dist"],
)

lint = Routine(
    "lint",
    [cspell, cppclean, trufflehog],
)

fmt = Routine(
    "format",
    [clang_format, prettier],
)

docs = Routine(
    "docs",
    [doxygen, breathe, sphinx],
)

cli = Tasks(
    [],
    [],
    [*lint.scripts, *fmt.scripts, *docs.scripts],
    [lint, fmt, docs],
)

cli.register(env)
