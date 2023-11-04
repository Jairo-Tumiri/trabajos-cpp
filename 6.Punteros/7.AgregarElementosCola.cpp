/*
INSERTARA ELEMENTOS EN UNA COLA.
    para insertar elementos en una cola, solo hay que seguir 3 pasos:
    1. Crear espacio en memoria para almacenar un nodo.
        void insertarCola(Nodo *&frente, Nodo *&fin, int n){
            Nodo *nuevo_nodo = new Nodo();
        }
    2. asignar ese nuevo nodo al dato que queremos insertar.
         void insertarCola(Nodo *&frente, Nodo *&fin, int n){
            Nodo *nuevo_nodo = new Nodo();

            nuevo_nodo->dato = n;
            nuevo_nodo->siguiente = NULL;
        }
    3. asignar los punteros frente y fin hacia el nuevo nodo.
*/

#include <iostream>
// Definición de la estructura Nodo
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
// Función para crear un nuevo nodo
Nodo *crearNodo(int);
// Función para insertar un elemento en la cola
void encolar(Nodo *&, Nodo *&, int);
// Función para eliminar y obtener el elemento del frente de la cola
int desencolar(Nodo *&, Nodo *&);
// Función para verificar si la cola está vacía
bool isEmpty(Nodo *);

int main()
{
    Nodo *frente = nullptr;
    Nodo *final = nullptr;
    // Encolar elementos
    encolar(frente, final, 100);
    encolar(frente, final, 22);
    encolar(frente, final, 31);
    encolar(frente, final, 26);
    encolar(frente, final, 32);
    encolar(frente, final, 10);
    std::cout << "Elementos en la cola:" << std::endl;
    while (!isEmpty(frente))
    {
        // Desencolar y mostrar el elemento del frente de la cola
        int valor = desencolar(frente, final);
        std::cout << valor << " ";
    }
    std::cout << std::endl;
    return 0;
}

// Nodo *crearNodo(int valor)
// {
//     Nodo *nuevoNodo = new Nodo;
//     nuevoNodo->dato = valor;
//     nuevoNodo->siguiente = nullptr;
//     return nuevoNodo;
// }
void encolar(Nodo *&frente, Nodo *&final, int valor)
{
    Nodo *nuevoNodo = new Nodo;
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = nullptr;

    if (final == nullptr)
    {
        frente = final = nuevoNodo;
    }
    else
    {
        final->siguiente = nuevoNodo;
        final = nuevoNodo;
    }
}
int desencolar(Nodo *&frente, Nodo *&final)
{
    if (frente == nullptr)
    {
        std::cerr << "La cola está vacía." << std::endl;
        return -1; // Valor de error
    }
    int valor = frente->dato;
    Nodo *temp = frente;
    frente = frente->siguiente;
    if (frente == nullptr)
    {
        final = nullptr; // Si se elimina el último elemento, actualizar 'final'
    }
    delete temp;
    return valor;
}
bool isEmpty(Nodo *frente)
{
    return frente == nullptr;
}