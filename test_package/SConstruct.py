from miniscons import Build, Target, Tasks, conan, flags, packages
from walkmate import tree

env = conan()

tests = Build(
    "tests",
    tree(".", r"\.cpp$"),
    flags("c++11", [], ["unused-value"]),
)

cli = Tasks(
    [tests],
    [Target("test", tests)],
)

cli.register(env)
