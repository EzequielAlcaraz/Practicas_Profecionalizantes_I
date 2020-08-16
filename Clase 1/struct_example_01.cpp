#include <iostream>
#include <string>
using namespace std;

/*
    Se puede utilizar otra sintáxis para las estructuras,
    cómo si de un tipo de dato se tratara.
*/
struct Person
{
    string name;
    string surname;
    int age;
    float score;
};

int main()
{
    Person person;//Observar esta declaración.

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
