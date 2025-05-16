cmake_minimum_required(VERSION 3.29)

project(simple_module)

set(LIBCXX_MODULE_DIRS ${CMAKE_SOURCE_DIR}/extern/std)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE std)

add_library(simple_math STATIC)

target_sources(simple_math
           PUBLIC
           FILE_SET CXX_MODULES
           BASE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}
           FILES ${CMAKE_CURRENT_SOURCE_DIR}/math.cppm)

target_link_libraries(${PROJECT_NAME} PRIVATE simple_math)
