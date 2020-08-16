#include <iostream>
#include <string>
using namespace std;

/*
    Una estructura es un tipo de dato compuesto que permite almacenar
    un conjunto de datos de diferente tipo. Los datos que contiene una
    estructura pueden ser de tipo simple (caracteres, números enteros
    o de coma flotante etc.) o a su vez de tipo compuesto (vectores,
    estructuras, listas, etc.).
    A cada uno de los datos o elementos almacenados dentro de una estructura
    se les denomina miembros de esa estructura y éstos pertenecerán a un tipo
    de dato determinado.
*/
struct
{
    string name;
    string surname;
    int age;
    float score;
} person;

int main()
{
    //Carga de datos
    person.name = "Juan";
    person.surname = "Perez";
    person.age = 20;
    person.score = 7.5;

    //Mostrar datos
    cout << "El nombre es: " << person.name << endl;
    cout << "El apellido es: " << person.surname << endl;
    cout << "La edad es: " << person.age << endl;
    cout << "El puntaje es: " << person.score << endl;

    return 0;
}
