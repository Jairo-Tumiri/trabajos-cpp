/* Se requiere un programa que permita al usuario ingresar el nombre y la edad de 5
personas. Luego, muestra por pantalla el nombre y la edad de cada una de las
Estructuras indexadas: Array 3
personas.
a. Identifique las estructuras necesarias
b. Implemente el programa */

#include <iostream>
using namespace std;

struct usuario
{
    char nombre[20];
    int edad;
};

usuario crearUsuario();
usuario imprimirUsuario();
int main()
{   
    usuario usuarios[5];

    for (int i = 0; i < 0; i++)
    {

    };

    return 0;
};

usuario crearUsuario(int cantidad){
    usuario usuarios[cantidad];
    for (int i = 0; i < cantidad ; i++)
    {
        cin >> usuarios[i] >>endl;
    };
};

