cmake_minimum_required(VERSION 3.16)

project(three-n-plus-one VERSION 1.0.0)

file(GLOB_RECURSE src src/*.cpp)

add_executable(${PROJECT_NAME} ${src})