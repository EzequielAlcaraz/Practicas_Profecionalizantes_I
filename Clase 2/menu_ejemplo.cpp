#include <iostream>

using namespace std;

struct ARCHIVO
{
    char nombre [40];
    int tamano;
};

void menu();
void anadirArchivo();
void mostrarNombre();
void mostrarArchivo();
void verDatos();

int main()
{
    menu();
}

void menu()
{
    int op;

    cout << "Programa para almecenar datos en archivos" << endl;
    cout << "\n1.\tAñadir datos de un nuevo archivo" << endl;
    cout << "2.\tMostrar los nombres de todos los archivos almacenados" << endl;
    cout << "3.\tMostrar los archivos que sean de mas de un cierto tamaño (>2000 KB)" << endl;
    cout << "4.\tVer todos los datos de un cierto archivo (a partir de su nombre)" << endl;
    cout << "5.\tSalir de la aplicacion (se pierden los archivos)" << endl;
    cin >> op;

    switch(op)
    {
    case 1:
        anadirArchivo();    break;
    case 2:
        //mostrarNombre();    break;
    case 3:
        //mostrarArchivo();   break;
    case 4:
        //verDatos();         break;
    case 5:
        break;
    }
}

