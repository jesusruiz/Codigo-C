#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tecla;

    printf("Pulse una tecla y luego Intro: ");
    scanf("%c",&tecla);

    switch (tecla)
    {
        case ' ': printf("Espacio");
        break;

        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            printf("Vocal");
            break;

        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            printf("Digito numerico");
            break;

        default: printf("Consonante");
        break;
    }
    return 0;
}
