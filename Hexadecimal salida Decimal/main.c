#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primerNumero;
    int segundoNumero;
    int tercerNumero;
    int cuartoNumero;

    //Declaración de números enteros en sistema hexadecimal
    primerNumero = 0x1B2;
    segundoNumero = 0x76;
    tercerNumero = 0xE1;
    cuartoNumero = 0x2A;

    //impresión de los numeros enteros en sistema hexadecimal en decimal
    printf("El primer numero es: %d\n", primerNumero);  /*salida 434*/
    printf("El segundo numero es: %d\n", segundoNumero);  /*salida 118*/
    printf("El tercer numero es: %d\n", tercerNumero);  /*salida 225*/
    printf("El cuarto numero es: %d\n", cuartoNumero);  /*salida 42*/
    return 0;
}
