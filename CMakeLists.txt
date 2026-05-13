cmake_minimum_required(VERSION 3.10)

project(DungeonGame)

set(CMAKE_CXX_STANDARD 17)

add_executable(dungeon
    ProyectoDungeon/src/main.cpp
    ProyectoDungeon/src/jugador.cpp
    ProyectoDungeon/src/sala.cpp
    ProyectoDungeon/src/juego.cpp
    ProyectoDungeon/src/inventario.cpp
)

target_include_directories(dungeon PRIVATE include)