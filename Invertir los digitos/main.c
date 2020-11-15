#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int numero = 0;  //numero a invertir
    unsigned int numeroInvertido = 0;  //numero invertido
    unsigned int temporal = 0;  //variable temporal

    //Leer el valor del numero a ser invertido
    printf("Introduzca numero a invertir: ");
    scanf(" %u", &numero);

    temporal = numero;  //almaceno el numero a invertir en la variable temporal

    //Revertir el numero almacenado en la variable temporal
    do {
        numeroInvertido = 10*numeroInvertido + temporal % 10;  //Añadir el digito más a la derecha de temporal a numeroInvertido
        temporal = temporal/10;  //y elimina este de la variable temporal
    }
    while(temporal);  //mientras temporal sea distinto de 0

    printf("\nEl numero invertido de %u es %u", numero, numeroInvertido);

    return 0;
}
