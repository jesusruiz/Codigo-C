#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Recorrer array de cadena e imprimirlo
int main()
{
    char cadena[20];
    unsigned int numeroCaracteres = 0;

    strcpy(cadena, "Esto es una cadena");

    for (unsigned int contador = 0; contador < strlen(cadena); contador++) {
        printf("%c", cadena[contador]);
        numeroCaracteres++;
    }

    printf("\nNumero de caracteres imprimidos: %u", numeroCaracteres);

    return 0;
}
