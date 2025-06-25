// Esta línea incluye la biblioteca estándar de entrada y salida (Standard Input/Output).
// Es necesaria para poder utilizar funciones como printf() para mostrar texto en pantalla
// y scanf() para leer datos ingresados por el usuario.
#include <stdio.h>

// La función 'main' es el punto de entrada de cualquier programa en C.
int main()
{
    // ---- DECLARACIÓN DE VARIABLES ----
    // Aquí declaramos las variables que usaremos en nuestro programa.

    // 'contador' es un iterador para el ciclo, nos ayudará a contar los alumnos. Se inicia en 1.
    // 'num' almacenará el número total de alumnos que ingrese el usuario.
    int contador=1, num;
    // 'suma' acumulará el total de las calificaciones. Se inicia en 0.
    // 'promedio' guardará el resultado final del cálculo del promedio.
    // 'calificacion' almacenará temporalmente la calificación de cada alumno.
    // Se usa 'float' (flotante) para poder manejar números con decimales.
    float suma=0, promedio, calificacion;

    // ---- ENTRADA DE DATOS INICIAL ----
    // Solicitamos al usuario la cantidad de alumnos para saber cuántas veces repetir el ciclo.
    
    printf("Ingrese el numero de alumnos: ");
    // Lee un número entero ('%d') y lo guarda en la variable 'num'.
    scanf("%d", &num);
    
    // ---- BUCLE O CICLO WHILE ----
    // Este ciclo se repetirá mientras 'contador' sea menor o igual que el número de alumnos 'num'.
    // Su propósito es pedir la calificación para cada uno de los alumnos.
    while(contador <= num)
    {
        // ---- ENTRADA DE DATOS DENTRO DEL CICLO ----
        // Pide la calificación de un alumno en específico, usando 'contador' para indicar cuál.
        printf("Ingrese la calificacion del alumno %d: ", contador);
        // Lee un número flotante ('%f') y lo guarda en la variable 'calificacion'.
        scanf("%f", &calificacion);
        
        // ---- ACUMULACIÓN DE LA SUMA ----
        // El valor de la calificación recién ingresada se suma al valor que ya tenía la variable 'suma'.
        suma = suma + calificacion;
        
        // ---- INCREMENTO DEL CONTADOR ----
        // Es fundamental actualizar la variable que controla el ciclo para evitar un bucle infinito.
        // Incrementamos 'contador' en 1 para pasar al siguiente alumno.
        contador = contador + 1;
    }
    
    // ---- CÁLCULO FINAL ----
    // Esta operación se realiza DESPUÉS de que el ciclo ha terminado.
    // Se calcula el promedio dividiendo la suma total de calificaciones entre el número de alumnos.
    promedio = suma / num;
    
    // ---- IMPRESIÓN DEL RESULTADO ----
    // Se muestra el resultado final del promedio del grupo.
    printf("El promedio del grupo es: %f", promedio);
    
    // La función 'main' termina y el programa finaliza.
    // 'return 0' indica que el programa se ejecutó sin errores.
    return 0;
}
