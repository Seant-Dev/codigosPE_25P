#include <stdio.h> // Incluye la librería estándar de entrada y salida

int main() {
    // Declaración de variables
    int contador_actual = 0; // Variable para llevar la cuenta, inicializada en 1
    int limite_maximo;       // Variable para almacenar el límite que el usuario ingresará

    // Solicita al usuario que ingrese el límite máximo
    printf("¡Hola! Vamos a contar desde 1 hasta el numero que tu quieras.\n");
    printf("Por favor, ingresa el numero maximo para el conteo: ");
    // Lee el valor entero ingresado por el usuario y lo guarda en 'limite_maximo'
    scanf("%d", &limite_maximo);

    // Pequeña validación para asegurarse de que el límite no sea menor que 1
    if (limite_maximo < 1) {
        printf("El limite debe ser al menos 1. No se realizara el conteo.\n");
        return 0; // Termina el programa si el límite es inválido
    }

    printf("\nIniciando el conteo del 1 hasta %d...\n", limite_maximo);

    // Inicio del ciclo while
    // El ciclo continuará ejecutándose mientras 'contador_actual' sea menor o igual
    // que el 'limite_maximo' ingresado por el usuario.
    while (contador_actual <= limite_maximo) {
        // Imprime el valor actual del contador
        printf("Contando: %d\n", contador_actual);

        // Incrementa el valor del contador en 1.
        // Esto asegura que en algún momento 'contador_actual' superará
        // a 'limite_maximo', y la condición del ciclo se hará falsa,
        // permitiendo que el programa salga del bucle.
        contador_actual++; // Forma abreviada de contador_actual = contador_actual + 1;
    }

    // Mensaje que se muestra una vez que el ciclo ha terminado
    printf("¡El conteo ha finalizado!\n");

    return 0; // Indica que el programa finalizó correctamente
}