DungeonGamecmake_minimum_required(VERSION 3.10)

project(DungeonGame)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(dungeon
    src/main.cpp
    src/Jugador.cpp
    src/Sala.cpp
    src/Juego.cpp
)