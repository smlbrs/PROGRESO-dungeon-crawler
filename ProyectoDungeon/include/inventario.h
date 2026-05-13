#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <string>

class Inventario {
private:
    std::string objetos[5];
    int cantidad;

public:
    Inventario();

    void agregarObjeto(std::string objeto);
    bool tieneObjeto(std::string objeto);

    void mostrar();

};

#endif