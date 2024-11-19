cmake_minimum_required(VERSION 3.29)
project(TodoList_project)

set(CMAKE_CXX_STANDARD 20)

add_executable(TodoList_project main.cpp
        ../source/Task.cpp
        ../header/Task.h)
