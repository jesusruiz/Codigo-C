#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[4];

    for (unsigned int contador = 0; contador <= 3; contador++) {
        printf("Introduzca el numero del elemento %u de 4: ", contador + 1);
        scanf("%d",&numeros[contador]);
    }

    for (unsigned int contador = 0; contador <= 3; contador++) {
        printf("\nDireccion de memoria del elemento %u de 4: %p     Valor del elemento %u de 4: %d",
                contador + 1, &numeros[contador], contador + 1, numeros[contador]);
    }
    return 0;
}
