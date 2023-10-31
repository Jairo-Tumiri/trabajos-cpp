/*Hacer un programa para agregar numeros enteros en una pila, hasta que el usuario
 lo decida, despues mostrar todos los numeros introducidos en la pila*/

#include <iostream>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void pedirDatos(Nodo *&, int);
void sacarDatos(Nodo *&, int &);

int main()
{
    int dato;
    char respuesta;
    Nodo *pila = NULL;
    do
    {
        cout << "Digite un numero: ";
        cin >> dato;
        pedirDatos(pila, dato);

        cout << "\nDesea agregar otro numero a la pila? (s/n): ";
        cin >> respuesta;
    } while (respuesta == 'S' || respuesta == 's');

    while (pila != NULL)
    {
        sacarDatos(pila, dato);
        if (pila != NULL)
        {
            cout << dato << " , ";
        }
        else
        {
            cout << dato << " . ";
        }
    }

    return 0;
}

void pedirDatos(Nodo *&pila, int dato)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = dato;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    cout << "Se agrego correctamente: " << dato << endl;
}
void sacarDatos(Nodo *&pila, int &dato)
{
    Nodo *aux = pila;
    dato = aux->dato;
    pila = aux->siguiente;
    delete aux;
}
