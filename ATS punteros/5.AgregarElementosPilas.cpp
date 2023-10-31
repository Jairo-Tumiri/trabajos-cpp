/*
 INSERTAR ELEMENTOS EN LA PILA
 - Para inserta elementos en la pila, solo hay que seguir 4 pasos:

 1) Crear el espacio en memoria para almacenar un nodo
    - incializar el nodo con NULL

        struct Nodo {
            int dato;
            Nodo *siguiente;
        }
        pila = NULL;
        void agregarPila(Nodo *&pila,int n){
            Nodo *nuevo_nodo = new Nodo(); //reservamos memoria para un nuevo nodo
            //CODE
        }

 2) Cargar el valor del nodo(dato)

        void agregarPila(Nodo *&pila,int n){
            Nodo *nuevo_nodo = new Nodo();
            nuevo_nodo->dato = n;
            //CODE
        }

 3) Cargar el puntero pila dentrol del nodo(*siguiente)

        void agregarPila(Nodo *&pila,int n){
            Nodo *nuevo_nodo = new Nodo();
            nuevo_nodo->dato = n;
            nuevo_nodo->siguiente = pila;
        }

 4) Asignar el nuevo nodo a pila.

        void agregarPila(Nodo *&pila,int n){
            Nodo *nuevo_nodo = new Nodo();
            nuevo_nodo->dato = n;
            nuevo_nodo->siguiente = pila;
            pila = nuevo_nodo;
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
int main()
{
    Nodo *pila = NULL;
    int n1, n2;
    cout << "\nDigite el 1 numero: ";
    cin >> n1;
    agregarPila(pila, n1);

    cout << "\nDigite el 2 numero: ";
    cin >> n2;
    agregarPila(pila, n2);
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