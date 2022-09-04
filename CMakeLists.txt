cmake_minimum_required(VERSION 3.21)
project(P1_Mok)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(P1_Mok
        Square-KorideMok.cpp
        Square-KorideMok.h
        SudokuMain-KorideMok.cpp
        UnitTests-KorideMok.cpp
        UnitTests-KorideMok.h)
