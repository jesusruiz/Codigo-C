#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dividendo;
    int divisor;
    int cociente;
    int resto;

    printf("Introduzca el dividendo: ");
    scanf("%d",&dividendo);
    printf("Introduzca divisor: ");
    scanf("%d",&divisor);

    cociente = dividendo/divisor;
    resto = dividendo%divisor;

    printf("\nEl cociente de la division %d entre %d es: %d",dividendo,divisor,cociente);
    printf("\nEl resto de la division %d entre %d es: %d",dividendo,divisor,resto);

    return 0;
}
