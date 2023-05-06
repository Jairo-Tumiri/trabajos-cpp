#include <iostream>
#include <string>
using namespace std;

/* Es posible usar el operador de extracción >>on cinpara mostrar una cadena ingresada por un usuario:
Sin embargo, cinconsidera un espacio (espacio en blanco, tabuladores, etc.) como un carácter de terminación,
lo que significa que solo puede mostrar una sola palabra (incluso si escribe muchas palabras):
Por eso, cuando trabajamos con cadenas, a menudo usamos la getline() función para leer una línea de texto.
Toma cincomo primer parámetro, y la variable de cadena como segundo: */

int main()
{
    string nombreApellido;
    getline(cin, nombreApellido);

    cout << "El usuario ingresado es: " << nombreApellido << endl;
    return 0;
}