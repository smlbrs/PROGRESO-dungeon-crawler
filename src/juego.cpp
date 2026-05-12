#include "../include/juego.h"
#include <iostream>

juego::juego() {
}

void juego::ejecutar() {

    char tecla;

    while(true) {

        system("cls");

        
        for(int i = 0; i < 10; i++) {

          
            for(int j = 0; j < 10; j++) {

                if(i == jugador.getY() && j == jugador.getX()) {
                    std::cout << 'P';
                }
                else {
                    std::cout << sala.getCelda(i, j);
                }
            }

            std::cout << std::endl;
        }

        std::cout << "WASD para mover" << std::endl;

        std::cin >> tecla;

        int nuevoX = jugador.getX();
        int nuevoY = jugador.getY();

        if(tecla == 'w') nuevoY--;
        if(tecla == 's') nuevoY++;
        if(tecla == 'a') nuevoX--;
        if(tecla == 'd') nuevoX++;

        if(sala.getCelda(nuevoY, nuevoX) != '#') {

            jugador.mover(
                nuevoX - jugador.getX(),
                nuevoY - jugador.getY()
            );
        }
    }
}