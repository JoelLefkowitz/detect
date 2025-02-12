import os

from conan import ConanFile
from conan.tools.scons import SConsDeps
from conan.tools.layout import basic_layout


class DetectConan(ConanFile):
    def layout(self):
        basic_layout(self, src_folder="src")

    def generate(self):
        SConsDeps(self).generate()
