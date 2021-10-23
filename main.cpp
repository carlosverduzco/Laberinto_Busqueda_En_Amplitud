#include "ArbolDeBusqueda.h"
#include <iostream>
#include <stdio.h>

int main() {
    cout << "Hello, World!" << endl;
    Plano* plano2d = new Plano();
    int xInicio;
    int yInicio;
    int xObjetivo;
    int yObjetivo;
    Coordenada* puntoDeInicio = new Coordenada();
    Coordenada* puntoObjetivo = new Coordenada();
    while (true) {
        cout << "X Inicio: ";
        cin >> xInicio;
        cout << "Y Inicio: ";
        cin >> yInicio;
        cout << "X Objetivo: ";
        cin >> xObjetivo;
        cout << "Y Objetivo: ";
        cin >> yObjetivo;
        puntoObjetivo->setCordenadas(xObjetivo,yObjetivo);
        puntoDeInicio->setCordenadas(xInicio,yInicio);
        if (!plano2d->isPosicionObstaculizada(puntoDeInicio) && !plano2d->isPosicionObstaculizada(puntoObjetivo))
            break;
        else
            cout << "Invalido" << endl;
    }

    cout << puntoDeInicio->toString() << endl;
    cout << puntoObjetivo->toString() << endl;
    ArbolDeBusqueda arbol(puntoDeInicio,puntoObjetivo,plano2d);

    cout << "Llega antes de la busqueda" << endl;
    vector<string> resultado = arbol.busquedaPorAmplitud();
    cout << "Llega despues de la busqueda" << endl;

    for(string i : resultado){
        if (i == "vacio")
            break;
        cout << i << endl;
    }

    cout << "Nodos Creados: " << arbol.getNodosCreados() << endl;
    fflush(stdin);
    getc(stdin);

    return 0;
}
