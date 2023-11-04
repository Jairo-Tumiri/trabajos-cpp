/* Ejercicio de búsqueda secuencial:
Dado un array de números enteros, solicita al usuario ingresar un número y utiliza la
búsqueda secuencial para determinar si ese número está presente en el array.
Muestra un mensaje indicando si se encontró o no. */

#include <iostream>
using namespace std;

void PedirNumero(int &);
bool BuscarSecuencial(int[], int, int, int &);

int main()
{
    int size_num = 10;
    int nums[size_num] = {0, 2, 3, 6, 7, 8, 2, 1, 2, 44};
    int num_buscar;
    PedirNumero(num_buscar);

    int es_el_numero;
    if (BuscarSecuencial(nums, size_num, num_buscar, es_el_numero))
    {
        cout << "==========================" << endl;
        cout << es_el_numero << endl;
        cout << "SE ENCONTRO" << endl;
        cout << "==========================" << endl;
    }
    else
    {
        cout << "==========================" << endl;
        cout << "NO SE ENCONTRO" << endl;
        cout << "==========================" << endl;
    };
    return 0;
};

void PedirNumero(int &num)
{
    cout << "Por Favor Ingresar un numero" << endl;
    cin >> num;
}

bool BuscarSecuencial(int num[], int size, int valorBuscado, int & es_el_numero)
{
    bool exist = false;
    for (int i = 0; i < size; i++)
    {
        if (num[i] == valorBuscado)
        {
            es_el_numero = num[i];
            return exist = true;
        }
    }
    return exist;
};