#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaraci�n de variables
    int total_mascotas;
    int gatos;
    int perros;
    int patos;
    int hamsters;

    //incializaci�n de variables
    gatos = 2;
    perros = 3;
    patos = 5;
    hamsters = 10;

    total_mascotas = gatos + perros + patos + hamsters;

    printf("El numero total de mascotas que tenemos es %d", total_mascotas);
    return 0;
}
