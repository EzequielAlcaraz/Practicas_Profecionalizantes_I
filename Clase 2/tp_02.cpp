#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void menu();
void agregarCliente();
void verLista();

int main()
{
    menu();

    return 0;
}

void menu()
{
    system("cls");

    int opcion;

    cout << "Programa para almacenaje de clientes en archivo de texto" << endl;
    cout << "\nElija una opcion" << endl;
    cout << "\n1.\tAgregar un cliente" << endl;
    cout << "2.\tVer lista de clientes" << endl;
    cout << "3.\tSalir" << endl;

    cout << "\nOpcion: ";    cin >> opcion;

    switch(opcion)
    {
    case 1:
        agregarCliente();
        break;
    case 2:
        verLista();
        break;
    case 3:
        break;
    default:
        cout << "Opcion no valida" << endl;
        menu();
        break;
    }
}

void agregarCliente()
{
    system("cls");

    char dni [10];
    char telefono [8];
    string nombre;


    ofstream archivo ("clientes.txt", ios::app);

    cin.ignore();

    cout << "\nIngrese DNI del nuevo cliente: ";
    cin.getline(dni,10);

    cout << "\nIngrese el telefono del nuevo cliente: ";
    cin.getline(telefono,20);

    cout << "\nIngrese el nombre del nuevo cliente: ";
    getline (cin, nombre);

    archivo << dni << " " << telefono << " " << nombre << "\n";

    archivo.close();

    menu();
}

void verLista()
{
    system("cls");

    string texto;
    int op;

    ifstream archivo("clientes.txt");

    cout << "DNI\t Tel\t Nombre\n" << endl;

    if (archivo.is_open()){
        while (!archivo.eof()){
            getline(archivo, texto);
            cout << texto << endl;
        }
        archivo.close();
    }
    else{
        cout << "ERROR: No se ha encontrado el archivo" << endl;
    }

    cout << "\n\n1.\tVolver al menu" << endl;
    cout << "2.\tSalir" << endl;

    cout << "\nOpcion: ";     cin >> op;

    switch(op)
    {
    case 1:
        menu();
        break;
    case 2:
        break;
    }
}
