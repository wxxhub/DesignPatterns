cmake_minimum_required(VERSION 3.0)
project(singleton_test)

include_directories(
    include
)

add_executable(singleton_test src/singleton_test.cpp)
add_executable(singleton_child_test src/singleton_child_test.cpp)