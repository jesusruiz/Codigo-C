#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int numero1;
    unsigned int numero2;

    printf("Introduzca el primer numero: ");
    scanf("%d",&numero1);
    printf("Introduzca el segundo numero: ");
    scanf("%d",&numero2);

    if(numero1 > numero2) {
        printf("El primer numero introducido es mayor que el segundo: %d es mayor que %d",numero1,numero2);
    }
    else {
        printf("El segundo numero introducido es mayor que el primero: %d es mayor que %d",numero2,numero1);
    }
    return 0;
}
