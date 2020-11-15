#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Introduzca un numero: ");
    scanf("%d",&numero);

    numero = (numero >= 0) ? printf("El valor absoluto del numero es: %d", numero) :
        printf("El valor absoluto del numero es: %d", abs(numero));
    return 0;
}
