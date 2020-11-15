#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primerNumero;
    int segundoNumero;
    int tercerNumero;
    int cuartoNumero;

    //Declaración de números enteros en sistema octal
    primerNumero = 0167;
    segundoNumero = 076;
    tercerNumero = 0241;
    cuartoNumero = 0102;

    //impresión de los numeros enteros en sistema octal en decimal
    printf("El primer numero es: %d\n", primerNumero);  /*salida 119*/
    printf("El segundo numero es: %d\n", segundoNumero);  /*salida 62*/
    printf("El tercer numero es: %d\n", tercerNumero);  /*salida 161*/
    printf("El cuarto numero es: %d\n", cuartoNumero);  /*salida 66*/
    return 0;
}
