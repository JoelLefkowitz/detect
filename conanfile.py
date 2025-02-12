import os

from conan import ConanFile
from conan.tools.files import copy
from conan.tools.scons import SConsDeps
from conan.tools.layout import basic_layout


class DetectConan(ConanFile):
    name = "detect"
    description = "Detect the OS at compile time."
    version = "3.0.0"
    license = "MIT"

    url = "https://github.com/conan-io/conan-center-index"
    homepage = "https://github.com/JoelLefkowitz/detect"

    topics = (
        "os",
        "platform",
        "introspect",
        "header-only",
    )

    package_type = "header-library"
    settings = (
        "os",
        "arch",
        "compiler",
        "build_type",
    )

    no_copy_source = True
    exports = "src/*"

    def layout(self):
        basic_layout(self, src_folder="src")

    def package_id(self):
        self.info.clear()

    def build(self):
        pass

    def package(self):
        copy(
            self,
            "LICENSE.md",
            self.recipe_folder,
            os.path.join(self.package_folder, "licenses"),
        )
        copy(
            self,
            "*.[ht]pp",
            os.path.join(self.recipe_folder, "src"),
            os.path.join(self.package_folder, "include", self.name),
        )

    def package_info(self):
        self.cpp_info.bindirs = []
        self.cpp_info.libdirs = []
