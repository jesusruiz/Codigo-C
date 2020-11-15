#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;

    printf("Introduzca el primer numero: ");
    scanf("%d", &numero1);
    printf("\Introduca el segundo numero: ");
    scanf("%d",&numero2);
    printf("La suma de %d y %d es: %d ",numero1,numero2,numero1+numero2);
    return 0;
}
