#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define __STDC_WANT_LIB_EXT1__ 1  //Activar versiones de funcionales opcionales  (scanf_s por ejemplo)
#define MAX_LENGTH 21  //Definir Longitud máxima de caracteres de los arrays

//Array Comparar cadenas introducidas por teclado
int main()
{
    char palabra1[MAX_LENGTH];  //Definición de array de 21 caracteres
    char palabra2[MAX_LENGTH];  //Definición de array de 21 caracteres

    printf("Introduce la primera palabra (maximo %d caracteres): ", MAX_LENGTH - 1);  //El array empieza en 0 por eso -1
    scanf("%s", &palabra1);  // Lee la primera palabra

    printf("Introduce la segunda palabra (maximo %d caracteres): ", MAX_LENGTH - 1);  //El array empieza en 0 por eso -1
    scanf("%s", &palabra2);  // Lee la primera palabra

    if (strcmp(palabra1,palabra2) == 0)
        printf("\nLas palabras introducidas son iguales");
    else
        printf("%s precede a %s\n",
                    (strcmp(palabra1, palabra2) < 0) ? palabra1 : palabra2,
                    (strcmp(palabra1, palabra2) < 0) ? palabra2 : palabra1);
    return 0;
}
