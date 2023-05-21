#include <iostream>
#include <string>
using namespace std;

struct alumnos
{
    string carrera;
    string nombre;
    int legajo;
};
struct profesores
{
    string nombre;
    int edad;
    string materia;
};
struct Personas{
    alumnos Alumno;
    profesores Profesor;
};

alumnos agregaralumno();
int main()
{

    alumnos persona[5];

    persona[0] = agregaralumno();

    cout << persona[0].nombre << persona[0].legajo << persona[0].carrera << endl;
    return 0;
}

alumnos agregaralumno(){

    Personas p1;

    cin >> p1.Alumno.nombre;
    cin >> p1.Alumno.legajo;
    cin >> p1.Alumno.carrera;

    return p1.Alumno;

}
// void pedirUnUsuarioAlumno()
// {
//     Alumno ian = Alumno();

//     cout << "ingresar el nombre" << endl;
//     cin >> ian.nombre;
//     cout << "ingresar el legajo 12 1 21 " << endl;
//     cin >> ian.legajo;

//     cout << ian.nombre << " " << ian.legajo << endl;
// };
