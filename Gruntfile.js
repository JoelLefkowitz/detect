const { simple } = require("quick-grunt");

module.exports = simple(
  {
    clean: {},
    copy: {},
    exec: {
      cppcheck: "cppcheck --enable=style,performance,portability detect.hpp",
      cspell: 'npx cspell ".*" "*" "**/*"',
      remark: "npx remark -r .remarkrc --ignore-path .gitignore . .github",
      cfmt: `clang-format -i -style=file detect.hpp --verbose`,
      doxygen: "doxygen",
    },
  },
  [
    {
      name: "lint",
      description: "Lint the source code.",
      exec: ["cspell", "cppcheck", "remark"],
    },
    {
      name: "format",
      description: "Format the source code.",
      exec: ["cfmt"],
    },
    {
      name: "docs",
      description: "Generate documentation.",
      exec: ["doxygen"],
    },
  ]
);
