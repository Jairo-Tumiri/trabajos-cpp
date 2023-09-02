/* Dado un array de nombres, ordenar el array y luego solicitar al usuario ingresar un
nombre y utiliza la búsqueda binaria para determinar si ese nombre está presente en
el array. Muestra un mensaje indicando si se encontró o no.
 */

#include <iostream>
#include <string>
using namespace std;

string LlenarArray(int);

int main()
{
    int amount_names = 5;
    string names[amount_names] = {};

    names[amount_names] = LlenarArray(amount_names);

    for (int i = 0; i < amount_names; i++)
    {
        cout << "==================" << endl;
        cout << names[amount_names] << endl;
        cout << "==================" << endl;
    }

    return 0;
}

string LlenarArray(int size)
{
    string newNames[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Agregar nombre en la posicion" << i << endl;
        getline(cin, newNames[i]);
    };

    return newNames[size];
};

int main()
{

    int num = 3;
    string palabras[num];
    string aux1;

    for (int i = 0; i < num; i++)
    {

        cout << "Introduce una palabra: " << endl;
        cin >> palabras[i];
    }

    // palabras = ana ,  oscar , maria
    //             0   ,  1   ,  2

    /*              0 < 3  ,  */
    for (int i = 0; i < num; i++)
    {
        /*              1 ; 1 < 3       */
        for (int j = i + 1; j < num; j++)
        {
            /*     ana   >   oscar      */
            if (palabras[i] > palabras[j])
            {

                aux1 = palabras[j];        // almaceno 2
                palabras[i] = palabras[j]; // cambio el valor a J ahora es 1
                aux1 = palabras[i];        // cambio el valor a i ahora es 2
            }
        }
        for (int i = 0; i < num; i++)
        {
            cout << palabras[i] << endl;
        }
    }

    return 0;
}