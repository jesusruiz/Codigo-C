#include <stdio.h>
#include <stdlib.h>

#define __STDC_WANT_LIB_EXT1__ 1 //Activar (1) o Desactivar (0) las versiones opcionales de funciones
#include <string.h> //Archivo cabecera para funciones de cadena

//Comprobación de compatibilidad con C11
int main()
{
    #if defined __STDC_LIB_EXT1__
    printf("Las funciones opcionales estan definidas.\n");
    #else
    printf("Las funciones opcionales no estan definidas\n");
    #endif

    //Prueba de código
    char origen[] = "Solo los mediocres estan siempre en su mejor momento.";
    char destino[50];

//    strcpy(destino,origen);
//    printf("%s",destino);

    if (strcpy_s(destino, sizeof(destino), origen))
    printf("Se produjo un error al copiar la cadena.\n");

    return 0;
}
