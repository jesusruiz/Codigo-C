#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //Tenemos que incluir este archivo de cabecera para poder utilizar la funci�n strtok()

/*Funci�n strtok  -  Buscar caracteres delimitadores (token) en una cadena*/

int main()
{
    char cadena[] = "Hola,mundo";  //Cadena en la que buscar el caracter delimitador
    char delimitador[] = ",";  //El caracter delimitador (token) ser� una coma
    char *token = strtok(cadena, delimitador);

    //si se encuentra un caracter delimitador
    if (token != NULL) {
        printf("Se encontro un caracter delimitador (token) %s", token);  //imprime la cadena hasta que se encontr� el caracter
                                                                          //delimitador. En este caso, se imprime "Hola"
    }

    return 0;
}
