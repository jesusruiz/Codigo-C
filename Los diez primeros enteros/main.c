#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int contador = 1; contador < 11; contador++) {
         printf("%d ", contador);
    }

    printf("\n\n");

    //la tercera expresi�n de control dentro del bucle tambi�n puede ser  ++contador
    for (int contador = 1; contador < 11; ++contador) {
         printf("%d ", contador);
    }

    return 0;
}
