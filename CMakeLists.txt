
cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(condWithPoly VERSION 1.0)

file(GLOB_RECURSE SRC_FILES src/*.cc)

add_executable(condWithPoly main.cc ${SRC_FILES})
target_include_directories(condWithPoly PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)

message(STATUS "Compiler")
