/*Pedir al usuario N numeros,
 almacenarlos en un arreglo dinamico
 posteriormente ordenar los numeros en orden ascendente y mostrarlos en pantalla

NOTA: Utilizar cualquier metodo de ordenamiento*/

#include <iostream>

using namespace std;

void pedirNumeros();
void ordenarNumeros(int *, int);
void mostrarNumeros(int *, int);

int nElementos, *numeros;

int main()
{

    pedirNumeros();
    ordenarNumeros(numeros, nElementos);
    mostrarNumeros(numeros, nElementos);
    delete[] numeros;
    return 0;
}

void pedirNumeros()
{
    cout << "Digite el numero de elementos: ";
    cin >> nElementos;
    numeros = new int[nElementos];

    for (int i = 0; i < nElementos; i++)
    {
        cout << "Digite un numero: ";
        cin >> *(numeros + i);
    }
}
void ordenarNumeros(int *poc_numeros, int nElementos)
{
    for (int i = 0; i < nElementos - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < nElementos; j++)
        {
            if (*(poc_numeros + j) < *(poc_numeros + minIndex))
            {
                minIndex = j;
            }
        }
        int temp = *(poc_numeros + minIndex);
        *(poc_numeros + minIndex) = *(poc_numeros + i);
        *(poc_numeros + i) = temp;
    }
}
void mostrarNumeros(int *poc_numeros, int nElementos)
{
    cout << "\n\n\nNumeros: " << endl;
    for (int i = 0; i < nElementos; i++)
    {
        cout << *(poc_numeros + i) << ", ";
    }
}