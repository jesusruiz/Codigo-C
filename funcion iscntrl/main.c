#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  // Hay que incluir el archivo cabecera que incluye las macros

/*
Los caracteres que no se pueden imprimir en la pantalla se conocen como caracteres de control.
Por ejemplo, retroceso (borrado), escape, nueva línea, etc.

Devuelve un valor distinto de 0 si la variable es un caracter de control.
Devuelve un valor 0 si la variable no es un caracter de control.

El carácter de borrado (0x7F) o un carácter de control ordinario entre 0x00 y 0x1F.
*/
int main()
{
    char numero = '0';
    char letra = 'A';
    char letra2 = 'z';
    char signo = '+';
    char caracterControl = '\n';  //caracter de control de nueva línea

    printf("iscntrl() de %c devuelve: %d", numero, iscntrl(numero));  //Devuelve 0
    printf("\nEl caracter %c no es un caracter de control. Esto es %s", numero, iscntrl(numero)? "TRUE" : "FALSE"); //Devuelve FALSE

    printf("\n\niscntrl() de %c devuelve: %d", letra, iscntrl(letra));  //Devuelve 0
    printf("\nEl caracter %c no es un caracter de control. Esto es %s", letra, iscntrl(letra)? "TRUE" : "FALSE"); //Devuelve FALSE

    printf("\n\niscntrl() de %c devuelve: %d", letra2, iscntrl(letra2));  //Devuelve 0
    printf("\nEl caracter %c no es un caracter de control. Esto es %s", letra2, iscntrl(letra2)? "TRUE" : "FALSE"); //Devuelve FALSE

    printf("\n\niscntrl() de %c devuelve: %d", signo, iscntrl(signo));  //Devuelve 0
    printf("\nEl caracter %c no es un caracter de control. Esto es %s", signo, iscntrl(signo)? "TRUE" : "FALSE"); //Devuelve FALSE

    printf("\n\niscntrl() de %s devuelve: %d", "salto de linea", iscntrl(caracterControl));  //Devuelve 1
    printf("\nEl caracter %s es un caracter de control. Esto es %s\n", "salto de linea", iscntrl(caracterControl)? "TRUE" : "FALSE"); //Devuelve TRUE


    int i;
    printf("\n\nEl valor ASCII de todos los caracteres de control son ");
    for (i=0; i<=127; ++i)
    {
        if (iscntrl(i)!=0)  //Devuelve un valor distinto de 0 si la variable es un caracter de control.
            printf("%d ", i);
    }
    return 0;
}
