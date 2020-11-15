#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int numero1;
    int numero2;

    do {
        printf("Introduzca un numero: ", INT_MAX);
        scanf("%d", &numero1);
    }
    while ((numero1 < 0) && (numero1 > INT_MAX));

    do {
        printf("Introduzca otro numero: ", INT_MAX);
        scanf("%d", &numero2);
    }
    while ((numero2 < 0) && (numero2 > INT_MAX));

    if (numero1 > numero2) {
        printf("El primer numero introducido es mayor que el segundo: %d es mayor que %d.", numero1, numero2);
    }
    else if (numero2 > numero1) {
        printf("El segundo numero introducido es mayor que el primero: %d es mayor que %d.", numero2, numero1);
    }
    else {
        printf("Los numeros introducidos son iguales: %d es igual que %d.", numero1, numero2);
    }

    return 0;
}
