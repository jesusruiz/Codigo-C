#include <stdio.h>
#include <stdlib.h>

int main()
{
    float gradosCentigrados;
    float farenheit;

    printf("Introduzca los grados centigrados: ");
    scanf("%f", &gradosCentigrados);

    farenheit = (gradosCentigrados * 1.8) + 32;  //formula conversi�n grados centigrados a farenheit

    printf("\n%.f%cC son %.f%cF", gradosCentigrados, 248, farenheit, 248);  //248 es el c�digo del caracter especial �

    return 0;
}
