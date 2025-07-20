#include <stdio.h>
int pot(int base, int exponente);

int main()
{
    int N, i = 1, sumatoria = 0, resultado;
    printf("Ingrese el valor de N (Limite se sumatoria): ");
    scanf("%d", &N);
    while (i <= N)
    {
        resultado = pot(N+3, i);
        sumatoria = sumatoria + resultado;
        i = i + 1;
    }
    printf("El resultado de la sumatoria es: %d\n", sumatoria);
    return 0;
}

int pot(int base, int exponente)
{
    int contador = 1;
    int res = 1;
    while (contador <= exponente)
    {
        res = res * base;
        contador = contador + 1;
    }
    return res;
}