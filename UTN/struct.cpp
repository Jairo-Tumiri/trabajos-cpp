#include <iostream>
using namespace std;

struct Alumno
{
    string nombre;
    int legajo;
};

void pedirUnUsuarioAlumno();

int main()
{
    pedirUnUsuarioAlumno();
    return 0;
}

void pedirUnUsuarioAlumno()
{
    Alumno ian = Alumno();

    cout << "ingresar el nombre" << endl;
    cin >> ian.nombre;
    getline(cin,ian.nombre);
    cout << "ingresar el legajo 12 1 21 " << endl;
    cin >> ian.legajo;

    cout << ian.nombre << " " << ian.legajo << endl;
};
