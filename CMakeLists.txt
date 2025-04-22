cmake_minimum_required(VERSION 3.31)
project(TextProject)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(TextProject
        main.cpp
        src/Game.cpp
        src/Player.cpp
        src/RoomI.cpp
        src/RoomII.cpp
        src/RoomIII.cpp
        src/RoomIV.cpp
        src/RoomV.cpp
)