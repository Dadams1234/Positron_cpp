cmake_minimum_required(VERSION 3.8)
project(Positron_cpp)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES MyString.cpp MyString.h testMyString.cpp)
add_executable(Positron_cpp ${SOURCE_FILES})