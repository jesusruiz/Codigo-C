#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //Hay que incluir este archivo cabecera para trabajar con funciones de cadena

//Función strcpy() - char *strcpy(char *dest, const char *src)
int main()
{
    char origen[40];
    char destino[80];

    //La cadena "Copia esta cadena es copiada al array origen.
    strcpy(origen, "Copia esta cadena");
    //La cadena almacenada en el array origen es copiada al array destino
    strcpy(destino, origen);

    //En esta caso se imprime "Copia esta cadena"
    printf("%s",destino);
    return 0;
}
