cmake_minimum_required(VERSION 4.0)
project(Shapes)

set(CMAKE_CXX_STANDARD 20)

add_executable(Shapes main.cpp
        Shape.h
        Point.h
        Point.cpp
        "Triangle.h" "Triangle.cpp" "Circle.cpp" "Circle.h" "Tetragon.cpp" "Tetragon.h")
