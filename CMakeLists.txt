cmake_minimum_required(VERSION 3.26)
project(Leonardo_Valdes_Integrador)

set(CMAKE_CXX_STANDARD 14)
set(LIBRARY_DIR /Users/scrambledmacbook/Downloads/json-develop)

include_directories(${LIBRARY_DIR}/include)

add_executable(Leonardo_Valdes_Integrador
        main.cpp
        Variant.h
)
