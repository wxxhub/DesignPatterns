cmake_minimum_required(VERSION 3.0)
project(prototype_test)

include_directories(
    include
)

add_executable(prototype_test src/prototype_test.cpp
                              src/prototype.cpp)