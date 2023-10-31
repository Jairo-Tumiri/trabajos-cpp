/*PUNTEROS A ESTRUCTURAS*/
#include <iostream>
using namespace std;

struct Persona
{
    char nombre[30];
    int edad;
} persona, *puntero_persona = &persona; // Aca defino la structura Persona y el puntero a la estructura guardando el espacio de almacenamiento

void pedirDatos();
void mostrarDatos(Persona *);

int main()
{
    pedirDatos();
    mostrarDatos(puntero_persona);
    return 0;
}

void pedirDatos()
{
    cout << "Digite su nombre: ";
    cin.getline(puntero_persona->nombre, 30, '\n');
    cout << "Digite su edad: ";
    cin >> puntero_persona->edad;
}

void mostrarDatos(Persona *puntero_persona)
{
    cout << "Su nombre es: " << puntero_persona->nombre << endl;
    cout << "Su edad es: " << puntero_persona->edad << endl;
}