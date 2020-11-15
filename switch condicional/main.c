#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tecla;

    printf("Pulse una tecla y luego Intro: ");
    scanf("%c",&tecla);

    switch (tecla)
    {
        case ' ': printf("Espacio.");
        break;

        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '0': printf("Digito numerico");
        break;

        default: printf("Ni espacio ni digito");
    }
    return 0;
}
