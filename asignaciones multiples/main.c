#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short a = 10;
    unsigned short b = 9;
    unsigned short c = 72;

    printf("Valor de a: %d\nValor de b: %d\nValor de c: %d\n",a,b,c);

    a = b = c = 2;  //asignación múltiple

    printf("\nAhora los valores son los siguientes:\nValor de a: %d\nValor de b: %d\nValor de c: %d\n",a,b,c);
    return 0;
}
