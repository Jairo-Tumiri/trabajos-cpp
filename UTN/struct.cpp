#include <iostream>
using namespace std;

struct Alumno
{
    string nombre;
    int legajo;
};


int main(){

    Alumno ian;
    cout << "ingresar el nombre" << endl;
    cin >> ian.nombre;
    

    cout << "ingresar el legajo" << endl;
    cin >> ian.legajo;
    
    cout << ian.nombre << " " << ian.legajo << endl;

    return 0;
}