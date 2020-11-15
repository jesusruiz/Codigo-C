#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  //Hay que incluir este archivo de cabecera para poder utilizar algunas de las funciones
#define LONG_TEXTO 100  //Definimos longitud de texto de la cadena en la que vamos a buscar
#define LONG_SUBC 40  //Definimos la longitud de la subcadena que deseamos buscar

/*Funciones cadena y caracteres - Conversión de caracteres : mayúsculas y minúsculas. Búsqueda de subcadenas */

int main()
{
    char texto[LONG_TEXTO];  //Definimos la cadena principal en la que vamos a buscar. Una cadena que será de 100 caracteres.
    char subcadena[LONG_SUBC];  //Definimos la subcadena que deseamos buscar. Una subcadena que será de 40 caracteres.

    printf("Introduzca la cadena en la que desea buscar (menor a %d caracteres): ", LONG_TEXTO);
    gets(texto);

    printf("\nIntroduzca la cadena a buscar (menor a %d caracteres): ", LONG_SUBC);
    gets(subcadena);

    printf("\nPrimera cadena introducida: \n%s", texto);
    printf("\nSegunda cadena introducida: \n%s", subcadena);

    //Convertir ambas cadenas a mayusculas
    //Cada caracter (char) lo convertimos a mayuscula hasta que encontremos el caracter nulo '\0'
    for (int i = 0; (texto[i] = (char)toupper(texto[i])) != '\0'; i++);
    for (int i = 0; (subcadena[i] = (char)toupper(subcadena[i])) != '\0'; i++);

    //Busqueda de la subcadena en la cadena con la función strstr().
    //Si esta función devuelve NULL, se imprime que la cadena NO fue encontrada
    //Si esta función NO devuelve NULL, se imprime que la cadena fue encontrada
    printf("\nLa segunda cadena %s encontrada en la primera cadena.",
           ((strstr(texto, subcadena) == NULL) ? "no fue" : "fue")); //Operador ternario

    return 0;
}
