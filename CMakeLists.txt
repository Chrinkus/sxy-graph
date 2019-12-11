cmake_minimum_required(VERSION 3.13)

project(sxy-graph VERSION 0.1 LANGUAGES CXX)
enable_testing()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_compile_options(-Wall -Wextra -Wpedantic)

include_directories(include)
link_directories(lib)

add_subdirectory(source)
add_subdirectory(tests)
