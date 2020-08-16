//Arrays (Arreglos) de Estructuras:

/*
    Hasta ahora se ha guardado datos de una persona. 
    Se pueden almacenar los de varias personas si combinamos 
    el uso de los “struct” con "arrays":
*/

#include <iostream>
#include <string>
using namespace std;
 
struct Person
{
    string name;
    string surname;
    int age;
    float score;
};

int main()
{
    // Person* person = new Person[50]; //ESTO ES PARA UN FUTURO CERCANO.
    Person person[5];// ARREGLO CON 5 ESTRUCTURAS DE PERSON
 
    //Se recorre el arreglo y se obtiene el nombre por entrada estándar.
    for (int i=0; i<5; i++)
    {
        cout << "Dime el nombre de la persona " << i << endl;
        cin >> person[i].name;
    }

    //Se recorre el arreglo y se muestra en pantalla.
    for (int i=0; i<5; i++)
    {
        cout << "El nombre del a persona " << i << " es: " << person[i].name << endl;
    }
 
    return 0;
}