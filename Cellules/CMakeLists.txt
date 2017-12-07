cmake_minimum_required(VERSION 3.9)
project(CelluleTest C)

set(CMAKE_C_STANDARD 99)

add_executable(CelluleTest cellules.c cellules.h testcellule.c)