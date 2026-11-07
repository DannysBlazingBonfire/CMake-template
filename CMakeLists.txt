cmake_minimum_required(VERSION 4.4)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(codetest LANGUAGES CXX)

add_subdirectory(app)
add_subdirectory(libraries)
add_subdirectory(dynamic_libs)
