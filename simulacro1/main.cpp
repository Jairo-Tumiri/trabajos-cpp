#include <iostream>
using namespace std;

struct Vendedor
{
    int fecha[3];
    int num_legajo;
    int num_hamburguesa;
    float price;
};

void AgregarDatos(FILE *, Vendedor &); //

int vendedorMasVendedorDelMes(FILE *, int);
void mostrarRankingDeHamburguesasVendidasEnUnMes(FILE *, int);

int main()
{
    FILE *arch;
    Vendedor vendedores[3];
    int meses_vendedores[3];

    for (int i = 0; i < 3; i++)
    {
        AgregarDatos(arch, vendedores[i]);
    }

    int mes_select;
    cout << "PEDIR EL MES (numero)" << endl;
    cin >> mes_select;
    vendedorMasVendedorDelMes(arch, mes_select);

    return 0;
};

void AgregarDatos(FILE *file, Vendedor &newVendedor)
{
    int anio, mes, dia;
    file = fopen("ventas.dat", "a+b");
    if (file != NULL)
    {
        // fecha = {2023,8,12}
        cout << "INGRESAR ANIO" << endl;
        cin >> anio; // 20240101
        cout << "INGRESAR MES" << endl;
        cin >> mes;
        cout << "INGRESAR DIAS" << endl;
        cin >> dia;
        newVendedor.fecha[0] = anio;
        newVendedor.fecha[1] = mes;
        newVendedor.fecha[2] = dia;

        cout << "INGRESAR LEGAJO" << endl;
        cin >> newVendedor.num_legajo;

        cout << "INGRESAR NUMERO HAMBURGUESA" << endl;
        cin >> newVendedor.num_hamburguesa;

        cout << "INGRESAR PRECIO" << endl;
        cin >> newVendedor.price;

        fwrite(&newVendedor, sizeof(Vendedor), 1, file);
        fclose(file);
    }
    else
    {
        cout << "NO SE PUDO ABRIR EL ARCHIVO" << endl;
    }
}

int vendedorMasVendedorDelMes(FILE *file, int mes)
{
    file = fopen("ventas.dat", "rb");
    if (file != NULL)
    {
        int num = 0;
        Vendedor dataVendedor;
        Vendedor los_vendedores[3];
        while (fread(&dataVendedor, sizeof(Vendedor), 1, file) == 1)
        {
            if (dataVendedor.fecha[1] == mes)
            {
                los_vendedores[num] = dataVendedor;
                num++;
            }
        }
        fclose(file);

        for (int i = 0; i < num - 1; i++)
        {
            for (int j = 0; j < num - i - 1; j++)
            {
                if (los_vendedores[j].num_hamburguesa > los_vendedores[j + 1].num_hamburguesa)
                {
                    Vendedor temp = los_vendedores[j];
                    los_vendedores[j] = los_vendedores[j + 1];
                    los_vendedores[j + 1] = temp;
                }
            }
        }

        cout << "==============" << endl;
        cout << los_vendedores[num - 1].num_legajo << endl;

        return los_vendedores[num - 1].num_legajo;
    }
    else
    {
        cout << "NO SE PUEDE ABRIREL ARCHIVO" << endl;
        return 1;
    }
};
void mostrarRankingDeHamburguesasVendidasEnUnMes(FILE *file, int mes)
{
    file = fopen("ventas.dat", "rb");
    if (file != NULL)
    {
        int num = 0;
        Vendedor rankingVendedor;
        Vendedor aux_rankingVendedor[3];
        while (fread(&rankingVendedor, sizeof(Vendedor), 1, file) == 1)
        {
            if (rankingVendedor.fecha[1] == mes)
            {
                aux_rankingVendedor[num] = rankingVendedor;
                num++;
            }
        }
        fclose(file);

        for (int i = 0; i < num - 1; i++)
        {
            for (int j = 0; j < num - i - 1; j++)
            {
                if (aux_rankingVendedor[j].num_hamburguesa > aux_rankingVendedor[j + 1].num_hamburguesa)
                {
                    Vendedor temp = aux_rankingVendedor[j];
                    aux_rankingVendedor[j] = aux_rankingVendedor[j + 1];
                    aux_rankingVendedor[j + 1] = temp;
                }
            }
        }
    }
};
