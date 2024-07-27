cmake_minimum_required(VERSION 3.16)

project(ImageEvolution)

add_library(CImg INTERFACE)
target_include_directories(CImg INTERFACE inc)

include_directories(inc)

add_subdirectory(src)
add_subdirectory(tests)
