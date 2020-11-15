#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int numero;

    do {
    printf("Introduzca un numero entre 0 y %u: ", UINT_MAX);
    scanf("%d",&numero);
    }
    while ((numero < 0) && (numero < UINT_MAX));


    if (numero%2 == 0) {
        printf("El numero introducido es par");
    }
    else {
        printf("El numero introducido es impar");
    }
    return 0;
}
