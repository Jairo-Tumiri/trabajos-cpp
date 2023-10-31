/*
Pedir una cadena de caracteres (string) al usuario,
 e indicar cuantas veces aparece la vocal a, e ,i ,o ,u;
 en la cadena de caracteres.

 NOTA: debes usar punteros
*/
#include <iostream>
#include <string.h>
using namespace std;

char palabra[100];

void pedirPalabra();
int contarCadaVocal(char *, string);

int main()
{

    pedirPalabra();
    cout << "\n\nla cantidad de letras es: " << endl;
    cout << "A:" << contarCadaVocal(palabra, "A") << endl;
    cout << "E:" << contarCadaVocal(palabra, "E") << endl;
    cout << "I:" << contarCadaVocal(palabra, "I") << endl;
    cout << "O:" << contarCadaVocal(palabra, "O") << endl;
    cout << "U:" << contarCadaVocal(palabra, "U") << endl;

    return 0;
}
void pedirPalabra()
{
    cout << "Escriba la palabra: ";
    cin.getline(palabra, 100, '\n');
    strupr(palabra); // transformando a MAYUSCULAS EL NOMBRE
};

int contarCadaVocal(char *poc_palabra, string letra)
{
    int count = 0;

    // cout << *poc_palabra << endl;
    while (*poc_palabra)
    {
        if (*poc_palabra == letra[0])
        {
            count++;
        }
        *poc_palabra++;
    }

    return count;
}