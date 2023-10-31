// Rellenar un array de 10 numeros, posteriormente utilizando punteros indicar cuales son numeros pares y su posicion en memoria
#include <iostream>

int main()
{
    int numeros[10], *dir_numeros;

    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "Digite un numero: [" << i << "]: ";
        std::cin >> numeros[i];
    }
    dir_numeros = numeros; // Posicion de memoria comienza numeros

    for (size_t i = 0; i < 10; i++)
    {
        if (*dir_numeros % 2 == 0)
        {
            std::cout << "El numero: " << *dir_numeros << " es par" << std::endl;
            std::cout << "Posicion de memoria: " << dir_numeros << std::endl;
        }
        dir_numeros++;
    }

    return 0;
}