/*Transmicion de arreglos
Ejemplo: Hallar el maximo elemento de un arreglo.*/

#include <iostream>

using namespace std;

// enviar pocision de memoria de un arreglo y la cantidad de elementos
int hallarMax(int *, int);

int main()
{
    const int nElementos = 5;
    int numeros[nElementos] = {3, 5, 2, 8, 1};

    cout << "El mayor elemento es: " << hallarMax(numeros, nElementos);
}

int hallarMax(int *dirVec, int nElementos)
{
    int max = 0;
    for (int i = 0; i < nElementos; i++)
    {
        if (*(dirVec + i) > max)
        {
            max = *(dirVec + i);
        }
    }
    return max;
}
