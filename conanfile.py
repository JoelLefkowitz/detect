import os 
from conan import ConanFile, tools
from glob import glob

required_conan_version = ">=1.52.0"

class PackageConan(ConanFile):
    name = "detect"
    description = "A single header library to detect the OS at compile time."

    version = "2.0.1"
    license = "MIT"

    author = "Joel Lefkowitz joellefkowitz@hotmail.com"
    url = "https://github.com/JoelLefkowitz/detect"
    homepage = "https://github.com/project/package"

    topics = ("os", "header-only")
    settings = ()
    
    no_copy_source = True
    exports_sources = "src/*"

    @property
    def _min_cppstd(self):
        return 11

    def source(self):
        tools.files.get(self, **self.conan_data["sources"][self.version], strip_root=True)

    def package(self):
        tools.files.copy(self, "*.hpp", os.path.join(self.source_folder, "src"), os.path.join(self.package_folder, "include"))
        tools.files.copy(self, "LICENSE", self.source_folder, os.path.join(self.package_folder, "licenses"))

    def package_id(self):
        self.info.clear()

    def package_info(self):
        self.cpp_info.libs = ["detect"]

