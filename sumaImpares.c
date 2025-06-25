// Esta línea incluye la biblioteca estándar de entrada y salida (Standard Input/Output).
// Es necesaria para poder utilizar funciones como printf() para mostrar texto en pantalla
// y scanf() para leer datos ingresados por el usuario.
#include <stdio.h>

// La función 'main' es el punto de entrada de cualquier programa en C.
int main()
{
    // ---- DECLARACIÓN DE VARIABLES ----
    // Aquí declaramos e inicializamos las variables que usaremos en nuestro programa.

    // 'suma' es una variable que acumulará el total de la suma de los números impares. Se inicializa en 0.
    // 'contador' es una variable que usaremos como iterador. Irá aumentando de uno en uno. Se inicializa en 0.
    // 'residuo' guardará el resto de la división del contador entre 2.
    // 'max' almacenará el número límite hasta el cual el programa operará.
    int suma = 0, contador = 0, residuo, max;

    // ---- ENTRADA DE DATOS ----
    // Solicitamos al usuario que defina el límite para la búsqueda y suma.

    // Muestra un mensaje en la pantalla pidiendo al usuario un dato.
    printf("Ingrese el limite: ");
    // Lee un número entero ('%d') que el usuario escriba por teclado
    // y lo guarda en la variable 'max'.
    scanf("%d", &max);

    // ---- BUCLE O CICLO WHILE ----
    // Este ciclo se repetirá mientras el valor de 'contador' sea menor o igual que el límite 'max'.
    // Su propósito es recorrer todos los números desde 0 hasta 'max'.
    while(contador <= max)
    {
        // ---- CÁLCULO DEL RESIDUO ----
        // Se calcula el residuo de dividir el valor actual del 'contador' entre 2.
        // Esto nos sirve para determinar si el número es impar.
        residuo = contador % 2;

        // ---- CONDICIONAL IF/ELSE ----
        // Esta estructura revisa si el número actual del contador es impar.

        // Comparamos si el valor de 'residuo' es exactamente igual a 1.
        // Si la condición se cumple, significa que 'contador' es un número impar.
        if(residuo == 1)
        {
            // Si el número es impar, se muestra en pantalla para indicar que se está sumando.
            // Se imprime el número ('%d') seguido de un signo de suma.
            printf("%d+", contador);
            // El valor del contador (que es impar) se añade a la variable 'suma'.
            suma = suma + contador;
        }
        // Si la condición del 'if' no se cumple.
        else
        {
            // Este bloque 'else' se ejecuta si el número no es impar (es par).
            // Como está vacío, el programa no hace nada en esos casos y simplemente continúa.
        }

        // ---- INCREMENTO DEL CONTADOR ----
        // Es fundamental actualizar la variable que controla el ciclo para evitar un bucle infinito.

        // Incrementamos el valor de 'contador' en 1 en cada repetición del bucle.
        // Así, en la siguiente vuelta del ciclo, se evaluará el siguiente número.
        contador = contador + 1;
    }

    // ---- IMPRESIÓN DEL RESULTADO FINAL ----
    // Una vez que el ciclo 'while' ha terminado, se muestra el resultado.

    // Imprime un salto de línea ('\n') para una mejor presentación, seguido del texto
    // y el valor final almacenado en la variable 'suma'.
    printf("\nLa suma de los numeros impares listados es: %d", suma);

    // Al salir del bucle 'while', la función 'main' termina y el programa finaliza.
    // El 'return 0' indica que el programa se ejecutó correctamente.
    return 0;
}