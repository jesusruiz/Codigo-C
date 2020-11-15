#include <stdio.h>
#include <stdlib.h>

/*Array funcion strstr()  -  Buscar una subcadena en una cadena

  Se necesita una variable puntero que devuelva la posición en memoria donde se encuentra el primer caracter de la subcadena
*/

int main()
{
    char texto[] = "A cada cerdo le llega su San Martin";  //Cadena en la que buscar
    char palabra[] = "cerdo";  //Cadena a buscar
    char *pEncontrar = NULL;  //Puntero

    pEncontrar = strstr(texto, palabra);  //Almacenamos en la variable puntero la dirección en donde la función strstr
                                          //encuentra la subcadena que estamos buscando

    if (pEncontrar) {  //si la palabra ha sido encontrada dentro del texto
        printf("La palabra '%s' ha sido encontrada dentro de la cadena '%s' en la posicion de memoria %p",
                            palabra, texto, pEncontrar);  //imprimimos la dirección de memoria donde se ha encontrado
    }
    else {
        printf("La palabra '%s' no ha sido encontrada dentro de la cadena '%s'");
    }

    return 0;
}
