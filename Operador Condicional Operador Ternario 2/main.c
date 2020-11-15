#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2, resultado;
    int operacion;

    printf("Introduzca un numero: ");
    scanf("%d",&numero1);
    printf("Introduzca otro numero: ");
    scanf("%d",&numero2);
    printf("Introduzca la operacion que desee realizar con los dos numeros introducidos (1 = suma; otro = resta): ");
    scanf("%d",&operacion);

    resultado = (operacion == 1) ? numero1 + numero2 : numero1 - numero2;
    printf("El resultado de la operacion es: %d", resultado);
    return 0;
}
