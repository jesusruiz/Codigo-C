#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracter = 'A';

    printf("La letra declarada en el codigo de mi programa es la %c",caracter);
    printf("\nEl codigo ASCII de la letra %c es %d",caracter,caracter);

    char caracterUsuario;
    printf("\n\nPulse una tecla y presione Intro: ");
    scanf("%c",&caracterUsuario);  //lee un caracter
    printf("La tecla pulsada ha sido: %c",caracterUsuario);

    return 0;
}
