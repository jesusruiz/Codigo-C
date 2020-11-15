#include <stdio.h>
#include <stdlib.h>

/*Funci�n  strchr()  -  Buscar caracter en una cadena.
Se necesita una variable puntero, ya que la funci�n devuelve la posici�n en memoria de donde se encontr� la coincidencia

En este ejemplo vamos a ver c�mo encontrar m�ltiples ocurrencias en una cadena de caracteres
*/

int main()
{
    char cadena[] = "Tres tristes tigres tragaban trigo en un trigal";  //Cadena en la que buscar
    char caracter = 't';  //Caracter a buscar en la cadena
    char *obtener_caracter = &cadena;  //Variable puntero que apunta a la direcci�n de memoria donde comienza la cadena

    int contador = 0;  //Variable que almacena el n�mero de veces que se encuentra el caracter 't'

    while (obtener_caracter = strchr(obtener_caracter, caracter)) {   //Mientras no se devuelva NULL ...
        ++contador;  //Se ha encontrado el caracter t y por lo tanto se suma 1 al contador
        ++obtener_caracter;  //Ir a la siguiente direcci�n de la memoria
    }

    printf("El caracter '%c' se ha encontrado %d veces en la cadena \"%s\"\n", caracter, contador, cadena);
    return 0;
}
