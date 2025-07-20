#include <stdio.h>
int busca_multiplo(int num);

int main()
{
    int num_actual = 0, N, multiplo;
    printf("Ingrese el valor de N (limite de busqueda): ");
    scanf("%d", &N);
    while(num_actual <= N)
    {
        multiplo = busca_multiplo(num_actual);
        
        num_actual = num_actual + 1;
    }
    printf("\nFin del programa");
    return 0;
}

int busca_multiplo(int num)
{
    if((num % 5 == 0) && (num % 7 == 0))
    {
        printf("El numero %d es multiplo de 5 y 7 simultaneamente.\n", num);
        return num;
    }
}