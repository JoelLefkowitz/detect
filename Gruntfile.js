const { simple } = require("quick-grunt");

module.exports = simple(
  {
    clean: {},
    copy: {},
    exec: {
      cppcheck: "cppcheck --enable=style,performance,portability src/*",
      cspell: 'npx cspell ".*" "*" "**/*"',
      remark: "npx remark -r .remarkrc --ignore-path .gitignore . .github",
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
      name: "docs",
      description: "Generate documentation.",
      exec: ["doxygen"],
    },
  ]
);
