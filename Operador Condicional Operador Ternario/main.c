#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2;
    int mayor;

    printf("Introduzca un numero: ");
    scanf("%d",&numero1);
    printf("Introduzca otro numero: ");
    scanf("%d",&numero2);

    mayor = (numero1 > numero2) ? numero1 : numero2;  //si numero1 es mayor que numero2 se almacena numero 1 en mayor, sino alreves
    printf("El mayor de los numeros introducidos es: %d", mayor);

    return 0;
}
