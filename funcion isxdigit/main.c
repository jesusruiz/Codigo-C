#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  // Hay que incluir el archivo cabecera que incluye las macros

/*
Devuelve un valor 128 si la variable es un caracter hexadecimal.
Devuelve un valor 0 si la variable no es un caracter hexadecimal.
*/
int main()
{
    char numero = '2';
    char numeroEnLetra = '0';
    char letra = 'A';
    char letra2 = 'X';

    printf("isxdigit() de %c devuelve: %d", numero, isxdigit(numero));  //Devuelve 128
    printf("\nEl caracter %c es un caracter hexadecimal. Esto es %s", numero, isxdigit(numero)? "TRUE" : "FALSE"); //Devuelve TRUE

    printf("\n\nisxdigit() de %c devuelve: %d", numeroEnLetra, isxdigit(numeroEnLetra));  //Devuelve 128
    printf("\nEl caracter %c es un caracter hexadecimal. Esto es %s", numeroEnLetra, isxdigit(numeroEnLetra)? "TRUE" : "FALSE"); //Devuelve TRUE

    printf("\n\nisxdigit() de %c devuelve: %d", letra, isxdigit(letra));  //Devuelve 128
    printf("\nEl caracter %c es un caracter hexadecimal. Esto es %s\n", letra, isxdigit(letra)? "TRUE" : "FALSE"); //Devuelve TRUE

    printf("\n\nisxdigit() de %c devuelve: %d", letra2, isxdigit(letra2));  //Devuelve 0
    printf("\nEl caracter %c no es un caracter hexadecimal. Esto es %s\n\n", letra2, isxdigit(letra2)? "TRUE" : "FALSE"); //Devuelve FALSE

    return 0;
}

