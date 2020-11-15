#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char letra = 0;

    printf("Introduzca una letra: ");
    scanf("%c",&letra);

    if ((letra >= 'A') && (letra <= 'Z'))
    {
        printf("Introdujo la letra mayuscula: %c", letra);
        printf("\nLa letra en minuscula es: %c", tolower(letra));
    }
    else {
        printf("Introdujo la letra minuscula: %c", letra);
        printf("\nLa letra en mayuscula es: %c", toupper(letra));
    }

    return 0;
}
