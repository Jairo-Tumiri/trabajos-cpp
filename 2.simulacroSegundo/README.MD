Teoria (4 puntos)
Ahora tiene una consultora de software y llegan clientes que quieren que los asesores en el desarrollo de software.
Por la situación de cada cliente tiene que recomendarle como desarrollar su sistema.

1. Gestión de Deshacer en un Editor de Texto
    Un editor de texto necesita permitir a los usuarios deshacer las últimas acciones realizadas, como escribir, borrar o
    editar texto. Los usuarios pueden presionar un botón de "deshacer" para revertir la última acción.
    ¿Cuál/es de estas estructuras de datos utilizarías para implementar la funcionalidad de "deshacer" en el editor de
    texto? Justifica tu elección.
Pila Cola Lista Array Archivo Arbóreas
    
    La estructura que utlizaria seria pila por el concepto que trae ya que su estructura nos permite introducir datos y asi mismo lo que hace diferente es que el ultimo dato en entrar es el primero, lo cual se acopla a la funcionalidad que nos esta pidiendo la consigna.
    (Array no se necesita saber la cantidad, Archivos no es necesario guardar de manera permanente.)
    


2. Sistema de Gestión de Libros en una Biblioteca
    Una biblioteca necesita implementar un sistema para gestionar su colección de libros. En el sistema, se deben
    registrar los detalles de 1000 libros, incluyendo título, autor y número de ejemplares disponibles. Además, se debe
    permitir a los usuarios buscar un libro por título y ver cuántos ejemplares están disponibles.
    ¿Cuál/es de estas estructuras de datos utilizarías para almacenar esta información? Justifica tu elección.
Pila Cola Lista Array Archivo Arbóreas
    La estructurea es el Array ya que su estructura nos permite metodos diferentes de busqueda y ordenamiento tambien cabe destacar que son un poco mas eficiente y rapido.

3. Sistema de Turnos en una Clínica Médica
    Una clínica médica necesita implementar un sistema para gestionar los turnos de los pacientes. Los pacientes
    llegan a la clínica y se registran para obtener un turno, y luego son atendidos en el orden en que se registraron.
    ¿Cuál/es de estas estructuras de datos utilizarías para almacenar esta información? Justifica tu elección.
Pila Cola Lista Array Archivo Arbóreas
    La estructura seria Cola ya que su estructura nos permite introducir datos y no saber la cantidad necesaria de pacientes que va a ver, tambien la funcionalidad que nos pide se acopla a la forma en la que funciona su estructura en este caso el primer paciente en llegar seria el primero en ser atendido.

4. Registro de Clientes en una Tienda en Línea
    Una tienda en línea desea llevar un registro de sus clientes. Por cada cliente, se registran su número de cliente,
    nombre y si ha realizado una compra recientemente. Luego, la tienda necesita buscar rápidamente a un cliente por
    su número de cliente para verificar si ha realizado una compra recientemente.
    ¿Cuál/es de estas estructuras de datos utilizarías para almacenar esta información? Justifica tu elección.
Pila Cola Lista Array Archivo Arbóreas

Práctica: Gestión de múltiples listas de tareas pendientes en una aplicación de organización personal
Estás desarrollando una aplicación de organización personal que permite a los usuarios gestionar múltiples grupos
de tareas pendientes. Las tareas tiene un tipo y deben completarse primero las tareas que se ingresaron de manera
más reciente por cada tipo.
Estructura de datos que debes utilizar:

    `struct NodoTarea {
        string descripcion;
        NodoTarea* sgte;
    };
    struct ListaPorTipo {
        NodoTarea pilaDeTareas;
        int codigoTipo;
        ListaPorTipo* sgte;
    };
    ListaPorTipo* lista;`

Operaciones a implementar:

1. ListaPorTipo* agregarNuevaListaPorTipo(ListaPorTipo* lista, int codigoTipo);
   Agregar nueva lista de tareas según su tipo

2. void agregarTarea(ListaPorTipo* lista, int codigoTipo, string descripcion);
   Agrega una tarea a la pila de acuerdo a su código. Si no existe pila de dicho tipo debe agregarla, puedes usar la función del punto 1.

3. string dameProximaTarea(ListaPorTipo* lista, int codigoTipo);
   Retorna la próxima tarea del código. Retorna “No tengo” si no hay.

4. int dameCantidadDePilasConTareasPendientes(ListaPorTipo* lista);
   Retorna la cantidad de pilas con tareas pendientes.





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

ListaPorTipo *agregarNuevaListaPorTipo(ListaPorTipo *&lista, int codigoTipo)
{
    ListaPorTipo *nuevoTipo = new ListaPorTipo;
    nuevoTipo->codigoTipo = codigoTipo;
    nuevoTipo->pilaDeTareas = nullptr;
    nuevoTipo->sgte = nullptr;

    ListaPorTipo *tipoActual = lista;
    ListaPorTipo *tipoAuxiliar = lista;
    while (tipoAuxiliar != nullptr)
    {
        tipoActual = tipoAuxiliar;
        tipoAuxiliar = tipoAuxiliar->sgte;
    }

    tipoActual

    return tipoActual;
};

int main()
{
    ListaPorTipo *lista;

    lista = agregarNuevaListaPorTipo(lista, 20);

    return;
};