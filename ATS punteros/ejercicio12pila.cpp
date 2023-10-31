/*
Hacer un progrma en c++ utlizando  Pilas que contenga el siguiente menu:
1) insertar un caracter a la pila.
2) mostrar todos los elementos de la pila
3) salir
*/
#include <iostream>
using namespace std;

struct NodoMenu
{
    char caracter;
    NodoMenu *siguiente;
};

void ingresarDatos(NodoMenu *&, char);
void mostrarDatos(NodoMenu *&, char &);

int main()
{

    NodoMenu *pila = NULL;
    int option;
    do
    {
        cout << "\n\n\nIngresa una opcion del menu: " << endl;
        cout << "1) insertar caracter en pila: " << endl;
        cout << "2) mostrar pila: " << endl;
        cout << "3) salir: " << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            char car;
            cout << "Ingresar el caracter: ";
            cin >> car;
            ingresarDatos(pila, car);
            break;
        case 2:
            while (pila != nullptr)
            {
                mostrarDatos(pila, car);
                if (pila != nullptr)
                    cout << car << " , ";
                else
                    cout << car << ".";
            }
            break;
        case 3:
            cout << "Saliendo del programa...";
            break;
        default:
            break;
        }
    } while (!(option == 3));

    return 0;
}

void ingresarDatos(NodoMenu *&pila, char car)
{
    NodoMenu *nuevo_nodo = new NodoMenu();
    nuevo_nodo->caracter = car;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
    cout << "\nEl elemento " << car << "se agrego correctamente a la pila." << endl;
}
void mostrarDatos(NodoMenu *&pila, char &car)
{
    NodoMenu *aux = pila;
    car = aux->caracter;
    pila = aux->siguiente;
    delete aux;
};