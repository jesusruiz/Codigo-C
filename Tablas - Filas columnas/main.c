#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int tablas = 0;
    unsigned int filas = 0;
    unsigned int columnas = 0;

    printf("Introduzca el numero de tablas a mostrar: ");
    scanf("%u", &tablas);

    for (columnas = 0; columnas <= tablas; ++columnas) {
        if(filas == 0 && columnas == 0) {
            printf("        |");
        }
        else {
            printf("%8d|",columnas);
        }
    }
        printf("\n");

    for (filas = 1; filas <= tablas; ++filas) {
        for (columnas = 0; columnas <= tablas; ++columnas) {
                if (columnas == 0) {
                    printf("%8d|", filas);
                }
                else {
                printf("%8d|",columnas*filas);
                }
        }
        printf("\n");
    }
    return 0;
}
