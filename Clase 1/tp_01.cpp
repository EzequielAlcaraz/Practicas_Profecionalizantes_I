#include <iostream>

using namespace std;

struct
{
    string artista;
    string titulo;
    int duracion;
    float tamano;
} cancion;


int main()
{
    cout << "Completar los datos para una cancion MP3" << endl;
    cout << "\nArtista: ";          cin >> cancion.artista;
    cout << "Titulo: ";             cin >> cancion.titulo;
    cout << "Duracion (seg): ";     cin >> cancion.duracion;
    cout << "Tamano (KB): ";        cin >> cancion.tamano;

    cout << "\n\nEl artista de la cacion es: " << cancion.artista << endl;
    cout << "El nombre de la cancion es: " << cancion.titulo << endl;
    cout << "La duracion de la cancion es de " << cancion.duracion << " seg" << endl;
    cout << "El Tamano de la cancion es de " << cancion.tamano << " KB" << endl;

    return 0;
}
