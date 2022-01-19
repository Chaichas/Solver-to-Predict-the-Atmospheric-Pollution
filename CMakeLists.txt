cmake_minimum_required(VERSION 3.10)

# set the project name
project(MyProject)

# enable modern C++
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(MainProject)
add_subdirectory(LibProject)
