#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //Hay que añadir este archivo de cabecera para poder utilizar las funciones de cadena

//Función strncat : Concatenar cadenas (Unir cadenas) un número limitado de caracteres:
//  char *strncat(char *dest, const char *src, size_t n)

int main()
{
    char origen[50];
    char destino[50];

    strcpy(origen, "Esta es la cadena origen.");  //Copia "Esta es la cadena origen." al array origen
    strcpy(destino, "Esta es la cadena destino.");  //Copia "Esta es la cadena destino." al array destino

    strncat(destino, origen, 10); //Une los diez primeros caracteres de la cadena del array origen al array destino

    //se imprimirá: "La cadena final de destino una vez unida es Esta es la cadena destino.Esta es la."
    printf("La cadena final de destino una vez unida es %s", destino);
    return 0;
}
