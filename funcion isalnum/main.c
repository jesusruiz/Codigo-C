#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  // Hay que incluir el archivo cabecera que incluye las macros

/*
Devuelve un valor distinto de 0 si la variable es alfanumerica
Devuelve un valor 0 si la variable no es alfanumerica

Un caracter alfanumérico es considerado: [a-z], [A-Z], [0-9]
*/
int main()
{
    char numero = '0';
    char numero2 = '2';
    char letra = 'A';
    char letra2 = 'z';
    char signo = '+';

    printf("isalnum() de %c devuelve: %d", numero, isalnum(numero));  //Devuelve 4
    printf("\nEl caracter %c es alfanumerico. Esto es %s", numero, isalnum(numero)? "TRUE" : "FALSE"); //Devuelve TRUE

    printf("\n\nisalnum() de %c devuelve: %d", numero2, isalnum(numero2));  //Devuelve 1
    printf("\nEl caracter %c es alfanumerico. Esto es %s", numero2, isalnum(numero2)? "TRUE" : "FALSE"); //Devuelve TRUE

    printf("\n\nisalnum() de %c devuelve: %d", letra, isalnum(letra));  //Devuelve 1
    printf("\nEl caracter %c es alfanumerico. Esto es %s", letra, isalnum(letra)? "TRUE" : "FALSE"); //Devuelve TRUE

    printf("\n\nisalnum() de %c devuelve: %d", letra2, isalnum(letra2));  //Devuelve 1
    printf("\nEl caracter %c es alfanumerico. Esto es %s", letra2, isalnum(letra2)? "TRUE" : "FALSE"); //Devuelve TRUE

    printf("\n\nisalnum() de %c devuelve: %d", signo, isalnum(signo));  //Devuelve 0
    printf("\nEl caracter %c no es alfanumerico. Esto es %s\n", signo, isalnum(signo)? "TRUE" : "FALSE"); //Devuelve FALSE

    return 0;
}
