//Notaciones Indización y desplazamiento de punteros con arrays

#include <stdio.h>
#include <stdlib.h>
#define TAMANO_ARRAY 4

int main()
{
    int numeros[TAMANO_ARRAY] = { 10, 20, 30, 40 };
    int *numerosPtr = numeros;

    //Imprimir array 'numeros' con notación de indización
    puts("\Array 'numeros' impreso con:\n\nNotacion Array indizacion");

    //Bucle para recorrer el array 'numeros'
    for (size_t elementos = 0; elementos < TAMANO_ARRAY; ++elementos) {
        printf("numeros[%u] = %d\n", elementos, numeros[elementos]);
    }

    //Imprimir array 'numero' utilizando el nombre del array y notación puntero/desplazamiento
    puts("\nNotacion Puntero/desplazamiento donde\n"
    "el puntero es el nombre del array");

    //Bucle para recorrer el array 'numeros'
    for (size_t desplazamiento = 0; desplazamiento < TAMANO_ARRAY; ++desplazamiento) {
        printf("*(numeros + %u) = %d\n", desplazamiento, *(numeros + desplazamiento));
    }

    //Imprimir array 'numeros' utilizando el puntero 'numerosPtr' y la notación puntero indización
    puts("\nNotacion Puntero indizacion");

    for (size_t elementos = 0; elementos < TAMANO_ARRAY; ++elementos) {
        printf("numerosPtr[%u] = %d\n", elementos, numerosPtr[elementos]);
    }

    //Imprimir array 'numeros' utilizando 'numerosPtr' y la notación puntero/desplazamiento
    puts("\nNotacion Puntero desplazamiento");

    for (size_t desplazamiento = 0; desplazamiento < TAMANO_ARRAY; ++desplazamiento) {
        printf("*(numerosPtr + %u) = %d\n", desplazamiento, *(numerosPtr + desplazamiento));
    }
}
