cmake_minimum_required(VERSION 3.29)

project(hello_std)

set(LIBCXX_MODULE_DIRS ${CMAKE_SOURCE_DIR}/extern/std)
    
add_library(std STATIC)
target_sources(std
     PUBLIC
     FILE_SET CXX_MODULES
     BASE_DIRS ${LIBCXX_MODULE_DIRS}
     FILES ${LIBCXX_MODULE_DIRS}/std.ixx ${LIBCXX_MODULE_DIRS}/std.compat.ixx)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE std)