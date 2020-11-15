#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 25;  //Declaraci�n de variable entera de tipo entero
    int *puntero;  //Declaraci�n de variable puntero de tipo entero
    puntero = &numero;  //Asignaci�n de la direcci�n memoria de numero

    printf("El valor de la variable 'numero' es: %d", numero);
    printf("\nLa direccion de memoria de la variable 'puntero' es: %p", puntero); //valor hexadecimal de la posici�n en memoria
    //tambi�n podr�amos imprimir el mismo valor de la direcci�n de la siguiente forma:
    printf("\nLa direccion de memoria de la variable 'puntero' es: %p", &numero);

    return 0;
}
