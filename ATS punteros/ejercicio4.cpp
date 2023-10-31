// Rellenar un arreglo con n numeros, posteriormente utilizando punteros determinar el menor elemento del arreglo.
#include <iostream>

int main()
{
    int n[10], *dir_numeros;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Digite un numero";
        std::cin >> n[i];
    }
    dir_numeros = n;
    int mayor = 900;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "numero" << *dir_numeros << std::endl;
        if (*dir_numeros < mayor)
        {
            mayor = *dir_numeros;
        }
        dir_numeros++;
    }
    std::cout << "El numero menor es: " << mayor << std::endl;
    return 0;
}