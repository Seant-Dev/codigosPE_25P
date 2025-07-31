#include <stdio.h> // Incluimos la librería de entrada y salida estándar.

int main() // Inicio de la función principal.
{
	// Declaramos tres matrices de 3x3 de tipo float.
	// 'C' y 'S' para guardar los valores del usuario, y 'sum' para el resultado.
	float C[3][3], S[3][3], sum[3][3];

	// Declaramos las variables que usaremos como contadores en los ciclos 'for'.
	// 'ren' y 'col' para llenar las matrices, 'x' y 'y' para la suma.
	// Se podrían usar las mismas variables, pero se usan distintas para mayor claridad.
	int ren, col, x, y;

	// ----- BLOQUE 1: LLENAR LA PRIMERA MATRIZ (C) -----
	printf("Ingrese los valores de la matriz C\n");
	// Ciclo para recorrer los renglones (filas).
	for(ren = 0; ren < 3; ren = ren + 1)
	{
		// Ciclo para recorrer las columnas.
		for(col = 0; col < 3; col = col + 1)
		{
			// Pedimos al usuario el valor para la posición específica [ren][col].
			printf("Ingrese valor [%d][%d]: ", ren, col);
			// Leemos el valor y lo guardamos en la matriz C en la posición correspondiente.
			scanf("%f", &C[ren][col]);
		}
	}

	// ----- BLOQUE 2: LLENAR LA SEGUNDA MATRIZ (S) -----
	printf("Ingrese los valores de la matriz S \n");
	// Estos ciclos funcionan igual que los anteriores, pero para la matriz S.
	for(ren = 0; ren < 3; ren = ren + 1)
	{
		for(col = 0; col < 3; col = col + 1)
		{
			printf("Ingrese valor [%d][%d]: ", ren, col);
			scanf("%f", &S[ren][col]);
		}
	}

	// ----- BLOQUE 3: CALCULAR Y MOSTRAR LA SUMA -----
	printf("Suma de las matrices C+S: \n");
	// Usamos los contadores 'x' para los renglones e 'y' para las columnas.
	for(x = 0; x < 3; x = x + 1)
	{
		for(y = 0; y < 3; y = y + 1)
		{
			// La operación clave: sumamos el elemento en la posición [x][y] de C
			// con el elemento en la misma posición [x][y] de S.
			// El resultado se guarda en la matriz 'sum' en la misma posición.
			sum[x][y] = C[x][y] + S[x][y];

			// Mostramos el resultado de la suma para esa posición específica.
			printf("suma [%d][%d]= %f ", x, y, sum[x][y]);
		}
		printf("\n");
	}

	// El programa termina exitosamente.
	return 0;
}