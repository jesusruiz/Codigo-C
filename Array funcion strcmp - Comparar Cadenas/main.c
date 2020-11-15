#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //Hay que incluir este archivo de cabecera para poder utilizar las funciones de cadena

//Función strcmp()  Comparar Cadenas   -   int strcmp(const char *str1, const char *str2)
/*
    if Retorna un valor < 0 indica que cadena1 es menor que cadena2.
    if Retorna un valor > 0 indica que cadena2 es menor que cadena1.
    if Retorna un valor = 0 indica que cadena1 es igual que cadena2.
*/

int main()
{
    char cadena1[] = "abcdef";
    char cadena2[] = "ABCDEF";

    printf("%s  VS  %s\n", cadena1, cadena2);
    if (strcmp(cadena1,cadena2) < 0) {
        printf("La cadena 1 es menor que la cadena 2");
    }
    else if (strcmp(cadena1,cadena2) > 0) {
        printf("La cadena 1 es mayor que la cadena 2");
    }
    else {
        printf("La cadena 1 y la cadena 2 son iguales");
    }

    char cadena3[] = "El coche es azul";
    char cadena4[] = "El coche es rojo";

    printf("\n\n%s  VS  %s\n", cadena3, cadena3);

    if (strcmp(cadena3,cadena4) < 0) {
        printf("La cadena 3 es menor que la cadena 4");
    }
    else if (strcmp(cadena3,cadena4) > 0) {
        printf("La cadena 3 es mayor que la cadena 4");
    }
    else {
        printf("La cadena 3 y la cadena 4 son iguales");
    }

    return 0;
}
