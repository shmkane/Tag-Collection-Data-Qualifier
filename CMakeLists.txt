cmake_minimum_required(VERSION 3.9)
project(untitled1)

set(CMAKE_CXX_STANDARD 11)

include_directories("C:\\boost\\boost_1_66_0")


add_executable(untitled1 main.cpp Tag.cpp Tag.h TagExaminer.cpp TagExaminer.h)