#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  // Hay que incluir el archivo cabecera que incluye las macros

/*
Devuelve un valor distinto de 1 si la variable es un digito.
Devuelve un valor 0 si la variable no es un digito.
*/
int main()
{
    int numero = 2;
    char numeroEnLetra = '0';
    char letra = 'A';

    printf("isdigit() de %d devuelve: %d", numero, isdigit(numero));  //Devuelve 1
    printf("\nEl entero %d no es un caracter digito. Esto es %s", numero, isdigit(numero)? "TRUE" : "FALSE"); //Devuelve TRUE

    printf("\n\nisdigit() de %c devuelve: %d", numeroEnLetra, isdigit(numeroEnLetra));  //Devuelve 1
    printf("\nEl caracter %c es un caracter digito. Esto es %s", numeroEnLetra, isdigit(numeroEnLetra)? "TRUE" : "FALSE"); //Devuelve TRUE

    printf("\n\nisdigit() de %c devuelve: %d", letra, isdigit(letra));  //Devuelve 0
    printf("\nEl caracter %c no es un caracter digito. Esto es %s\n", letra, isdigit(letra)? "TRUE" : "FALSE"); //Devuelve FALSE

    return 0;
}
