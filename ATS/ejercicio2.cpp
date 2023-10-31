#include <iostream>

int main()
{
    int numero[] = {1, 2, 3, 4, 5};
    int *direccion_numero;

    direccion_numero = numero;
    for (int i = 0; i < 5; i++)
    {
        // std::cout << "Elemento del vector [" << i << "]: " << *direccion_numero++ << std::endl;
        std::cout << "pocisiones de memoria " << numero[i] << " es: " << direccion_numero++ << std::endl;
    }
    return 0;
};