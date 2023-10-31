// Determinar si un numero es primo o no; con punteros y
// ademas indicar en que posicion de memoria se guardo el numero
// 2,3,6,7,11,13,17,19,23,29,31

#include <iostream>
#include <stdio.h>

int main()
{
    int cantidadnumeros = 11, i = 0;
    bool condition = i < cantidadnumeros;

    do
    {
        int numero, *puntero;
        std::cin >> numero;
        puntero = &numero;
        if (*puntero % 2 == 0)
        {
            std::cout << "El numero es par" << std::endl;
            std::cout << "espacio en memoria " << puntero << std::endl;
        }
        else
        {
            std::cout << "El es impar" << std::endl;
            std::cout << "espacio en memoria " << puntero << std::endl;
        }

        i++;

    } while (condition);
    return 0;
}
