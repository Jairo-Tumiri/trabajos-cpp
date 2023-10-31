/*
Hacer una estructura llamada alumno, en el cual se tendra
los siguientes campos: Nombre, edad, promedio, pedir datos
al usuario para 3 alumnos, comprobar cual de los 3 tiene
el mejor promedio y posteriormente imprimir los datos del
alumno.

NOTA: usar punteros a estructura
*/

#include <iostream>
using namespace std;

struct Alumno
{
    char nombre[30];
    int edad;
    float promedio;
} alumno[3], *puntero_alumno = alumno; // mando la primera pocision del arreglo de estructuras

void pedirDatos();
void mostrarMejorPromedio(Alumno *);
int main()
{
    pedirDatos();
    mostrarMejorPromedio(puntero_alumno);
    return 0;
}

void pedirDatos()
{
    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);
        cout << "Digite el nombre del " << i << " alumno: ";
        cin.getline((alumno + i)->nombre, 30, '\n');
        cout << "Digite la edad del " << i << " alumno: ";
        cin >> (alumno + i)->edad;
        cout << "Digite el promedio del " << i << " alumno: ";
        cin >> (alumno + i)->promedio;
        cout << endl;
    }
}
void mostrarMejorPromedio(Alumno *puntero_alumno)
{
    int posicion = 0;
    float mejorPromedio = 0.0;
    for (int i = 0; i < 3; i++)
    {
        if ((puntero_alumno + i)->promedio > mejorPromedio)
        {
            mejorPromedio = (puntero_alumno + i)->promedio;
            posicion = i;
        }
    }

    cout << "El alumno con mejor promedio es: \n";
    cout << "Nombre: " << (puntero_alumno + posicion)->nombre << endl;
    cout << "Edad: " << (puntero_alumno + posicion)->edad << endl;
    cout << "Promedio: " << mejorPromedio << endl;
}