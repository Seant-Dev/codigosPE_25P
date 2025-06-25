// Esta línea incluye la biblioteca estándar de entrada y salida (Standard Input/Output).
// Es necesaria para poder utilizar funciones como printf() para mostrar texto en pantalla
// y scanf() para leer datos ingresados por el usuario.
#include <stdio.h>

// La función 'main' es el punto de entrada de cualquier programa en C.
int main()
{
    // ---- DECLARACIÓN DE VARIABLES ----
    // Aquí declaramos e inicializamos las variables que usaremos en nuestro programa.

    // 'factorial' almacenará el resultado del cálculo. Se inicializa en 1,
    // porque cualquier número multiplicado por 1 da como resultado el mismo número.
    // Es el elemento neutro de la multiplicación.
    int factorial=1;
    // 'num' guardará el número ingresado por el usuario, del cual se calculará el factorial.
    int num;
    // 'contador' es una variable que usaremos como iterador en el ciclo. Se inicializa en 1,
    // ya que el factorial comienza a multiplicarse desde el 1 (ej: 5! = 1 * 2 * 3 * 4 * 5).
    int contador=1;

    // ---- ENTRADA DE DATOS ----
    // Solicitamos al usuario el número para el cálculo.

    // Muestra un mensaje en la pantalla pidiendo al usuario el número.
    printf("Ingrese el numero para calcular su factorial: ");
    // Lee un número entero ('%d') que el usuario escriba por teclado
    // y lo guarda en la variable 'num'.
    scanf("%d", &num);

    // ---- BUCLE O CICLO WHILE ----
    // Este ciclo se repetirá mientras 'contador' sea menor o igual que el número ingresado.
    // Su propósito es multiplicar secuencialmente todos los números desde 1 hasta 'num'.
    while(contador <= num)
    {
        // ---- CÁLCULO DEL FACTORIAL ----
        // En cada repetición, se actualiza el valor de la variable 'factorial'.
        // Se multiplica el valor que ya tenía 'factorial' por el valor actual del 'contador'.
        // Ejemplo (si num=4):
        // 1. factorial = 1 * 1  (factorial vale 1)
        // 2. factorial = 1 * 2  (factorial vale 2)
        // 3. factorial = 2 * 3  (factorial vale 6)
        // 4. factorial = 6 * 4  (factorial vale 24)
        factorial = factorial * contador;

        // ---- INCREMENTO DEL CONTADOR ----
        // Es fundamental actualizar la variable que controla el ciclo para evitar un bucle infinito.
        // Incrementamos el 'contador' en 1 para que en la siguiente vuelta se multiplique por el siguiente número.
        contador = contador + 1;
    }

    // ---- IMPRESIÓN DEL RESULTADO ----
    // Una vez que el ciclo ha terminado, se muestra el resultado final.
    // Imprime el número original ('%d') y su factorial calculado ('%d').
    printf("EL factorial de %d es: %d", num, factorial);

    // La función 'main' termina y el programa finaliza.
    // El 'return 0' indica que el programa se ejecutó sin errores.
    return 0;
}
