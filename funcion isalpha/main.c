#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  // Hay que incluir el archivo cabecera que incluye las macros

/*
Devuelve un valor distinto de 0 si la variable es un caracter alfabetico: para mayusculas devuelve 1  para minusculas devuelve 2
Devuelve un valor 0 si la variable no es un caracter alfabetico

Un caracter alfabetico es considerado: [a-z], [A-Z]
*/
int main()
{
    char numero = '0';
    char letra = 'A';
    char letra2 = 'z';
    char signo = '+';

    printf("isalpha() de %c devuelve: %d", numero, isalpha(numero));  //Devuelve 0
    printf("\nEl caracter %c no es alfabetico. Esto es %s", numero, isalpha(numero)? "TRUE" : "FALSE"); //Devuelve FALSE

    printf("\n\nisalpha() de %c devuelve: %d", letra, isalpha(letra));  //Devuelve 1
    printf("\nEl caracter %c es alfabetico. Esto es %s", letra, isalpha(letra)? "TRUE" : "FALSE"); //Devuelve TRUE

    printf("\n\nisalpha() de %c devuelve: %d", letra2, isalpha(letra2));  //Devuelve 2
    printf("\nEl caracter %c es alfabetico. Esto es %s", letra2, isalpha(letra2)? "TRUE" : "FALSE"); //Devuelve TRUE

    printf("\n\nisalpha() de %c devuelve: %d", signo, isalpha(signo));  //Devuelve 0
    printf("\nEl caracter %c no es alfabetico. Esto es %s\n", signo, isalpha(signo)? "TRUE" : "FALSE"); //Devuelve FALSE

    return 0;
}
