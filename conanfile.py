import os 
from conan import ConanFile, tools
from glob import glob

class Recipe(ConanFile):
    name = "detect"
    description = "A single header library to detect the OS at compile time."
    version = "2.0.0"

    license = "MIT"
    url = "https://github.com/JoelLefkowitz/detect"
    
    author = "Joel Lefkowitz joellefkowitz@hotmail.com"
    topics = ()

    exports_sources = "src/*"
    
    def build(self):
        pass

    def package(self):
        tools.files.copy(self, "*.hpp", os.path.join(self.source_folder, "src"), os.path.join(self.package_folder, "include"))
        
    def package_info(self):
        self.cpp_info.libs = ["detect"]
