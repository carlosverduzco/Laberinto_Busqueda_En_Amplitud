//
// Created by Catoras on 19/10/2021.
//

#ifndef LABERINTO_BUSQUEDA_EN_PROFUNDIDAD_COORDENADA_H
#define LABERINTO_BUSQUEDA_EN_PROFUNDIDAD_COORDENADA_H

#include "string"

using namespace std;

class Coordenada {
private:
    int X;
    int Y;
    bool esObstaculo;
public:

    int getX() const;
    void setX(int x);
    int getY() const;
    void setY(int y);
    bool isEsObstaculo() const;
    void setEsObstaculo(bool esObstaculo);
    Coordenada();
    Coordenada(int x, int y);
    void setCordenadas(int x, int y);
    string toString();
};


#endif //LABERINTO_BUSQUEDA_EN_PROFUNDIDAD_COORDENADA_H
