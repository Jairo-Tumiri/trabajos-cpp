/* Un cliente quiere armar un sistema donde el usuario cargue 10 empleados que esta formado por su correspondiente ID y la cantidad de sueldo
La cantidad de sueldo se define por la cantidad de ventas que obtuvo y cada venta equivale $500.
Los empleados con id con multiplo de 2 tuvieron el doble de ventas
El sistema debe retornar al mejor empleado que obtuvo mejor sueldo y la cantidad de sueldos totales que se pago. */

#include <iostream>
using namespace std;

struct Empleado
{
    int id;
    float sueldo;
    int ventas;
};

void CargarEmpleado(Empleado[], int, int);
void OrdenarEmpleadoPorSueldo(Empleado[], int);
void ImprimirDatos(Empleado[], int, int &);
int main()
{
    int PRECIO_POR_VENTA = 500;
    int cantidadDeEmpleados;
    Empleado empleados[cantidadDeEmpleados];
    cout << "ingresar la cantidad dee empleados que estan en el negocio";
    cin >> cantidadDeEmpleados;
    CargarEmpleado(empleados, cantidadDeEmpleados, PRECIO_POR_VENTA);

    OrdenarEmpleadoPorSueldo(empleados, cantidadDeEmpleados);

    cout << "==================================" << endl;
    int TOTAL_PAGADO = 0;
    ImprimirDatos(empleados, cantidadDeEmpleados, TOTAL_PAGADO);
    return 0;
}

void CargarEmpleado(Empleado empleados[], int cantidad, int PRECIO_POR_VENTA)
{

    for (int i = 0; i < cantidad; i++)
    {
        cin >> empleados[i].id;
        cin >> empleados[i].ventas;
        empleados[i].sueldo = PRECIO_POR_VENTA * empleados[i].ventas;

        if (empleados[i].id % 2 == 0)
        {
            empleados[i].sueldo *= 2;
        }

        // cout << "id: " << empleados[i].id << "/ cantidad de ventas: " << empleados[i].ventas << "|| /n sueldo total: " << empleados[i].sueldo << endl;
    }
}
void OrdenarEmpleadoPorSueldo(Empleado empleados[], int cantidad)
{
    Empleado aux;
    int i, j, ord = 0;
    for (i = 0; i < cantidad - 1 && ord == 0; i++)
    {
        ord = 1;
        for (j = 0; j < cantidad - 1; j++)
        {
            if (empleados[j].sueldo < empleados[j + 1].sueldo)
            {
                aux = empleados[j];
                empleados[j].sueldo = empleados[j + 1].sueldo;
                empleados[j + 1] = aux;
                ord = 0;
            }
        }
    }
};

void ImprimirDatos(Empleado empleados[], int cantidad, int &TOTAL_PAGADO)
{
    for (int i = 0; i < cantidad; i++)
    {
        // Realizar acción en cada elemento, por ejemplo, imprimir su valor
        TOTAL_PAGADO += empleados[i].sueldo;
        cout << "id: " << empleados[i].id << "/ sueldo: " << empleados[i].sueldo << "cantida vntas: " << empleados[i].ventas << endl;
    }
    cout << TOTAL_PAGADO << endl;
}