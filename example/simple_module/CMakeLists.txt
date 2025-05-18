cmake_minimum_required(VERSION 3.29)

project(simple_module)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE std)

add_library(simple_math STATIC)

target_sources(simple_math
           PUBLIC
           FILE_SET CXX_MODULES
           FILES ${CMAKE_CURRENT_SOURCE_DIR}/math.cppm)

target_link_libraries(${PROJECT_NAME} PRIVATE simple_math)
