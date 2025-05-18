cmake_minimum_required(VERSION 3.29)

project(module_partitions)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE std)

add_library(${PROJECT_NAME}_math STATIC)

target_sources(${PROJECT_NAME}_math
        PUBLIC
        FILE_SET CXX_MODULES
        FILES 
        ${CMAKE_CURRENT_SOURCE_DIR}/math.cppm
        ${CMAKE_CURRENT_SOURCE_DIR}/math_fun.cppm
        ${CMAKE_CURRENT_SOURCE_DIR}/math_vec.cppm
        ${CMAKE_CURRENT_SOURCE_DIR}/math_base.cpp
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/math.cpp
        )
target_link_libraries(${PROJECT_NAME}_math PRIVATE std)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PROJECT_NAME}_math)
