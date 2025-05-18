# ModuleExample
A guide to building projects using cmake and c++20 modules.

# Table of Contents
## 1.hello std
    using the std module.
    Under LIBCXX_MODULE_DIRS STD. Ixx files use vs the stdio generated, may refer to https://learn.microsoft.com/zh-cn/cpp/cpp/modules-cpp?view=msvc-170.
## 2.simple module
    Create a module that only contains.cppm and export it for use as a library.
## 3.separate imp
    Create and use modules that contain .cppm. cpp.
## 4.multiple export
    More ways to export.
## 5.sub_module
    Creating and using submodules.
    Benefit: You can import the entire contents of a module at once, or you can import parts you want to use in turn.
    Note that when you import submodules from the main module, if you don't use export, the submodules won't be visible to the code importing the main module.
## 6.module_partitions
    Create and use module partitions.
    The hierarchy of submodules is visible to the user, but the module partitions are not visible to the user but only within the module itself.
    
    Different partitions of A can be declared in different files, but must be exported directly or indirectly by the file declaring the module of A, and must also be implemented in the implementation file of module A.
    
    Partitions can be declared directly in the.cpp file. Such partitions are called implementation partitions.  The implementation partition cannot be exported and is only used internally by the module;  math_base is the implementation partition.  It imports a set of basic functions needed by other partitions and is imported in the main module declaration file math. cppm so that it can be used by other partition implementations.
# References
cmake       :   https://cmake.org/cmake/help/latest/manual/cmake-cxxmodules.7.html
c++ module  :   https://learn.microsoft.com/zh-cn/cpp/cpp/modules-cpp?view=msvc-170