/*
Práctica: Gestión de múltiples listas de tareas pendientes en una aplicación de organización personal
Estás desarrollando una aplicación de organización personal que permite a los usuarios gestionar múltiples grupos
de tareas pendientes. Las tareas tiene un tipo y deben completarse primero las tareas que se ingresaron de manera
más reciente por cada tipo.
Estructura de datos que debes utilizar:
*/
#include <iostream>
using namespace std;

struct NodoTarea
{
    string descripcion;
    NodoTarea *sgte;
};

struct ListaPorTipo
{
    int codigoTipo;
    NodoTarea *pilaDeTareas;
    ListaPorTipo *sgte;
};
// /agregar nueva lista por tipo
ListaPorTipo *agregarNuevaListaPorTipo(ListaPorTipo *&lista, int codigoTipo)
{
    ListaPorTipo *tipoNuevo = new ListaPorTipo;     
    tipoNuevo->codigoTipo = codigoTipo;
    tipoNuevo->pilaDeTareas = nullptr;
    tipoNuevo->sgte = nullptr;

    ListaPorTipo *tipoAnterior = nullptr;
    ListaPorTipo *tipoAuxiliar = lista;

    while (tipoAuxiliar != nullptr)
    {
        tipoAnterior = tipoAuxiliar;
        tipoAuxiliar = tipoAuxiliar->sgte;
    }

    if (tipoAnterior == nullptr)
    {
        lista = tipoNuevo;
    }
    else
    {
        tipoAnterior->sgte = tipoNuevo;
    }

    return tipoNuevo;
};

void agregarTarea(ListaPorTipo *&lista, int codigoTipo, string descripcion)
{
    ListaPorTipo *tipoActual = lista;
    ListaPorTipo *tipoAnterior = nullptr;
    // Buscar la lista correspondiente al códigoTipo
    while (tipoActual != nullptr && tipoActual->codigoTipo != codigoTipo)
    {
        tipoAnterior = tipoActual;
        tipoActual = tipoActual->sgte;
    }
    // Si no se encuentra la lista correspondiente, crear una nueva
    if (tipoActual == nullptr)
    {
        tipoActual = agregarNuevaListaPorTipo(lista, codigoTipo); // Llamamos a la función para crear una nueva lista.
    }
    // Agregar la tarea a la pila de tareas
    NodoTarea *nuevaTarea = new NodoTarea;
    nuevaTarea->descripcion = descripcion;
    nuevaTarea->sgte = tipoActual->pilaDeTareas;
    tipoActual->pilaDeTareas = nuevaTarea;
};

string dameProximaTarea(ListaPorTipo *lista, int codigoTipo)
{

    ListaPorTipo *tipoActual = lista;

    while (tipoActual != nullptr && tipoActual->codigoTipo != codigoTipo)
    {
        tipoActual = tipoActual->sgte;
    }

    if (tipoActual == nullptr || tipoActual->pilaDeTareas == nullptr)
    {
        return "No tengo";
    }

    string descripcion = tipoActual->pilaDeTareas->descripcion;
    NodoTarea *tareaAEliminar = tipoActual->pilaDeTareas;
    tipoActual->pilaDeTareas = tipoActual->pilaDeTareas->sgte;
    delete tareaAEliminar;
    return descripcion;
};

int dameCantidadDePilasConTareasPendientes(ListaPorTipo *lista)
{
    int count = 0;
    ListaPorTipo *tipoActual = lista;

    while (tipoActual != nullptr)
    {
        if (tipoActual->pilaDeTareas != nullptr)
        {
            count++;
        }
        tipoActual = tipoActual->sgte;
    }

    return count;
};

int main()
{
    ListaPorTipo *lista = nullptr;
    lista = agregarNuevaListaPorTipo(lista, 1);

    agregarTarea(lista, 1, "cantar como huevon");

    string tarea = "";
    tarea = dameProximaTarea(lista, 121);
    cout << "La proxima tarea de 121 es: " << tarea << endl;

    cout << "hay: " << dameCantidadDePilasConTareasPendientes(lista) << endl;

    return 0;
}