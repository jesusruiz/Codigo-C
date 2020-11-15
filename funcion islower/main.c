#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  // Hay que incluir el archivo cabecera que incluye las macros

/*
Devuelve un valor 2 si la variable es un caracter alfabetico en minuscula
Devuelve un valor 0 si la variable no es un caracter alfabetico minuscula

Un caracter alfabetico minuscula es considerado: [a-z]
*/
int main()
{
    char numero = '0';
    char letra = 'A';
    char letra2 = 'z';
    char signo = '+';

    printf("islower() de %c devuelve: %d", numero, islower(numero));  //Devuelve 0
    printf("\nEl caracter %c no es alfabetico. Esto es %s", numero, islower(numero)? "TRUE" : "FALSE"); //Devuelve FALSE

    printf("\n\nislower() de %c devuelve: %d", letra, islower(letra));  //Devuelve 1
    printf("\nEl caracter %c es alfabetico pero mayuscula. Esto es %s", letra, islower(letra)? "TRUE" : "FALSE"); //Devuelve FALSE

    printf("\n\nislower() de %c devuelve: %d", letra2, islower(letra2));  //Devuelve 2
    printf("\nEl caracter %c es alfabetico y minuscula. Esto es %s", letra2, islower(letra2)? "TRUE" : "FALSE"); //Devuelve TRUE

    printf("\n\nislower() de %c devuelve: %d", signo, islower(signo));  //Devuelve 0
    printf("\nEl caracter %c no es alfabetico. Esto es %s\n", signo, islower(signo)? "TRUE" : "FALSE"); //Devuelve FALSE

    return 0;
}
