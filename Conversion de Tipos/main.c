#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entero = 2;

    printf("El valor de mi variable de tipo entero es: %d", entero);
    printf("\nSi convertimos el valor de mi variable de tipo entero a float la variable vale: %f", (float)entero);


    float puntoDecimal = 3.0;

    printf("\n\nEl valor de mi variable de tipo float es: %.1f", puntoDecimal);
    printf("\nSi convertimos el valor de mi variable de tipo float a entero la variable vale: %d", (int)puntoDecimal);
}
