#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>

using namespace std;

typedef struct
{
    string nombre;
    string apellido;
    string carrera;
    int anio;
} tAlumno;

const int MAX = 100;
typedef tAlumno tArray[MAX];

typedef struct
{
    tArray alumno;
    int contador;
} tLista;

tLista lista;

void cargarLista();
void mostrarAlumnos();
void buscarAlumnos();
void insertarAlumno();
void eliminarAlumno();
void formaOrden();
void campoOrden();
void guardarLista();
bool operator > (tAlumno opIzq, tAlumno opDer);
bool operator < (tAlumno opIzq, tAlumno opDer);

int main()
{
    system("cls");

    cargarLista();
    int opcion;

    do{
        cout << "----Registro de alumnos del ISFT 151----" << endl;
        cout << "\n\nElija la opcion deseada\n" << endl;
        cout << " 1.\tMostrar listado de alumnos" << endl;
        cout << " 2.\tBuscar alumno" << endl;
        cout << " 3.\tInsertar alumno" << endl;
        cout << " 4.\tEliminar alumno" << endl;
        cout << " 5.\tFormato de orden" << endl;
        cout << " 6.\tSalir" << endl;
        cout << "\nOpcion: ";
        cin >> opcion;
    }while(opcion < 1 || opcion > 6);

    switch(opcion)
    {
    case 1:
        mostrarAlumnos();
        break;
    case 2:
        buscarAlumnos();
        break;
    case 3:
        insertarAlumno();
        break;
    case 4:
        eliminarAlumno();
        break;
    case 5:
        formaOrden();
        break;
    case 6:
        break;
    }

    return 0;
}

void cargarLista()
{
    //Cargar datos del archivo en la lista (array)
    lista.contador = 0;
    ifstream cargarLis;
    cargarLis.open("Alumnos.txt", ios::in);

    if(cargarLis.is_open()){

        while(!cargarLis.eof()){
            cargarLis >> lista.alumno[lista.contador].nombre;
            cargarLis >> lista.alumno[lista.contador].apellido;
            cargarLis >> lista.alumno[lista.contador].carrera;
            cargarLis >> lista.alumno[lista.contador].anio;

            if((!lista.alumno[lista.contador].carrera.empty()) && (!lista.alumno[lista.contador].nombre.empty())){
                lista.contador++;
            }
        }
    }
    else{
        system("cls");
        cout << "El archivo no ha sido encontrado" << endl;
        getch();
        main();
    }
}

void mostrarAlumnos()
{
    system("cls");

    //Mostrar lista de estudiantes
    cout << "----Listado completo de Alumnos---\n\n" << endl;
    cout << "\t\tNombres  Año\t Carrera\n" << endl;

    for(int i = 0; i < lista.contador; i++){
        cout << " " << i << "."
            << setw(20) << lista.alumno[i].nombre + " " + lista.alumno[i].apellido
            << setw(4) << lista.alumno[i].anio
            << setw(13) << lista.alumno[i].carrera << endl;
    }

    cout << "\nContador = " << lista.contador << endl;
    cout << "\n\nPresione cualquier tecla para volver al menu" << endl;
    getch();
    lista.contador++;
    main();
}

void buscarAlumnos()
{
    system("cls");

    //Buscar alumnos
    string nom, ape;

    cout << "\n\nIngresar nombre del alumno a buscar" << endl;
    cout << "\nNombre: ";
    cin >> nom;
    cout << "\nApellido: ";
    cin >> ape;

    for(int i = 0; i < lista.contador; i++){
        if(nom == lista.alumno[i].nombre && ape == lista.alumno[i].apellido){
            cout << "\n\n Pos\t\tNombres  Año\t Carrera\n" << endl;
            cout << " " << i << "."
                << setw(20) << lista.alumno[i].nombre + " " + lista.alumno[i].apellido
                << setw(4) << lista.alumno[i].anio
                << setw(13) << lista.alumno[i].carrera << endl;
            break;
        }
    }

    cout << "\n\n\nPresione cualquier tecla para volver al menu" << endl;
    getch();
    lista.contador++;
    main();
}

