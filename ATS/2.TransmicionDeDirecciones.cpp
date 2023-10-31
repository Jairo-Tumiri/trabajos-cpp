/*Transmicion de Direcciones

Ejemplo: Intercambiar el valor de 2 variables.*/

#include <iostream>
using namespace std;

void Intercambio(float *, float *);

int main()
{
    float num1 = 20.8, num2 = 6.78;
    cout << "Primer numero: " << num1 << endl;
    cout << "Segundo numero: " << num2 << endl;

    Intercambio(&num1, &num2); // mandamos la direccion de memoria de las variables con &

    cout << "\n\n Despues del intercambio: \n\n";
    cout << "Primer numero: " << num1 << endl;
    cout << "Segundo numero: " << num2 << endl;
    return 0;
}


void Intercambio(float *dirNm1, float *dirNm2)
{
    float aux;
    aux = *dirNm1;
    *dirNm1 = *dirNm2;
    *dirNm2 = aux;
}