cmake_minimum_required(VERSION 3.17)
project(modOne)

set(CMAKE_CXX_STANDARD 14)

add_executable(modOne main.cpp Bird.cpp Bird.h Nightingale.cpp Nightingale.h Sparrow.cpp Sparrow.h)