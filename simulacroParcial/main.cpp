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
string libroMasAntiguo(FILE *);

int main()
{
    int option, cantidad_inventario;
    string genero_buscar;
    FILE *archivo;
    crearElArcivo(archivo);

    cout << "seleccionar opcion" << endl;
    cout << "(1)porgenero (2)masantiguo " << endl;
    cin >> option;
    switch (option)
    {
    case 1:
        cin.ignore(10000, '\n');
        cout << "nombre del genero" << endl;
        getline(cin, genero_buscar);
        cantidad_inventario = librosPorGenero(archivo, genero_buscar);
        cout << "cantidad_inventario: " << cantidad_inventario << endl;
        system("pause");
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
    file = fopen("libros.dat", "a+");
    if (file != NULL)
    {
        Libros newBook;
        cout << "titulo" << endl;
        getline(cin, newBook.titulo);
        cout << "autor" << endl;
        getline(cin, newBook.autor);
        cout << "anio publicacion" << endl;
        cin >> newBook.anio_publicacion;
        cin.ignore(10000, '\n');
        cout << "genero" << endl;
        getline(cin, newBook.genero);
        cout << "cantidad inventario" << endl;
        cin >> newBook.cant_inv;

        fwrite(&newBook, sizeof(Libros), 1, file);
        fclose(file);
    }
};
int librosPorGenero(FILE *file, string genero_buscar)
{

    Libros countLibro;
    int count = 0;
    file = fopen("libros.dat", "rb");
    if (file != NULL)
    {
        while (fread(&countLibro, sizeof(Libros), 1, file) == 1)
        {
            // cout << "=============" << endl;
            // cout << countLibro.genero << endl;
            if (genero_buscar.compare(countLibro.genero))
            {
                count++;
            }
        }
        fclose(file);
    }
    return count;
};
string libroMasAntiguo(FILE *file)
{
    file = fopen("libros.dat", "rd");
    string titulo_antiguo;
    Libros fechaLibro;

    int mayor = 0;
    int menor = 0;

    // // 9 ,2, 4, 5 , 1, 10
    // while (fread(&fechaLibro, sizeof(Libros), 1, file) == 1)
    //     mayor = menor = fechaLibro.anio_publicacion;
    // {
    //     if (fechaLibro.anio_publicacion > mayor)
    //         mayor = fechaLibro.anio_publicacion;
    //     if (fechaLibro.anio_publicacion < menor)
    //         menor = fechaLibro.anio_publicacion;
    // };
    // fclose(file);
    return titulo_antiguo;
};
