#include "../include/juego.h"
#include <iostream>

juego::juego() {
}

void juego::ejecutar() {

    inventario.agregarObjeto("Llave");
    inventario.agregarObjeto("Pocion");

    char tecla;

    while(true) {

    for(int i = 0; i < 10; i++) {

        for(int j = 0; j < 10; j++) {

            if(i == player.getY() && j == player.getX()) {
                std::cout << 'P';
            }
            else {
                std::cout << sala.getCelda(i, j);
            }
        }

        std::cout << std::endl;
    }

    inventario.mostrar();

        std::cout << "W para mover arriba \n" << std::endl;
                std::cout << "A para mover izquierda \n" << std::endl;
                        std::cout << "S para mover abajo \n" << std::endl;
                                std::cout << "D para mover derecha\n" << std::endl;

        std::cin >> tecla;

        int nuevoX = player.getX();
        int nuevoY = player.getY();

        if(tecla == 'w') nuevoY--;
        if(tecla == 's') nuevoY++;
        if(tecla == 'a') nuevoX--;
        if(tecla == 'd') nuevoX++;

        if(
            nuevoX >= 0 && nuevoX < 10 &&
            nuevoY >= 0 && nuevoY < 10 &&
            sala.getCelda(nuevoY, nuevoX) != '#'
        ) {

            player.mover(
                nuevoX - player.getX(),
                nuevoY - player.getY()
            );
        }
    }
}