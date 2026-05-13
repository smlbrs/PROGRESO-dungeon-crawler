#ifndef JUEGO_H
#define JUEGO_H

#include "inventario.h"
#include "jugador.h"
#include "sala.h"

class juego {
private:
    jugador player;
    Sala sala;
    Inventario inventario;

public:
    juego();

    void ejecutar();
};

#endif

