#include <iostream>
using namespace std;

struct Alumno
{
    string nombre;
    int legajo;
};


int main()
{

    pedirUnUsuarioAlumno();
    return 0;
}

Alumno pedirUnUsuarioAlumno()
{
    cout << "ingresar el nombre" << endl;
    cin >> ian.nombre;

    cout << "ingresar el " << endl;
    cin >> ian.legajo;

    cout << ian.nombre << " " << ian.legajo << endl;
}