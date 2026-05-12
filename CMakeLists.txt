DungeonGamecmake_minimum_required(VERSION 3.10)

project(DungeonGame)

set(CMAKE_CXX_STANDARD 17)

target_include_directories(juego PRIVATE include)

add_executable(dungeon
    src/main.cpp
    src/jugador.cpp
    src/sala.cpp
    src/juego.cpp
)