#ifndef TALLER_H
#define TALLER_H

#include "vehiculo.h"

class Taller
{
    private:
        int max_vehiculos;
        int num_vehiculos;
    public:
        Taller();
        Taller (int maxVehiculos, int numVehiculos);
        virtual ~Taller();
        void meter(Vehiculo* v);
        void arreglarVehiculos();
};

#endif // TALLER_H
