cmake_minimum_required(VERSION 3.9)
project(Monoplan C)

set(CMAKE_C_STANDARD 99)

add_executable(Monoplan main.c)

add_subdirectory(Cellules)
add_subdirectory(Liste)
add_subdirectory(Pile)


