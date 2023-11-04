/*
Defina una estructura que indique el tiempo empleado por un ciclista
en recorrer una etapa. La estructura debe tener tres campos: horas, minutos y segundos.
Escriba un programa que dado 3 etapas calcule el tiempo total empleado en correr
todas las etapas.

NOTA: Usar punteros
*/

#include <iostream>
using namespace std;

struct Tiempo
{
    int horas;
    int minutos;
    int segundos;
} tiempo[3], *puntero_tiempo = tiempo;

void pedirDatos();
void calcularTiempoTotal(Tiempo *);

int main()
{
    pedirDatos();
    calcularTiempoTotal(puntero_tiempo);
    return 0;
}

void pedirDatos()
{
    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);
        cout << "Digite el tiempo de la etapa " << i << endl;
        cout << "Horas: ";
        cin >> (tiempo + i)->horas;
        cout << "Minutos: ";
        cin >> (tiempo + i)->minutos;
        cout << "Segundos: ";
        cin >> (tiempo + i)->segundos;
    }
};

void calcularTiempoTotal(Tiempo *puntero_tiempo)
{
    Tiempo total;
    for (int i = 0; i < 3; i++)
    {
        total.horas += (puntero_tiempo + i)->horas;
        total.minutos += (puntero_tiempo + i)->minutos;
        total.segundos += (puntero_tiempo + i)->segundos;
    }
    cout << "El tiempo empleado por el es: " << endl;
    cout << "Horas: " << total.horas << endl;
    cout << "Minuto: " << total.minutos << endl;
    cout << "Segundos: " << total.segundos << endl;
}