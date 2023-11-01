/*
Estás trabajando en un sistema para administrar la cola de pedidos en un restaurante de comida
rápida. Los clientes hacen pedidos en función de su urgencia, y debes implementar un sistema que
permita agregar pedidos a la cola de acuerdo a su urgencia.
*/
#include <iostream>
using namespace std;
struct Pedido
{
    int numeroPedido;
    string descripcion;
    int complejidad;
    int urgencia;
};
struct NodoPedido
{
    Pedido pedido;
    NodoPedido *seguiente;
};
struct ColaPedidos
{
    NodoPedido *frente;
    NodoPedido *final;
};
/*Inicializa todas las colas de pedidos, estableciendo los punteros de cola de cada nivel de complejidad en NULL*/
void inicializarColas(ColaPedidos colas[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        colas[i].frente = nullptr;
        colas[i].final = nullptr;
    }
};
/*Agrega un pedido a la cola de acuerdo a su urgencia y urgencia. Los parámetros urgencia siempre están en el rango de 1 a 5.*/
void agregarPedido(ColaPedidos colas[], int numeroPedido, string descripcion, int urgencia, int complejidad)
{
    NodoPedido *nuevo = new NodoPedido();
    nuevo->pedido.numeroPedido = numeroPedido;
    nuevo->pedido.descripcion = descripcion;
    nuevo->pedido.urgencia = urgencia;
    nuevo->pedido.complejidad = complejidad;
    nuevo->seguiente = nullptr;
    if (urgencia >= 1 && urgencia <= 5)
    {
        if (colas[urgencia - 1].final == NULL)
        {
            colas[urgencia - 1].final = nuevo;
            colas[urgencia - 1].frente = nuevo;
        }
        else
        {
            colas[urgencia - 1].final->seguiente = nuevo;
            colas[urgencia - 1].final = nuevo;
        }
    }
    else
    {
        cout << "El numero de urgencia debe estar entre el rango de 1 al 5" << endl;
        delete nuevo;
    }
};
/*Retorna el pedido mas urgente de la cola de pedidos*/
Pedido pedidoMasUrgente(ColaPedidos colas[], int cantidad)
{
    Pedido pedidoMasUrgente;
    pedidoMasUrgente.urgencia = 6; // Inicializar con un valor fuera del rango.
    for (int i = cantidad - 1; i >= 0; i--)
    {
        if (colas[i].frente != nullptr)
        {
            cout << "NUMERO DE URGENCIA: " << i + 1 << endl;
            pedidoMasUrgente = colas[i].frente->pedido;
            NodoPedido *temp = colas[i].frente;
            colas[i].frente = colas[i].frente->seguiente;
            if (colas[i].frente == nullptr)
            {
                colas[i].final = nullptr;
            }
            delete temp;
            return pedidoMasUrgente;
        }
        else
        {
            cout << "No hay pedidos en el numero de urgencia: " << i + 1 << endl;
        }
    }
    return pedidoMasUrgente;
};
/*Verifica si todas las colas estan vacias. Retorna 1 si todas las colas estan vacias, de lo contrario, retorna cero*/
int colaVacia(ColaPedidos colas[], int cantidad, int &incremenetar_pedido)
{
    incremenetar_pedido = 0;
    for (int i = 0; i < cantidad; i++)
    {
        if (colas[i].frente != nullptr)
        {
            incremenetar_pedido++;
            Pedido Mostrar;
            Mostrar = colas[i].frente->pedido;
            cout << "urgencia: " << Mostrar.urgencia << " nombre: " << Mostrar.descripcion << endl;
            // return 0; // Al menos una cola no está vacía.
        }
    }
    cout << "El numero de pedidos es: ";
    return incremenetar_pedido; // Todas las colas están vacías
};

Pedido pedirDatos()
{
    Pedido nuevo;
    cout << "\n\nINGRESAR LOS DATOS\n " << endl;
    cout << "Ingresar numero de pedido: ";
    cin >> nuevo.numeroPedido;
    cin.ignore(100000, '\n');
    cout << "Ingresar descripcion: ";
    getline(cin, nuevo.descripcion);
    cout << "ingresar complegidad 1 al 5: ";
    cin >> nuevo.complejidad;
    cout << "Ingresar urgencia 1 al 5: ";
    cin >> nuevo.urgencia;
    return nuevo;
};

int main()
{
    // system("cls");
    int incremenetar_pedido = 0;
    ColaPedidos colas[5];
    string respuesta;
    inicializarColas(colas, 5);
    do
    {
        Pedido nuevo;
        cout << "\n========== : \n"
             << colaVacia(colas, 5, incremenetar_pedido);
        nuevo = pedirDatos();
        agregarPedido(colas, nuevo.numeroPedido, nuevo.descripcion, nuevo.urgencia, nuevo.complejidad);

        cout << "Deseas Agregar mas Pedidos: ";
        cin >> respuesta;
    } while (respuesta == "S" || respuesta == "s");

    do
    {
        Pedido Mas_Urgente = pedidoMasUrgente(colas, 5);
        if (Mas_Urgente.urgencia != 6)
        {
            cout << "============================";
            cout << "\n\nEl pedido mas urgente es: " << endl;
            cout << "Pedido: " << Mas_Urgente.numeroPedido << endl;
            cout << "Descripcion: " << Mas_Urgente.descripcion << endl;
            cout << "Urgencia: " << Mas_Urgente.urgencia << endl;
            cout << "Complejidad: " << Mas_Urgente.complejidad << endl;
            cout << "============================";
        }
        else
        {
            cout << "Ya no hay mas pedidos" << endl;
        }
        cout << "Deseas Preguntar de nuevo: ";
        cin >> respuesta;
    } while (respuesta == "S" || respuesta == "s");

    system("pause");
    return 0;
}
