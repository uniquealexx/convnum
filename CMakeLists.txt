cmake_minimum_required(VERSION 3.30)
project(convnum)

set(CMAKE_CXX_STANDARD 20)

add_executable(convnum main.cpp
        includes/interface_converter.hpp
        src/messages.cpp
        includes/messages.hpp
        src/decimal_converter.cpp
        includes/decimal_converter.hpp
        src/binary_converter.cpp
        includes/binary_converter.hpp
        src/octal_converter.cpp
        includes/octal_converter.hpp
        src/hexadecimal_converter.cpp
        includes/hexadecimal_converter.hpp
)
