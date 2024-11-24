from conan import ConanFile
from conan.tools.scons import SConsDeps


class Recipe(ConanFile):
    def requirements(self):
        self.requires(self.tested_reference_str)


    def generate(self):
        SConsDeps(self).generate()

    def test(self):
        self.run("scons test")
