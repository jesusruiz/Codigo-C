#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Cuando se pasa un carácter como argumento,
//se pasa el valor ASCII correspondiente (entero) del carácter en lugar de ese carácter en sí.
int main()
{
    char caracter;
    int resultado;

    printf("Pulse una tecla y luego INTRO: ");
    scanf("%c",&caracter);

    if (isalnum(caracter)) {
        printf("Introdujo un valor alfanumerico ([a-z], [A-Z], [0-9])");
    }
    else {
        printf("Introdujo un valor no alfanumerico");
    }

    return 0;
}
