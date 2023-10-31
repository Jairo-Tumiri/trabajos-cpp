/*
    QUITAR ELEMENTOS DE UNA PILA
    1) Crear una variable de tipo Nodo llamada aux.
        void sacarPila(Nodo *&pila, int &n){
            Nodo *aux = pila;
        }
    2)Igual el n a aux->dato
        void sacarPila(Nodo *&pila, int &n){
            Nodo *aux = pila;
            n = aux->dato;
        }
    3) Pasar pila a siguiente nodo
        void sacarPila(Nodo *&pila, int &n){
            Nodo *aux = pila;
            n = aux->dato;
            pila = aux->siguiente;
        }
    4) Eliminar aux;
        void sacarPila(Nodo *&pila, int &n){
            Nodo *aux = pila;
            n = aux->dato;
            pila = aux->siguiente;
            delete aux;
        }
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void eliminarPila(Nodo *&, int &);

int main()
{
    Nodo *pila = NULL;
    int dato;
    cout << "\nDigite el 1 numero: ";
    cin >> dato;
    agregarPila(pila, dato);

    cout << "\nDigite el 2 numero: ";
    cin >> dato;
    agregarPila(pila, dato);

    cout << "\nSacando los elementos de la pila: ";
    while (pila != NULL)
    {
        eliminarPila(pila, dato);
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
void agregarPila(Nodo *&pila, int n)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    cout << "El elemento " << n << " fue agregado correctamente";
};
void eliminarPila(Nodo *&pila, int &n)
{
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
};
