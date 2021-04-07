#ifndef VEHICULO_H
#define VEHICULO_H

#include <iostream>

using namespace std;

class Vehiculo
{
    public:
        Vehiculo();
        ~Vehiculo();
        void arrancar() = 0;
        void parar() = 0;
        void repostar() = 0;
};

#endif // VEHICULO_H
