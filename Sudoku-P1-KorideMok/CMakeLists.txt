cmake_minimum_required(VERSION 3.21)
project(P1-KorideMok)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(P1-KorideMok
        Square-KorideMok.cpp
        Square-KorideMok.hpp
        SudokuMain-KorideMok.cpp
        UnitTests-KorideMok.cpp
        UnitTests-KorideMok.hpp
        tools.cpp
        tools.hpp)
