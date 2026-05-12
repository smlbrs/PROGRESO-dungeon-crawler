#include <iostream>
#include "jugador.h"

jugador::jugador() {
    x=1;
    y=1;
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