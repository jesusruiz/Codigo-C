#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra1, letra2, letra3, letra4;

    printf("Introduzca la primera letra y pulse ENTER: ");
    scanf(" %c", &letra1);
    printf("Introduzca la segunda letra y pulse ENTER: ");
    scanf(" %c", &letra2);
    printf("Introduzca la tercera letra y pulse ENTER: ");
    scanf(" %c", &letra3);
    printf("Introduzca la cuarta letra y pulse ENTER: ");
    scanf(" %c", &letra4);

    printf("\nLas letras introducidas fueron: %c %c %c %c", letra1, letra2, letra3, letra4);
    printf("\nLas letras introducidas en orden inverso fueron: \"%c\" \"%c\" \"%c\" \"%c\"", letra4, letra3, letra2, letra1);

    return 0;
}
