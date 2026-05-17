#include <iostream>
#include "../include/jugador.h"

jugador::jugador() {

    std::cout << "Constructor jugador\n";

    x = 1;
    y = 1;
    vidas = 3;
}

int jugador::getX() {
    return x;
}

int jugador::getY() {
    return y;
}

int jugador::getVidas() {
    return vidas;
}

void jugador::mover(int dx, int dy) {

    x += dx;
    y += dy;
}

void jugador::perderVida() {

    vidas--;
}

void jugador::curar() {
    if(vidas < 3) {

        vidas++;
    }
}