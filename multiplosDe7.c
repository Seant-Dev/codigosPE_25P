// Esta línea incluye la biblioteca estándar de entrada y salida (Standard Input/Output).
// Es necesaria para poder utilizar funciones como printf() para mostrar texto en pantalla
// y scanf() para leer datos ingresados por el usuario.
#include <stdio.h>

// La función 'main' es el punto de entrada de cualquier programa en C.
int main()
{
    // ---- DECLARACIÓN DE VARIABLES ----
    // Aquí declaramos las variables que usaremos en nuestro programa.

    // 'contador' es una variable que usaremos como iterador. Irá aumentando de uno en uno
    // para revisar cada número desde 0 hasta el límite. Se inicializa en 0.
    int contador = 0;
    // 'residuo' guardará el resto de la división del contador entre 7.
    int residuo;
    // 'max' almacenará el número límite hasta el cual el programa buscará los múltiplos.
    int max;

    // ---- ENTRADA DE DATOS ----
    // Solicitamos al usuario que defina el límite para la búsqueda.

    // Muestra un mensaje en la pantalla pidiendo al usuario un dato.
    printf("Ingrese el limite: ");
    // Lee un número entero ('%d') que el usuario escriba por teclado
    // y lo guarda en la variable 'max'.
    scanf("%d", &max);

    // ---- BUCLE O CICLO WHILE ----
    // Este ciclo se repetirá mientras el valor de 'contador' sea menor que el límite 'max'.
    // Su propósito es recorrer todos los números desde 0 hasta 'max - 1'.
    while(contador <= max)
    {
        // ---- CÁLCULO DEL RESIDUO ----
        // Se calcula el residuo de dividir el valor actual del 'contador' entre 7.
        // Esto nos sirve para determinar si el número es un múltiplo de 7.
        residuo = contador % 7;

        // ---- CONDICIONAL IF/ELSE ----
        // Esta estructura revisa si el número actual del contador es un múltiplo de 7.

        // Comparamos si el valor de 'residuo' es exactamente igual a 0.
        // Si la condición se cumple, significa que 'contador' es un múltiplo de 7.
        if(residuo == 0)
        {
            // Si el número es múltiplo de 7, se imprime en pantalla.
            // Se imprime el número ('%d') seguido de una coma y un espacio para listarlos.
            printf("%d, ", contador);
        }
        // Si la condición del 'if' no se cumple.
        else
        {
            // Este bloque 'else' se ejecuta si el número no es múltiplo de 7.
            // Como está vacío, el programa no hace nada en esos casos y simplemente continúa.
        }

        // ---- INCREMENTO DEL CONTADOR ----
        // Es fundamental actualizar la variable que controla el ciclo para evitar un bucle infinito.

        // Incrementamos el valor de 'contador' en 1 en cada repetición del bucle.
        // Así, en la siguiente vuelta del ciclo, se evaluará el siguiente número.
        contador = contador + 1;
    }
    // Al salir del bucle 'while', la función 'main' termina y el programa finaliza.
    return 0;
}
