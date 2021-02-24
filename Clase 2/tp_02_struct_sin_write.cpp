#include <iostream>
#include <fstream>

using namespace std;

struct CLIENTE
{
    char dni[10];
    char nombre[20];
    char telefono[8];
};

void menu();
void agregarCliente();
void modificarCliente();
void eliminarCliente();
void verLista();

int main()
{
    menu();

    return 0;
}

void menu()
{
    int opcion;

    cout << "Programa para almacenaje de clientes en archivo de texto" << endl;
    cout << "\nElija una opcion" << endl;
    cout << "\n1.\tAgregar un cliente" << endl;
    cout << "2.\tModificar un cliente" << endl;
    cout << "3.\tEliminar un cliente" << endl;
    cout << "4.\tVer lista de clientes" << endl;
    cout << "5.\tSalir" << endl;

    cin >> opcion;

    switch(opcion)
    {
    case 1:
        agregarCliente();
        break;
    case 2:
        //modificarCliente();
        break;
    case 3:
        //eliminarCliente();
        break;
    case 4:
        //verLista();
        break;
    case 5:
        break;
    default:
        cout << "Opcion no valida" << endl;
        menu();
        break;

    }
}

void agregarCliente()
{
    ofstream archivo ("clientes.txt", ios::app);
    CLIENTE cliente;

    cin.ignore();

    cout << "\nIngrese DNI del nuevo cliente" << endl;
    cin.getline (cliente.dni, 10);
    //archivo << cliente.dni;

    cout << "\nIngrese el nombre del nuevo cliente" << endl;
    cin.getline (cliente.nombre, 20);
    //archivo << cliente.nombre;

    cout << "\nIngrese el telefono del nuevo cliente" << endl;
    cin.getline (cliente.telefono, 8);
    //archivo << cliente.telefono;

    archivo << cliente.dni << cliente.nombre << cliente.telefono;

    archivo.close();

    //menu();
}
