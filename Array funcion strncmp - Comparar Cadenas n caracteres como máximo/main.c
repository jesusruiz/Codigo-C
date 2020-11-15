#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //Hay que añadir este archivo de cabecera para poder utilizar las funciones de cadena

//Array funcion strncmp - Comparar Cadenas n caracteres como máximo   int strncmp(const char *str1, const char *str2, size_t n)

int main()
{
    char cadena1[50];
    char cadena2[50];

    strcpy(cadena1, "El coche es de color azul");
    strcpy(cadena2, "El coche es de color rojo");

    printf("%s  VS  %s\n", cadena1, cadena2);

    if (strncmp(cadena1, cadena2, 20) < 0) {
        printf("Los primeros 20 caracteres de la cadena1 son menores que los de la cadena2");
    }
    else if (strncmp(cadena1, cadena2, 20) > 0) {
        printf("Los primeros 20 caracteres de la cadena2 son menores que los de cadena1");
    }
    else if (strncmp(cadena1, cadena2, 20) == 0) {
        printf("Los primeros 20 caracteres de la cadena1 y de la cadena2 son iguales");
    }

    char cadena3[50];
    char cadena4[50];

    strcpy(cadena3, "abcdef");
    strcpy(cadena4, "ABCDEF");

    printf("\n\n%s  VS  %s\n", cadena3, cadena4);

    if (strncmp(cadena3, cadena4, 4) < 0) {
        printf("Los primeros 4 caracteres de la cadena3 son menores que los de la cadena4");
    }
    else if (strncmp(cadena3, cadena4, 4) > 0) {
        printf("Los primeros 4 caracteres de la cadena3 son menores que los de la cadena4");
    }
    else if (strncmp(cadena3, cadena4, 4) == 0) {
        printf("Los primeros 4 caracteres de la cadena3 y de la cadena4 son iguales");
    }
    return 0;
}
