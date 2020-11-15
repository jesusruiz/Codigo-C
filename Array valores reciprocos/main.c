#include <stdio.h>
#include <stdlib.h>

//Valores reciprocos
//Para obtener el recíproco de un número, sólo divide 1 por el número.
int main()
{
    double numeros[4];  //Declaramos array de 5 elementos
    double valoresReciprocos[4];  //Declaramos array de 5 elementos para almacenar los valores reciprocos de los numeros introducidos

    for (unsigned int contador = 0; contador <= 4; ++contador) {
        printf("Introduzca el valor del elemento numero %u: ", contador + 1);
        scanf("%lf",&numeros[contador]);
        valoresReciprocos[contador] = 1.0/numeros[contador];
    }

    printf("\nNumeros Introducidos: ");
    for (unsigned int contador = 0; contador <= 4; ++contador) {
        printf("%.2f ", numeros[contador]);
    }

    printf("\nValores reciprocos de los Numeros Introducidos: ");
    for (unsigned int contador = 0; contador <= 4; ++contador) {
        printf("%.2f ", valoresReciprocos[contador]);
    }

    return 0;
}
