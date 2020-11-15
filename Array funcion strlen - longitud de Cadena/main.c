#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //Hay que incluir este archivo de cabecera para poder utilizar las funciones de cadena

//Función de cadena strlen() - Devuelve la longitud de la cadena
int main()
{
    char cadena[50];
    int longitudCadena;

    strcpy(cadena, "Copia esta cadena en el array cadena");
    longitudCadena = strlen(cadena);

    printf("La cadena \"%s\" tiene %d caracteres", cadena, longitudCadena);
    return 0;
}
