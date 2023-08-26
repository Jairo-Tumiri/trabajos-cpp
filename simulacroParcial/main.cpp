#include <iostream>
#include <cstring>
#include <string.h>
#include <conio.h>
using namespace std;

struct Libros
{
    string titulo;
    string autor;
    int anio_publicacion;
    string genero;
    int cant_inv;
};

void crearElArcivo(FILE *);
int librosPorGenero(FILE *, string);
string libroMasAntiguo(FILE);

int main()
{
    int option;
    string genero_buscar;
    FILE *archivo = fopen("libros.dat", "wb");
    crearElArcivo(archivo);

    cout << "seleccionar opcion" << endl;
    cout << "(1)porgenero (2)masantiguo " << endl;
    cin >> option;
    switch (option)
    {
    case 1:
        cout << "nombre del genero" << endl;
        getline(cin, genero_buscar);
        librosPorGenero(archivo, genero_buscar);
        break;
    case 2:
        libroMasAntiguo(archivo);
        break;
    default:
        cout << "default" << endl;
        break;
    }
    return 0;
};

void crearElArcivo(FILE *file)
{
    Libros newBook;
    // cin.ignore(100, '\n');
    cout << "titulo" << endl;
    getline(cin, newBook.titulo);
    cout << "autor" << endl;
    getline(cin, newBook.autor);
    cout << "año publiblicacion" << endl;
    cin >> newBook.anio_publicacion;
    cout << "genero" << endl;
    getline(cin, newBook.genero);
    cout << "cantidad inventario" << endl;
    cin >> newBook.cant_inv;

    if (file != NULL)
    {
        fwrite(&newBook, sizeof(Libros), 1, file);
        fclose(file);
    }
};
int librosPorGenero(FILE *file, string genero_buscar)
{
    Libros countLibro;
    int count;
    while (fread(&countLibro, sizeof(Libros), 1, file) == 1)
    {
        if (countLibro.genero == genero_buscar)
        {
            count++;
        }
    }
    return count;
};
string libroMasAntiguo(FILE *file)
{
    string titulo_antiguo;
    Libros fechaLibro;
    int auxMax = 0, fecha, auxMin = 0;

    // 9 ,2, 4, 5 ,9
    while (fread(&fechaLibro, sizeof(Libros), 1, file) == 1)
    {
        //   2 |  9
        if (fechaLibro.anio_publicacion > auxMax)
        {
            if (fechaLibro.anio_publicacion < auxMax)
            {
                auxMin = fechaLibro.anio_publicacion;
            }
            else
            {
                auxMax = fechaLibro.anio_publicacion;
            }
        }
    }
    return titulo_antiguo;
};
