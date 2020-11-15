#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[5] = {1, 2, 3, 8, 20};
    int numeros2[4] = {1, 2};  //los elementos del array no inizializados se establecen a 0
    double valores[3] = {0.0};  //todos los elementos del array se inicializarán con el valor 0.0
    int primos[] = {2, 3, 5, 7, 11, 13, 17}; //en este caso el array será de 7 elementos

    for (unsigned int contador = 0; contador <= 4; ++contador) {
        printf("%d  ",numeros[contador]);
    }

    printf("\n\n");

    for (unsigned int contador = 0; contador <= 3; ++contador) {
        printf("%d  ",numeros2[contador]);
    }

    printf("\n\n");

    for (unsigned int contador = 0; contador <= 2; ++contador) {
        printf("%.1f  ",valores[contador]);
    }
    return 0;
}
