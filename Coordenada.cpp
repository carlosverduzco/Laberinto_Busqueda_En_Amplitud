//
// Created by Catoras on 19/10/2021.
//

#include "Coordenada.h"

Coordenada::Coordenada() {
    esObstaculo = false;
}

Coordenada::Coordenada(int x, int y) {
    this->X = x;
    this->Y = y;
    esObstaculo = false;
}

int Coordenada::getX() const {
    return X;
}

void Coordenada::setX(int x) {
    X = x;
}

int Coordenada::getY() const {
    return Y;
}

void Coordenada::setY(int y) {
    Y = y;
}

bool Coordenada::isEsObstaculo() const {
    return esObstaculo;
}

void Coordenada::setEsObstaculo(bool esObstaculo) {
    Coordenada::esObstaculo = esObstaculo;
}

string Coordenada::toString() {
    string cadena = "";

    cadena += "X: ";
    cadena += to_string(this->X);
    cadena += ", Y: ";
    cadena += to_string(this->Y);

    return cadena;
}

void Coordenada::setCordenadas(int x, int y) {
    this->X = x;
    this->Y = y;
}
