#include <stdio.h>
#include <stdlib.h>

int main()
{
    int factorial = 1;
    int numero;

    printf("Introduzca el numero del que desea calcular el factorial: ");
    scanf("%d",&numero);

    for (int contador = numero; contador >= 1; --contador) {
        factorial = factorial * contador;
    }
    printf("\nEl factorial de %d es %d",numero,factorial);
    return 0;
}
