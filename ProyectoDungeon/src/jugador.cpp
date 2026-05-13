#include <iostream>
#include "../include/jugador.h"

jugador::jugador() {

    std::cout << "Constructor jugador\n";

    x = 1;
    y = 1;
}

int jugador::getX() {
    return x;
}

int jugador::getY() {
    return y;
}

void jugador::mover(int dx, int dy) {

    x += dx;
    y += dy;
}