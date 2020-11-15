#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float numero1 = 2.0f;
    float numero2 = 4.0f;
    float numero3 = -10.0f;
    double x = 6.54321;

    printf("La raiz cuadrada de %.f es: %.f", numero2, sqrt(numero2));  //La raiz cuadrada de 4 es 2
    printf("\nEl resto de la division %.f entre %.f es: %.f", numero2, numero1, fmod(numero2,numero1));  //Resultado 0
    printf("\n%.f elevado a %.f es: %.f", numero1, numero2, pow(numero1,numero2));  //2 elevado a 4 es 16
    printf("\nEl valor absoluto de %.f es: %.f\nEl valor absoluto de %.f es: %.f",numero1,fabs(numero1),numero3,fabs(numero3));
    printf("\nEl logaritmo natural en base 10 de %.f es: %.f", 100.0, log10(100.0));
    printf("\nEl coseno de %.f es: %f", numero2, cos(numero2));
    printf("\nEl valor integral mas grande de %f es: %f", x, floor(x)); //Calcula el valor integral más grande que no sea mayor de x.
    printf("\nEl valor integral mas pequeño de %f es: %f", x, ceil(x)); //Calcula el valor integral más pequeño que no sea menor de x.
    return 0;
}
