#include <iostream>
#include <string>
using namespace std;

struct Persona
{
    string carrera;
    string nombre;
    int legajo;
};

Persona crearPersona()
{
    Persona alumno;
    cout << "ingresar el sector"<< endl;
    getline(cin,alumno.carrera);
    cin >> alumno.carrera;
    cout << "ingresar el nombre en la carrera de "+ alumno.carrera << endl;
    cin >> alumno.nombre;
    cout << "ingresar el legajo" << endl;
    cin >> alumno.legajo;
    return alumno;
}


int main()
{
    Persona Estudiante;
    Estudiante = crearPersona();

    cout << "el alumno es " + Estudiante.nombre + " con el legajo "<<Estudiante.legajo<<" en la carrera de "+ Estudiante.carrera <<  endl;
    return 0; 
}