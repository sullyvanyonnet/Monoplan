cmake_minimum_required(VERSION 3.9)
project(ListTest C)

set(CMAKE_C_STANDARD 99)

add_executable(ListTest liste.c liste.h testListe.c)

