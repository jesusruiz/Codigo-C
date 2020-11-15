#include <stdio.h>
#include <stdlib.h>

//Función prototipo
void intercambioValores(int *xPtr, int *yPtr);

int main(void)
{
    int a = 1;
    int b = 2;

    puts("Valores originales:");
    printf("a vale %u", a);
    printf("\nb vale %u", b);

    intercambioValores(&a, &b);

    puts("\n");

    puts("Valores una vez intercambiados:");
    printf("a vale %u", a);
    printf("\nb vale %u", b);

    puts("\n");

    return 0;
}

//Función intercambioValores
void intercambioValores(int *xPtr, int *yPtr) {

    int z;

    z = *xPtr;
    *xPtr = *yPtr;
    *yPtr = z;
}
