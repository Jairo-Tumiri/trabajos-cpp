#include <iostream>
// Función para sumar dos números enteros
int suma(int a, int b) {
return a + b;
}
// Función sobrecargada para sumar dos números de punto flotante
float suma(float a, float b) {
return a + b;
}
int main() {
// Sumar dos números enteros
int num1 = 5;
int num2 = 10;
std::cout << "La suma de " << num1 << " y " << num2 << " es " << suma(num1, num2) << std::endl;
// Sumar dos números de punto flotante
float num3 = 3.14;
float num4 = 2.71;
std::cout << "La suma de " << num3 << " y " << num4 << " es " << suma(num3, num4) << std::endl;
return 0;
}