#include <stdio.h>
#include <stdlib.h>


/* La salida por pantalla de estos programas son en sistema decimal */
int main()
{
    int primerNumero;
    int segundoNumero;
    int tercerNumero;

    primerNumero = 15;   /*Decimal*/
    segundoNumero = 015; /*Octal*/
    tercerNumero = 0x15;  /*Hexadecimal*/

    printf("El primero numero es: %d\n", primerNumero);  /*salida de 15*/
    printf("El segundo numero es: %d\n", segundoNumero);  /*salida de 13*/
    printf("El tercer numero es: %d", tercerNumero);  /*salida de 21*/
    return 0;
}
