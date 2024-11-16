cmake_minimum_required(VERSION 3.10)

project(TupleProj VERSION 1.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${CMAKE_SOURCE_DIR}/include/tuple)

add_executable(TupleProj src/main.cpp)