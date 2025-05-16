cmake_minimum_required(VERSION 3.29)

project(separate_imp)

set(LIBCXX_MODULE_DIRS ${CMAKE_SOURCE_DIR}/extern/std)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE std)

add_library(separate_imp_math STATIC)

target_sources(separate_imp_math
        PUBLIC
        FILE_SET CXX_MODULES
        TYPE CXX_MODULES
        BASE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}
        FILES ${CMAKE_CURRENT_SOURCE_DIR}/math.cppm
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/math.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE separate_imp_math)
