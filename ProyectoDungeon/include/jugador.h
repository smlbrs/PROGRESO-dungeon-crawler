#ifndef JUGADOR_H
#define JUGADOR_H

class jugador {
private:
    int x;
    int y;
    int vidas;

public:
    jugador();

    int getX();
    int getY();
    int getVidas();

    void mover(int dx, int dy);
    void perderVida();
};

#endif  