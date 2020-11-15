#include <stdio.h>
#include <stdlib.h>

//Arrays multidimensionales
int main()
{
    //Array de 3 filas y 4 columnas  = 12 elementos
    int numeros[3][4] = {
                        { 0, 1, 2, 3 },  //valores de la primera fila
                        { 4, 5, 6, 7 },  //valores de la segunda fila
                        { 8, 9, 10, 11 }  //valores de la tercera fila
                        };

    size_t numero_elementos = sizeof(numeros)/sizeof(numeros[0][0]);
    size_t numero_filas = sizeof(numeros)/sizeof(numeros[0]);
    size_t numero_columnas = sizeof(numeros[0])/sizeof(numeros[0][0]);
    printf("Numero total de elementos del array: %zu\n", numero_elementos);
    printf("Numero total de filas del array: %zu\n", numero_filas);
    printf("Numero total de columnas del array: %zu\n\n", numero_columnas);

    for (unsigned int j = 0; j < sizeof(numeros)/sizeof(numeros[0]); ++j) {
            for (unsigned int k = 0; k < sizeof(numeros[0])/sizeof(numeros[0][0]); ++k) {
            printf("%d  ", numeros[j][k]);
            }
    }

    printf("\n\n");

    for (unsigned int contador = 0; contador < sizeof(numeros)/sizeof(numeros[0][0]); ++contador) {
            printf("%d  ", numeros[0][contador]);
    }

    printf("\n\n");

    for (unsigned int filas = 0; filas < 3; filas++) {
            for (unsigned int columnas = 0; columnas < 4; columnas++) {
            printf("%d  ", numeros[filas][columnas]);
            }
    }
    return 0;
}
