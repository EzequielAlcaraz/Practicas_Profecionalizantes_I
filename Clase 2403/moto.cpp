#include "moto.h"


Moto :: Moto(string color, string marca, int cilindrada){
    //cosas que daban nacer con una moto
    m_color = color;
    m_marca = marca;
    m_cilindrada = cilindrada;
}

Moto :: ~Moto(){
    //cosas que deben morir con una moto
}

void Moto :: arrancar(){
    //algo para arrancar, cout << "estoy en marcha" << endl;
}

void Moto :: parar(){
    //algo para parar, cout << "estoy detenido" << endl;
}

void Moto :: repostar(){
    //algo para repostar, cout << "estoy recargando combustible" << endl;
}
