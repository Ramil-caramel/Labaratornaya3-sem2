cmake_minimum_required(VERSION 3.5)
project(lab02)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#include_directories(./includes)

add_executable(lab02
    ./src/main.cpp
    ./src/vecotor.cpp
)