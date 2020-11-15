#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 5, num2 = 2;
    float division1, division2;

    printf("Mis numeros son: %u y %u", num1, num2);
    division1 = num1/num2;
    printf("\nY el resultado de dividir %u entre %u es: %f",num1,num2,division1);

    division2 = (float)num1/(float)num2;
    printf("\nPero si convierto los numeros anteriores antes de realizar la division a float obtengo: %f",division2);
}
