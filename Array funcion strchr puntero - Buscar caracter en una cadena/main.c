#include <stdio.h>
#include <stdlib.h>

/*Función  strchr()  -  Buscar caracter en una cadena.
Se necesita una variable puntero, ya que la función devuelve la posición en memoria de donde se encontró la coincidencia
*/

int main()
{
    char cadena[] = "El cielo es azul";  //Cadena de caracteres en la que buscar
    char caracter = 'c';  //Caracter a buscar en la cadena
    char *obtener_posicion_caracter = NULL;  //Puntero inicializado a NULL (es importante porque la función devuelve
                                             //una dirección de memoria en caso de que se produzca una coincidencia

    obtener_posicion_caracter = strchr(cadena, caracter); //Función que devuelve una dirección de memoria en caso de
                                                          //que se produzca una coincidencia

    if (obtener_posicion_caracter) {  //si el caracter ha sido encontrado en la cadena
    printf("%s", cadena);  //imprimir la cadena original

    printf("\nPosicion de memoria de la cadena '%s': %p", cadena, cadena);  //imprimir la posición del primer caracter de la cadena

    printf("\nSe encontro el caracter '%c' en la posicion de memoria '%p' de la cadena '%s'",
                                      *obtener_posicion_caracter, obtener_posicion_caracter, cadena);
                                      //imprimir la dirección de memoria en la que se encuentre el caracter 'c'
                                      //será la dirección de memoria que ocupe el primer caracter de la cadena + 3
                                      //en formato hexadecimal (tercer caracter de la cadena

    printf("\nLa subcadena que empieza desde el caracter '%c' de la cadena es \"%s\"\n", caracter, obtener_posicion_caracter);
    //Dado que obtener_posicion_caracter, contiene la dirección de la memoria donde fue hayado el caracter buscado,
    //podríamos obtener la subcadena que empieza desde esa misma posición
    }
    else {
    printf("Caracter no encontrado");  //imprimir que el caracter no fue encontrado
    }
    return 0;
}
