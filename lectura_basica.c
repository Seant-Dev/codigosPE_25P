#include <stdio.h> // Incluye la librería estándar de entrada y salida

int main() {
    // Declaración de variables
    int edad;          // Variable para almacenar un número entero (ej. edad)
    float altura;      // Variable para almacenar un número decimal (ej. altura)
    char inicial;      // Variable para almacenar un solo carácter (ej. inicial del nombre)

    // --- Lectura de datos ---

    // Solicita al usuario que ingrese su edad
    printf("Por favor, ingresa tu edad (numero entero): ");
    // Lee un valor entero desde el teclado y lo guarda en la variable 'edad'
    scanf("%d", &edad); // %d es el especificador de formato para enteros

    // Solicita al usuario que ingrese su altura
    printf("Ahora, ingresa tu altura en metros (ej. 1.75): ");
    // Lee un valor flotante desde el teclado y lo guarda en la variable 'altura'
    scanf("%f", &altura); // %f es el especificador de formato para flotantes

    // Solicita al usuario que ingrese la inicial de su nombre
    printf("Finalmente, ingresa la primera letra de tu nombre: ");
    // Lee un carácter desde el teclado y lo guarda en la variable 'inicial'
    // El espacio antes de %c es importante para consumir cualquier caracter de nueva linea
    // o espacio que haya quedado en el buffer de entrada de las lecturas anteriores.
    scanf(" %c", &inicial); // %c es el especificador de formato para caracteres

    // --- Impresión de datos ---

    // Imprime los valores almacenados en las variables
    printf("\n--- Datos Ingresados ---\n");
    printf("Tu edad es: %d anios\n", edad);       // Imprime el valor de 'edad'
    printf("Tu altura es: %f metros\n", altura); // Imprime el valor de 'altura'
    printf("La inicial de tu nombre es: %c\n", inicial); // Imprime el valor de 'inicial'

    return 0; // Indica que el programa finalizó correctamente
}