cmake_minimum_required(VERSION 3.0)
project(builder_test)

include_directories(
    include
)

add_executable(builder_test src/builder_test.cpp)