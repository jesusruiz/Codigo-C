#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 25;  //Declaración de variable entera de tipo entero
    int *puntero;  //Declaración de variable puntero de tipo entero
    puntero = &numero;  //Asignación de la dirección memoria de numero

    printf("El valor de la variable 'numero' es: %d", numero);
    printf("\nLa direccion de memoria de la variable 'puntero' es: %p", puntero); //valor hexadecimal de la posición en memoria
    //también podríamos imprimir el mismo valor de la dirección de la siguiente forma:
    printf("\nLa direccion de memoria de la variable 'puntero' es: %p", &numero);

    return 0;
}
