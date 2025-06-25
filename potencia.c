// Esta línea incluye la biblioteca estándar de entrada y salida (Standard Input/Output).
// Es necesaria para poder utilizar funciones como printf() para mostrar texto en pantalla
// y scanf() para leer datos ingresados por el usuario.
#include <stdio.h>

// La función 'main' es el punto de entrada de cualquier programa en C.
int main()
{
    // ---- DECLARACIÓN DE VARIABLES ----
    // Aquí declaramos las variables que usaremos en nuestro programa.

    // 'base' almacenará el número que se va a multiplicar.
    int base;
    // 'potencia' almacenará el número de veces que la base se multiplicará por sí misma.
    int potencia;
    // 'calculo' guardará el resultado de la operación. Se inicializa en 1, que es el
    // elemento neutro de la multiplicación. Esto también asegura que si la potencia es 0, el resultado sea 1.
    int calculo = 1;
    // 'contador' es un iterador para controlar cuántas veces se ha ejecutado el bucle. Se inicializa en 0.
    int contador = 0;

    // ---- ENTRADA DE DATOS ----
    // Solicitamos al usuario que ingrese la base y la potencia.

    // Pide al usuario que ingrese el valor de la base.
    printf("Ingrese el valor de la base: ");
    // Lee el número entero ('%d') ingresado y lo guarda en la variable 'base'.
    scanf("%d", &base);

    // Pide al usuario que ingrese el valor de la potencia.
    printf("Ingrese el valor de la potencia: ");
    // Lee el número entero ('%d') ingresado y lo guarda en la variable 'potencia'.
    scanf("%d", &potencia);

    // ---- BUCLE O CICLO WHILE ----
    // Este ciclo se repetirá mientras el 'contador' sea menor que la 'potencia'.
    // Su propósito es multiplicar la 'base' por sí misma, la cantidad de veces que indique la 'potencia'.
    while(contador < potencia)
    {
        // ---- CÁLCULO DE LA POTENCIA ----
        // En cada repetición, se actualiza el valor de la variable 'calculo'.
        // Se multiplica el valor que ya tenía 'calculo' por la 'base'.
        // Ejemplo (si base=2 y potencia=3):
        // 1. calculo = 1 * 2  (calculo vale 2)
        // 2. calculo = 2 * 2  (calculo vale 4)
        // 3. calculo = 4 * 2  (calculo vale 8)
        calculo = calculo * base;

        // ---- INCREMENTO DEL CONTADOR ----
        // Es fundamental actualizar la variable que controla el ciclo para evitar un bucle infinito.
        // Incrementamos el 'contador' en 1 para llevar la cuenta de cuántas multiplicaciones se han hecho.
        contador = contador + 1;
    }

    // ---- IMPRESIÓN DEL RESULTADO ----
    // Cuando el ciclo termina, se muestra el resultado final.
    // Imprime la base, la potencia y el resultado del cálculo.
    printf("El numero %d elevado a la potencia %d es: %d", base, potencia, calculo);

    // La función 'main' termina y el programa finaliza.
    // 'return 0' indica que el programa se ejecutó correctamente.
    return 0;
}
