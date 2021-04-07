#include "coche.h"

Coche :: Coche(string color, string marca, int motor){
    //cosas que deban nacer con un coche
    m_color = color;
    m_marca = marca;
    m_motor = motor;
}

Coche :: ~Coche(){
    //cosas que deban morir con un coche
}

void Coche :: arrancar(){
    //algo para arrancar, cout << "estoy en marcha" << endl;
}

void Coche :: parar(){
    //algo para parar, cout << "estoy detenido" << endl;
}

void Coche :: repostar(){
    //algo para repostar, cout << "me detuve a repostar combustible" << endl;
}
