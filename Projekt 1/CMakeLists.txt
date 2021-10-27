cmake_minimum_required(VERSION 3.20)
project(Projekt_1)

set(CMAKE_CXX_STANDARD 23)

add_executable(Projekt_1 matrixApp/main.cpp matrixApp/matrix.cpp matrixApp/matrix.hpp matrixApp/exception.cpp matrixApp/exception.hpp matrixLib/src/matrixOperations.cpp matrixLib/include/matrixLib/matrixOperations.hpp)
