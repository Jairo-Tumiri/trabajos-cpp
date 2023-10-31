/*Asignacion dinamica de rreglos

new: reserva el numero de bytes solicitado por la declaracion.
delete: libera un bloque de bytes reservado con anteoridad.

Ejemplo: Pedir al usuario n calificaciones y almacenarlos en un arreglo dinamico.*/

#include <iostream>
#include <stdlib.h> //con esta libreria se puede usar new y delete

void pedirNotas();
void mostrarNotas();

int numCalif, *calif;

int main()
{
    pedirNotas();
    mostrarNotas();

    delete[] calif; // Liberando el espacio en memoria (colocamos el nombre del puntero)
    return 0;
}

void pedirNotas()
{
    std::cout << "Digite el numero de calificaciones: ";
    std::cin >> numCalif;

    calif = new int[numCalif]; // Reservando el espacio de memoria para el arreglo

    for (int i = i; i < numCalif; i++)
    {
        std::cout << "Ingrese una nota: ";
        std::cin >> calif[i];
    }
}

void mostrarNotas()
{
    std::cout << "\n\nMostrando notas del usuario: " << std::endl;
    for (int i = 0; i < numCalif; i++)
    {
        std::cout << calif[i] << std::endl;
    }
};