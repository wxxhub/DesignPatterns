cmake_minimum_required(VERSION 3.0)
project(abstract_factory_test)

include_directories(include)

add_executable(abstract_factory_test 
    src/abstract_factory_test.cpp
    src/abstract_factory.cpp
    src/product.cpp
)