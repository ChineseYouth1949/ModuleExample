cmake_minimum_required(VERSION 3.29)

project(ModuleExample)

# 设置C++标准为C++23
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 启用C++20 Modules支持
set(CMAKE_CXX_SCAN_FOR_MODULES ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 当前CMake要求启用扩展才能使用import std
set(CMAKE_CXX_EXTENSIONS ON)

add_subdirectory(example)