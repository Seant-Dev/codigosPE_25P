// Incluimos la librería de entrada y salida estándar para poder usar funciones como printf y scanf.
#include <stdio.h>

int main() // La función 'main' es el punto de inicio de ejecución de cualquier programa en C.
{
	// Declaramos una matriz (un arreglo de dos dimensiones) llamada 'C'.
	// Será de 3x3 y almacenará números de tipo 'float' (números con decimales).
	float C[3][3];

	// Declaramos dos variables de tipo entero que usaremos como contadores
	// o índices para recorrer la matriz. 'renglon' para las filas y 'columna' para las columnas.
	int renglon, columna;

	// ----- CICLO PARA LLENAR LA MATRIZ -----
	// Este primer 'for' recorrerá los renglones de la matriz, desde el renglón 0 hasta el 2.
	for(renglon = 0; renglon < 3; renglon = renglon + 1)
	{
		// Este 'for' anidado recorrerá las columnas para cada renglón, desde la columna 0 hasta la 2.
		for(columna = 0; columna < 3; columna = columna + 1)
		{
			// 1. PEDIR EL DATO
			// Mostramos un mensaje en pantalla para pedirle al usuario que ingrese un valor.
			printf("Dame un valor: ");

			// 2. LEER Y GUARDAR EL DATO
			// Usamos 'scanf' para leer el número que el usuario escriba y lo guardamos
			// en la posición actual de la matriz, indicada por [renglon][columna].
			// El '&' es necesario para pasar la dirección de memoria de la variable.
			scanf("%f", &C[renglon][columna]);

			// 3. CONFIRMAR EL DATO GUARDADO
			// Mostramos en pantalla el renglón y la columna que se acaban de llenar.
			printf("El renglon es %d la columna es %d ", renglon, columna);
			// Mostramos el dato que fue guardado en esa posición para que el usuario lo verifique.
			printf("El dato es: %f \n", C[renglon][columna]);
		}
	}

	// 'return 0' indica que el programa terminó su ejecución de manera exitosa.
	return 0;
}