void insertarAlumno()
{
    //Guardar datos en la lista
    system("cls");
    int i, op;
    i = lista.contador;

    if(lista.contador < MAX){
        cout << "----Insertar un nuevo alumno en la lista----\n\n" << endl;
        cout << "Alumno " << i << endl;
        cout << "\nIntroducir nombre: ";
        cin >> lista.alumno[i].nombre;
        cout << "\nIntroducir apellido: ";
        cin >> lista.alumno[i].apellido;
        do{
            cout << "\n\nSeleccionar anio que cursa: \n" << endl;
            cout << " 1.\t1ro" << endl;
            cout << " 2.\t2do" << endl;
            cout << " 3.\t3ro" << endl;
            cout << "\nOpcion: ";
            cin >> op;
        } while(op < 1 || op > 3);

        switch(op)
        {
        case 1:
            lista.alumno[i].anio = 1;
            break;
        case 2:
            lista.alumno[i].anio = 2;
            break;
        case 3:
            lista.alumno[i].anio = 3;
            break;
        }


        do{
            cout << "\n\nSeleccionar carrera que cursa: \n" << endl;
            cout << " 1.\tTurismo" << endl;
            cout << " 2.\tGestion" << endl;
            cout << " 3.\tSistema" << endl;
            cout << " 4.\tLogistica" << endl;
            cout << " 5.\tEmergencias" << endl;
            cout << " 6.\tTextil" << endl;
            cout << "\nOpcion: ";
            cin >> op;
        } while(op < 1 || op > 6);

        switch(op)
        {
        case 1:
            lista.alumno[i].carrera = "Turismo";
            break;
        case 2:
            lista.alumno[i].carrera = "Gestion";
            break;
        case 3:
            lista.alumno[i].carrera = "Sistema";
            break;
        case 4:
            lista.alumno[i].carrera = "Logistica";
            break;
        case 5:
            lista.alumno[i].carrera = "Emergencias";
            break;
        case 6:
            lista.alumno[i].carrera = "Textil";
            break;
        }
    }

    //Pasar los datos desde la lista al archivo
    ofstream anadirAlu;
    anadirAlu.open("Alumnos.txt", ios::app);

    if(anadirAlu.is_open()){
        anadirAlu << lista.alumno[i].nombre << " "
            << lista.alumno[i].apellido << " "
            << lista.alumno[i].carrera << " " << lista.alumno[i].anio << endl;
    }
    else{
        system("cls");
        cout << "El archivo no ha sido encontrado" << endl;
        getch();
        main();
    }

    anadirAlu.close();
    cout << "\n\n\n---> Los datos se cargaron exitosamente" << endl;
    cout << "\nPresione cualquier tecla para volver al menu" << endl;
    getch();
    lista.contador++;
    main();
}

void eliminarAlumno()
{
    system("cls");

    //Eliminar estudiante
    string nom, ape;
    int num;
    cout << "----Eliminar un alumno de la lista---\n\n" << endl;

    cout << "\nIndicar el Nombre: ";
    cin >> nom;
    cout << "\nApellido: ";
    cin >> ape;

    for(int i = 0; i < lista.contador; i++){
        if((nom == lista.alumno[i].nombre) && (ape == lista.alumno[i].apellido)){
            num = i;
            break;
        }
    }

    for(int i = num; i < lista.contador; i++){
        lista.alumno[i] = lista.alumno[i + 1];
    }
    lista.contador--;

    guardarLista();
}

bool operator > (tAlumno opIzq, tAlumno opDer)
{
    return (opIzq.nombre > opDer.nombre);
}

bool operator < (tAlumno opIzq, tAlumno opDer)
{
    return (opIzq.nombre < opDer.nombre);
}

void formaOrden()
{
    system("cls");

    //Elegir formato de orden
    tAlumno temp;
    int op;
    cout << "----Indicar el formato de orden de la lista----\n\n" << endl;

    do{
        cout << " 1.\tAscendente" << endl;
        cout << " 2.\tDescendente" << endl;
        cout << "\nOpcion: ";
        cin >> op;
    } while(op < 1 || op > 2);

    switch(op)
    {
    case 1:
        for(int i = 0 ; i < lista.contador ; i++){

           for (int j = 0 ; j < lista.contador - 1 ; j++){
                if (lista.alumno[j] > lista.alumno[j + 1 ]){
                   temp = lista.alumno[j];
                   lista.alumno[j] = lista.alumno[j + 1 ];
                   lista.alumno[j + 1] = temp;
                }
            }
        }
        break;
    case 2:
        for(int i = 0 ; i < lista.contador ; i++){

           for (int j = 0 ; j < lista.contador - 1 ; j++){
                if (lista.alumno[j] < lista.alumno[j + 1 ]){
                   temp = lista.alumno[j];
                   lista.alumno[j] = lista.alumno[j + 1 ];
                   lista.alumno[j + 1] = temp;
                }
            }
        }
        break;
    }

    guardarLista();
}

void guardarLista()
{
    //Transferir informacion al archivo
    ofstream guardarLis;
    guardarLis.open("Alumnos.txt", ios::trunc);

    if(guardarLis.is_open()){
        for(int i = 0; i < lista.contador; i++){
            guardarLis << lista.alumno[i].nombre << " "
                << lista.alumno[i].apellido << " "
                << lista.alumno[i].carrera << " "
                << lista.alumno[i].anio << endl;
        }
    }
    else{
        system("cls");
        cout << "El archivo no ha sido encontrado" << endl;
        getch();
        main();
    }

    system("cls");
    guardarLis.close();
    cout << "---> La informacion se ha guardado exitosamente" << endl;
    getch();
    main();
}
