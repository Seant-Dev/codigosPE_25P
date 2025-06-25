// Esta línea incluye la biblioteca estándar de entrada y salida (Standard Input/Output).
// Es necesaria para poder utilizar funciones como printf() para mostrar texto en pantalla
// y scanf() para leer datos ingresados por el usuario.
#include <stdio.h>

// La función 'main' es el punto de entrada de cualquier programa en C.
int main()
{
    // ---- DECLARACIÓN DE VARIABLES ----
    // Aquí declaramos las variables que usaremos en nuestro programa.

    // 'num' almacenará el número entero que el usuario ingrese en cada ciclo.
    int num;
    // 'contador' es una variable que usaremos para contar cuántos números hemos procesado.
    // La inicializamos en 0 porque aún no hemos procesado ninguno.
    int contador = 0;
    // 'residuo' guardará el resto de la división del número ingresado entre 2.
    int residuo;
    // 'max' almacenará la cantidad total de números que el usuario desea verificar.
    int max;

    // ---- ENTRADA DE DATOS ----
    // Solicitamos al usuario la cantidad de números que va a ingresar.
    
    // Muestra un mensaje en la pantalla pidiendo al usuario un dato.
    printf("Ingrese la cantidad de numeros a determinar: ");
    // Lee un número entero ('%d') que el usuario escriba por teclado
    // y lo guarda en la variable 'max'. El símbolo '&' es necesario para indicar
    scanf("%d", &max);

    // ---- BUCLE O CICLO WHILE ----
    // Este ciclo se repetirá mientras la condición (contador < max) sea verdadera.
    // Es decir, se ejecutará hasta que hayamos procesado la cantidad de números que el usuario especificó.
    while (contador < max)
    {
        // ---- CUERPO DEL BUCLE ----
        // Las siguientes instrucciones se ejecutarán en cada repetición del ciclo.

        // Pide al usuario que ingrese un número.
        printf("Ingrese un numero entero: ");
        // Lee el número entero ingresado y lo guarda en la variable 'num'.
        scanf("%d", &num);

        // ---- CÁLCULO DEL RESIDUO ----
        // El operador '%' (módulo) calcula el resto de una división.
        // Si un número es divisible exactamente entre 2, su residuo será 0 (es par).
        // Si no, el residuo será 1 (es impar).
        residuo = num % 2;

        // ---- CONDICIONAL IF/ELSE ----
        // Esta estructura nos permite decidir qué bloque de código ejecutar basándonos en una condición.

        // Comparamos si el valor de 'residuo' es exactamente igual a 0.
        // Se usa '==' para comparación, no '=' que es para asignación.
        if (residuo == 0)
        {
            // Si la condición es verdadera (el número es par), se ejecuta este bloque.
            // Imprime que el número es par.
            // '%d' es reemplazado por el valor de la variable 'num'.
            // '\n' es un salto de línea para que el siguiente mensaje aparezca debajo.
            printf("El numero %d es par. \n", num);
        }
        // Si la condición del 'if' no se cumple (es decir, residuo no es 0).
        else
        {
            // Se ejecuta este otro bloque de código.
            // Imprime que el número es impar.
            printf("El numero %d es impar. \n", num);
        }

        // ---- INCREMENTO DEL CONTADOR ----
        // Es fundamental actualizar la variable que controla el ciclo para evitar un bucle infinito.
        
        // Incrementamos el valor de 'contador' en 1.
        // Esto significa que ya hemos procesado un número más.
        contador = contador + 1;
    }
    
    // Al salir del bucle 'while', la función 'main' termina y el programa finaliza.
    return 0;
}