#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int contador = 1; contador < 11; contador++) {
         printf("%d ", contador);
    }

    printf("\n\n");

    //la tercera expresión de control dentro del bucle también puede ser  ++contador
    for (int contador = 1; contador < 11; ++contador) {
         printf("%d ", contador);
    }

    return 0;
}
