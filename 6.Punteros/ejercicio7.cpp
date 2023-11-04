/*Pedir su nombre al usuario y devolver el numero de vocales
que hay.

NOTA: Recuerda que debes utlizar punteros*/
#include <iostream>
#include <string.h>
using namespace std;

void pedirUsuario();
int contandoVocales(char *);
char nombreUsuario[30];

int main()
{
    pedirUsuario();
    cout << "\n El numero de vocales del nombre es: " << contandoVocales(nombreUsuario) << endl;
    return 0;
}

void pedirUsuario()
{
    cout << "Digite su nombre: ";

    cin.getline(nombreUsuario, 30, '\n');
    strupr(nombreUsuario); // transformando a MAYUSCULAS EL NOMBRE
}

int contandoVocales(char *nombre)
{
    int count = 0;
    while (*nombre)
    { // mientras nombre no sea nulo continua, (puntero)
        switch (*nombre)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
        }
        nombre++;
    }

    return count;
}
