#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  // Hay que incluir el archivo cabecera que incluye las macros

/*
Devuelve un valor 1 si la variable es un caracter alfabetico en mayuscula
Devuelve un valor 0 si la variable no es un caracter alfabetico mayuscula

Un caracter alfabetico mayuscula es considerado: [A-Z]
*/
int main()
{
    char numero = '0';
    char letra = 'A';
    char letra2 = 'z';
    char signo = '+';

    printf("isupper() de %c devuelve: %d", numero, isupper(numero));  //Devuelve 0
    printf("\nEl caracter %c no es alfabetico. Esto es %s", numero, isupper(numero)? "TRUE" : "FALSE"); //Devuelve FALSE

    printf("\n\nisupper() de %c devuelve: %d", letra, isupper(letra));  //Devuelve 1
    printf("\nEl caracter %c es alfabetico y mayuscula. Esto es %s", letra, isupper(letra)? "TRUE" : "FALSE"); //Devuelve TRUE

    printf("\n\nisuper() de %c devuelve: %d", letra2, isupper(letra2));  //Devuelve 2
    printf("\nEl caracter %c es alfabetico pero minuscula. Esto es %s", letra2, isupper(letra2)? "TRUE" : "FALSE"); //Devuelve FALSE

    printf("\n\nisuper() de %c devuelve: %d", signo, isupper(signo));  //Devuelve 0
    printf("\nEl caracter %c no es alfabetico. Esto es %s\n", signo, isupper(signo)? "TRUE" : "FALSE"); //Devuelve FALSE

    return 0;
}
