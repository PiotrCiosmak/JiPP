cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_SOURCE_DIR}/matrixLib/include)

add_executable(Projekt_1 matrixApp/main.cpp matrixApp/matrix.cpp matrixApp/matrix.hpp matrixApp/exception.cpp matrixApp/exception.hpp)

target_link_libraries(matrixApp matrixLib)