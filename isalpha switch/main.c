#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;

    //hacer mientras lo introducido por teclado sea distinto de una letra
    do {
    printf("Pulse una tecla y presione Intro: ");
    scanf(" %c",&letra);
    }
    while (!isalpha(letra)); //mientras no sea una letra no sale de este bucle do - while

    //convertimos lo introducido a minuscula para no tener que hacer tantas comprobaciones
    switch (tolower(letra)) {

        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("Se introdujo una vocal");
            break;

        default:
            printf("Se introdujo una consonante");
            break;
    }
    return 0;
}
