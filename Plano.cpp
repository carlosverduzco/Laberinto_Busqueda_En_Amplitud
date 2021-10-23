//
// Created by Catoras on 19/10/2021.
//

#include "Plano.h"
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>

Plano::Plano() {
    for (int i=0 ; i < X_SIZE ; i++)
        for (int j=0 ; j < Y_SIZE ; j++){
            this->plano2d[i][j].setX(i);
            this->plano2d[i][j].setY(j);
        }

    string line;
    ifstream infile( "obstaculos.txt" );

    while (infile)
    {
        string s;
        if (!getline( infile, s )) break;

        istringstream ss( s );

        int x = -1;
        int y = -1;
        while (ss)
        {
            string s;
            if (!getline( ss, s, ',' )) break;
            stringstream toEntero(s);
            if (x == -1) {
                toEntero >> x;
            } else if (y == -1) {
                toEntero >> y;
            }
        }
        if (x != -1 && y != -1)
            this->plano2d[x][y].setEsObstaculo(true);
    }

    infile.close();
    ObstaculosCheck();

}

void Plano::ObstaculosCheck() {
    for (int i=0 ; i < X_SIZE ; i++)
        for (int j=0 ; j < Y_SIZE ; j++)
            if (this->plano2d[i][j].isEsObstaculo())
                cout << this->plano2d[i][j].toString() << endl;
}

bool Plano::isPosicionObstaculizada(Coordenada* coordenada) {
    return this->plano2d[coordenada->getX()][coordenada->getY()].isEsObstaculo();
}
