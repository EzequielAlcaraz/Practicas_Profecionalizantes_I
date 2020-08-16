#include <iostream>
#include <string>
using namespace std;

/*
    También se puede utilizar la sintaxis de carga de datos en una sola línea.
    Ver línea 20.
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
    //Carga de datos
    Person person = { "Juan", "Perez", 20, 7.5 };

    //Mostrar datos
    cout << "El nombre es: " << person.name << endl;
    cout << "El apellido es: " << person.surname << endl;
    cout << "La edad es: " << person.age << endl;
    cout << "El puntaje es: " << person.score << endl;

    return 0;
}
