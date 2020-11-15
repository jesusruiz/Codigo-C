#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //Hay que añadir este archivo de cabecera para poder utilizar las funciones de cadena

//Función strcat : Concatenar cadenas (Unir cadenas)  ->  char *strcat(char *dest, const char *src)
int main()
{
    char origen[50];
    char destino[50];
    char unionCadenasOrigenDestino[50];

    strcpy(origen, "Esta es la cadena origen.");  //Copia "Esta es la cadena origen." al array origen
    strcpy(destino, "Esta es la cadena destino.");  //Copia "Esta es la cadena destino." al array destino

    strcat(destino, origen); //Une la cadena del array origen al array destino

    //se imprimirá: "La cadena final de destino una vez unida es Esta es la cadena destino.Esta es la cadena origen."
    printf("La cadena final de destino una vez unida es %s", destino);
    return 0;
}
