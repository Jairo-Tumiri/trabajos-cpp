#include <iostream>

using namespace std;
// por valor / pasa una copia del valor del parametro,(no afecta el valo original del parametro fuera de la funcion)
void suma(int a, int b)
{
    int resultado;
    resultado = a + b;
    cout <<"Dentro de la funcion "<<resultado<<endl;
}
int main()
{  
    suma(9,6);

    cout <<"Main principal"<<endl;
    return 0;
}