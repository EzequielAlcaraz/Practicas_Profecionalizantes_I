#include "taller.h"

Taller :: Taller(){}

Taller :: Taller(int maxVehiculos, int numVehiculos){
    max_vehiculos = maxVehiculos;
    num_vehiculos = numVehiculos;
}

Taller :: ~Taller(){
    //por cada componente vehiculo invocar al operador delete...
}

void Taller :: meter(Vehiculo *v){
    //por cada vehiculo de la lista invocar el metodo meter...
    cout << "El vehiculo ha ingresado al taller" << endl;
}

void Taller :: arreglarVehiculos(){
    //por cada vehículo de la lista invocar el método arrancar...
}
