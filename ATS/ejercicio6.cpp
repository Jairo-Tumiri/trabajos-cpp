/*hacer una funcion para almacenar N numeros en un arreglo dinamico,
posteriormente en otra funcion buscar un numero en particular.

NOTA: Puedes utilizar cualquier metodo de bisqueda(secuencial o binaria)*/
#include <iostream>

using namespace std;

void pedirNumeros();
void buscarNumero(int *, int);
int *numero, nNumeros;

int main()
{

    pedirNumeros();

    buscarNumero(numero, nNumeros);

    return 0;
}

void pedirNumeros()
{
    cout << "Digite la cantidad de numeros: " << endl;
    cin >> nNumeros;

    numero = new int[nNumeros];

    for (int i = 0; i < nNumeros; i++)
    {
        cout << "Numeros: ";
        cin >> *(numero + i);
    }
};

void buscarNumero(int *numero, int nNumeros)
{
    int incognita;
    cout << "Digite el numero a buscar: " << endl;
    cin >> incognita;

    for (int i = 0; i < nNumeros; i++)
    {
        if (*(numero + i) == incognita)
        {
            cout << "El numero " << incognita << " se encuentra en la posicion " << i + 1 << endl;
        }

        // cout << *(numero + i) << ", ";
    }
};