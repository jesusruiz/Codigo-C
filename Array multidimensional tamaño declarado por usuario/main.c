#include <stdio.h>
#include <stdlib.h>

/*
Un compilador compatible con C11 no tiene que implementar soporte para arrays de longitud variable porque es una característica opcional. 
Si no es así, el símbolo __STDC_NO_VLA__ debe definirse como 1. 
Puede verificar la compatibilidad con matrices de longitud variable utilizando este código:
*/
#ifdef __STDC_NO_VLA__
printf("Los arrays de longitud variable no son compatibles.\n");
exit(1);
#endif

int main()
{
    size_t filas = 0;
    size_t columnas = 0;

    printf("Introduzca el numero de filas que desea almacenar: ");
    scanf("%zd",&filas);
    printf("Introduzca el numero de columnas que desea almacenar: ");
    scanf("%zd",&columnas);

    float numeros[filas][columnas];

    size_t numero_elementos = sizeof(numeros)/sizeof(numeros[0][0]);
    size_t numero_filas = sizeof(numeros)/sizeof(numeros[0]);
    size_t numero_columnas = sizeof(numeros[0])/sizeof(numeros[0][0]);

    printf("\nElementos del array: %zd",numero_elementos);
    printf("\nNumero de filas del array: %zd",numero_filas);
    printf("\nNumero de columnas del array: %zd",numero_columnas);
    printf("\nEl tama%co del array es de %zu bytes", 164, sizeof numeros);
    return 0;
}
