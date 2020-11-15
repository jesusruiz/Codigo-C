#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int numero1, numero2;
    _Bool iguales;

    printf("Introduzca un numero: ");
    scanf("%d",&numero1);
    printf("Introduzca otro numero (puede ser igual que el anterior): ");
    scanf("%d",&numero2);

    iguales = (numero1 == numero2) ? 1 : 0;

    if (iguales == 1) {
        printf("Los numeros introducidos son iguales");
    }
    else {
        printf("Los numeros introducidos son distintos");
    }
    return 0;
}
