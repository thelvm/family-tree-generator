cmake_minimum_required(VERSION 3.17)
project(Family_Tree_Generator)

set(CMAKE_CXX_STANDARD 17)

include_directories(src/include)

set(SOURCES
        src/main.cpp
        src/Person.cpp)

add_executable(Family_Tree_Generator ${SOURCES})
