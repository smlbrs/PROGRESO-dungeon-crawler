#ifndef JUGADOR_H
#define JUGADOR_H

class jugador {
private:
    int x;
    int y;

public:
    jugador();

    int getX();
    int getY();

    void mover(int dx, int dy);
};

#endif