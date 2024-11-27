cmake_minimum_required(VERSION 3.29)
project(todo_project)

set(CMAKE_CXX_STANDARD 20)

add_executable(todo_project main.cpp
        header/run.h
        source/run.cpp
        header/task.h
        source/task.cpp
        header/task_entry.h
        source/task_entry.cpp
        header/date.h
        source/date.cpp)
