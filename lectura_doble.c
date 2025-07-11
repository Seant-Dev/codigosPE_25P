#include <stdio.h> // Incluye la librería estándar de entrada y salida

int main() {
    // Declaración de variables
    int numero1_entero, numero2_entero;          // Dos variables enteras
    float precio1_flotante, precio2_flotante;    // Dos variables flotantes
    char letra1_caracter, letra2_caracter;      // Dos variables de carácter

    // --- Lectura de enteros ---
    printf("Ingresa dos numeros enteros separados por un espacio: ");
    // Lee dos enteros de una vez. Los valores deben estar separados por espacios,
    // tabulaciones o nuevas líneas en la entrada del usuario.
    scanf("%d %d", &numero1_entero, &numero2_entero);

    // --- Lectura de flotantes ---
    printf("Ingresa dos precios (numeros decimales) separados por un espacio: ");
    // Lee dos flotantes de una vez.
    scanf("%f %f", &precio1_flotante, &precio2_flotante);

    // --- Lectura de caracteres ---
    printf("Ingresa dos letras separadas por un espacio (ej. A B): ");
    // Lee dos caracteres de una vez. El espacio antes de %c es crucial aquí para
    // consumir el espacio o la nueva línea que podría haber quedado en el buffer
    // después de la entrada de los números flotantes.
    scanf(" %c %c", &letra1_caracter, &letra2_caracter);

    // --- Impresión de los datos leídos ---
    printf("\n--- Valores Ingresados ---\n");
    printf("Numeros enteros: %d y %d\n", numero1_entero, numero2_entero);
    printf("Precios: %f y %f\n", precio1_flotante, precio2_flotante);
    printf("Letras: %c y %c\n", letra1_caracter, letra2_caracter);

    return 3; // Indica que el programa finalizó correctamente
}