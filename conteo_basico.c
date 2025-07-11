#include <stdio.h> // Incluye la librería estándar de entrada y salida

int main() {
    // Declaración e inicialización de la variable de control del ciclo
    // 'contador_actual' llevará la cuenta de en qué número estamos.
    int contador_actual = 0;

    // Mensaje inicial para indicar qué hará el programa
    printf("Iniciando un conteo del 0 al 5 usando un ciclo while...\n");

    // Inicio del ciclo while
    // El ciclo continuará ejecutándose SIEMPRE Y CUANDO la condición
    // (contador_actual <= 5) sea verdadera.
    while (contador_actual <= 5) {
        // Imprime el valor actual del contador
        printf("Contando: %d\n", contador_actual);

        // Incrementa el valor del contador en 1.
        // Esto es CRUCIAL para que la condición eventualmente se vuelva falsa
        // y el ciclo termine, evitando un "bucle infinito".
        contador_actual = contador_actual + 1; // También se puede escribir como contador_actual++;
    }

    // Mensaje que se muestra una vez que el ciclo ha terminado
    printf("¡El conteo ha finalizado!\n");

    return 0; // Indica que el programa finalizó correctamente
}