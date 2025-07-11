#include <stdio.h> // Incluye la librería estándar de entrada y salida

int main() {
    // Declaración de variables
    int inicio_intervalo; // Variable para almacenar el número de inicio del conteo
    int fin_intervalo;    // Variable para almacenar el número de fin del conteo

    printf("¡Hola! Vamos a contar numeros dentro de un intervalo que tu definas.\n");

    // Solicita al usuario el número de inicio del intervalo
    printf("Por favor, ingresa el numero inicial para el conteo: ");
    scanf("%d", &inicio_intervalo); // Lee el número inicial

    // Solicita al usuario el número final del intervalo
    printf("Ahora, ingresa el numero final para el conteo: ");
    scanf("%d", &fin_intervalo); // Lee el número final

    // --- Validación del intervalo ---
    // Comprueba si el número de inicio es mayor o igual que el número de fin.
    // Si la condición es verdadera, el intervalo no es válido.
    if (inicio_intervalo >= fin_intervalo) {
        printf("Intervalo no valido. El numero inicial debe ser menor que el numero final.\n");
        return 0; // Termina el programa si el intervalo no es válido
    }

    printf("\nIniciando el conteo desde %d hasta %d...\n", inicio_intervalo, fin_intervalo);

    // Asignamos el valor inicial del contador a 'inicio_intervalo'
    // La variable 'contador_actual' es la que avanzará en el ciclo.
    int contador_actual = inicio_intervalo;

    // Inicio del ciclo while
    // El ciclo continuará ejecutándose mientras 'contador_actual' sea menor o igual
    // que el 'fin_intervalo' ingresado por el usuario.
    while (contador_actual <= fin_intervalo) {
        // Imprime el valor actual del contador
        printf("Contando: %d\n", contador_actual);

        // Incrementa el valor del contador en 1.
        // Esto es esencial para que 'contador_actual' eventualmente alcance
        // y supere a 'fin_intervalo', haciendo que la condición del ciclo
        // se vuelva falsa y este termine.
        contador_actual++;
    }

    // Mensaje que se muestra una vez que el ciclo ha terminado
    printf("¡El conteo ha finalizado!\n");

    return 0; // Indica que el programa finalizó correctamente
}