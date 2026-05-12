#ifndef JUEGO_H
#define JUEGO_H

#include "jugador.h"
#include "sala.h"

class juego {
private:
    jugador jugador;
    Sala sala;

public:
    juego();

    void ejecutar();
};

#endif

