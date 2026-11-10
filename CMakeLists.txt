cmake_minimum_required(VERSION 3.16)

project(RubixCubeSolver LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cube_solver
    src/main.cpp
    src/cube/cube.cpp
    src/utils/cube_printer.cpp
)

target_include_directories(cube_solver PRIVATE src)