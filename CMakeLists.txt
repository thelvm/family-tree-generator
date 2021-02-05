cmake_minimum_required(VERSION 3.17)
project(Family_Tree_Generator)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

set(SOURCES
        src/main.cpp
        src/Person.cpp

        src/generators/PersonGenerator.cpp

        src/utilities/time_systems/TimeSystem.cpp
        src/utilities/time_systems/GalacticTimeSystem.cpp
        src/utilities/time_systems/EarthTimeSystem.cpp)

add_executable(Family_Tree_Generator ${SOURCES})
