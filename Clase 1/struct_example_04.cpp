//Estructuras anidadas

/*
    Podemos encontrarnos con una estructura que tenga varios datos, 
    y que a su vez ocurra que uno de esos datos esté formado por
    varios datos más sencillos. Para hacerlo desde C++, incluiríamos
    un “struct” dentro de otro, así:
*/
 
#include <iostream>
#include <string>
using namespace std;

//Estructura que representa la fecha de nacimiento. 
struct Birthdate
{
    int day;
    int month;
    int year;
};

//Estructura que representa a una persona 
struct Person
{
    string name;
    string  surname;
    struct Birthdate birthdate;//estructura anidada para la fecha de nacimiento.
    float score;
};
 
int main()
{
    Person person;
 
    //Carga de datos
    person.name = "Juan";
    person.surname = "Perez";
    
    person.birthdate.day = 27;
    person.birthdate.month = 5;
    person.birthdate.year = 2020;

    //Otra forma para cargar la fecha de nacimiento
    // person.birthdate = {27,5,2020};
    
    person.score = 7.5;

    //Mostrar datos
    cout << "Edad: " << person.name << endl;
    cout << "Apellido: " << person.surname << endl;
    
    cout << "Fecha de Nacimiento: " << person.birthdate.day <<"/"<<
    person.birthdate.month <<"/"<< 
    person.birthdate.year << endl;
    
    cout << "Puntaje: " << person.score << endl;
 
    return 0;
}