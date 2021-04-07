#include "taller.h"
#include "vehiculo.h"

#include <iostream>

using namespace std;

int main()
{
    Taller* taller1 = new Taller(3, 256);
    Vehiculo* coche1 = new Coche("rojo", "honda", 4);
    Vehiculo* moto1 = new Moto("verde", "honda", 4);

    return 0;
}
