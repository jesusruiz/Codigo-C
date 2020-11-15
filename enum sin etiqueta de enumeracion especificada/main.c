#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum {rojo, verde, azul, amarillo, violeta} colorCamiseta;

    colorCamiseta = rojo;

    printf("Color seleccionado de la enumeracion: %u", colorCamiseta);  //Color seleccionado de la enumeracion: 0 (rojo)
    return 0;
}
