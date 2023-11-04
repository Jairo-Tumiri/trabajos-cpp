<h1>Introducción</h1>

Este repositorio contiene el material de estudio del curso de C++ para la Universidad Tecnológica Nacional (UTN), abarcando los niveles básico e intermedio. El objetivo principal es proporcionar a los demas los fundamentos esenciales de programación en C++ y prepararlos para abordar problemas más complejos en el futuro.

<h2>Contenido del Curso:</h2>

1. Introducción a la Programación y C++:
   Conceptos básicos de programación:

Variables, tipos de datos.
Operadores y expresiones.

2. Estructuras Básicas:
   Control de flujo:

if, else, switch.
Bucles:

for, while, do-while.
Ejemplo:

```cpp
#include <iostream>

int main() {
    int edad;

    std::cout << "Ingrese su edad: ";
    std::cin >> edad;

    if (edad >= 18) {
        std::cout << "Eres mayor de edad." << std::endl;
    } else {
        std::cout << "Eres menor de edad." << std::endl;
    }

    return 0;
}
```

3. Funciones y Programación Modular:
   Definición y llamada de funciones.

Parámetros y retorno de funciones.

Ámbito de las variables.

Ejemplo:

```cpp
#include <iostream>

// Declaración de función
int sumar(int a, int b) {
    return a + b;
}

int main() {
    int resultado = sumar(3, 4);
    std::cout << "La suma es: " << resultado << std::endl;

    return 0;
}
```

4. Arreglos y Cadenas:
   Declaración y manipulación de arreglos.

Operaciones con cadenas de caracteres.

Ejemplo:

```cpp
#include <iostream>
#include <cstring>

int main() {
    char nombre[20];
    std::cout << "Ingrese su nombre: ";
    std::cin >> nombre;

    // Operaciones con cadenas
    std::cout << "Longitud del nombre: " << std::strlen(nombre) << std::endl;

    return 0;
}
```

5. Punteros y Referencias:
   Conceptos básicos de punteros.

Uso de punteros y referencias.

Ejemplo:

```cpp
#include <iostream>

int main() {
    int numero = 10;
    int* puntero = &numero;

    std::cout << "Valor de la variable: " << *puntero << std::endl;

    return 0;
}
```

6. Estructuras de Datos:
   Estructuras.

Clases y objetos.

Ejemplo:

```cpp
#include <iostream>

// Definición de clase
class Animal {
public:
    void hacerSonido() {
        std::cout << "Haciendo un sonido genérico" << std::endl;
    }
};

// Clase derivada
class Perro : public Animal {
public:
    void hacerSonido() {
        std::cout << "Haciendo ladridos" << std::endl;
    }
};

int main() {
    Animal animal;
    Perro perro;

    animal.hacerSonido();
    perro.hacerSonido();

    return 0;
}
```

7. Manejo de Memoria Dinámica:
   Operador new y delete.

Gestión de memoria.

Ejemplo:

```cpp
#include <iostream>

int main() {
    // Asignación dinámica de memoria para un entero
    int* ptr = new int;
    *ptr = 5;

    std::cout << "Valor almacenado en la memoria dinámica: " << *ptr << std::endl;

    // Liberación de memoria
    delete ptr;

    return 0;
}
```

8. Entrada/Salida en C++:
   Flujos de entrada y salida.

Archivos y manipulación de archivos.

Ejemplo:

```cpp
#include <iostream>
#include <fstream>

int main() {
    // Escritura en archivo
    std::ofstream archivoSalida("archivo.txt");
    archivoSalida << "Hola, este es un archivo de prueba." << std::endl;
    archivoSalida.close();

    // Lectura desde archivo
    std::ifstream archivoEntrada("archivo.txt");
    std::string contenido;
    getline(archivoEntrada, contenido);
    archivoEntrada.close();

    std::cout << "Contenido del archivo: " << contenido << std::endl;

    return 0;
}
```

Contribuciones:
¡Las contribuciones son bienvenidas! Si encuentras algún error o deseas agregar más ejemplos, no dudes en hacer un pull request.

¡Feliz aprendizaje de C++!
