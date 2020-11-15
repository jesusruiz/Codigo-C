#include <stdio.h>
#include <stdlib.h>

/*Funciones  strtod()  strtof() y  strtold() -  Convertir subcadenas a valores flotantes

strtod()  Devuelve un valor de tipo double a partir de la parte inicial de la cadena especificada como primer argumento.
El segundo argumento es un puntero a una variable, digamos ptr, de tipo char* en el que la funci�n
almacenar� la direcci�n del primer car�cter despu�s de la primera subcadena que se convirti� al tipo double.
Si no se encuentra una cadena que pueda convertirse al tipo double, la variable ptr contendr� la direcci�n
pasada como primer argumento.

strtof()   Un valor de tipo float. En todos los dem�s aspectos, funciona como strtod().

strtold()  Un valor de tipo long double. En todos los dem�s aspectos, funciona como strtod().
*/

int main()
{
    double valor = 0;
    char cadena[] = "3.5 2.5 1.26";  //La cadena que queremos convertir a valor flotante
    char *pcadena = cadena;   //Puntero que apunta a la cadena a convertir
    char *pOtrasubcadena = NULL;  //Puntero que apunta a la posici�n del siguiente caracter despu�s de la primera conversi�n

    //Leer un n�mero arbitrario de caracteres.
    while(pcadena != '\0') {
        //strtod(puntero de la primera subcadena a convertir, puntero a la siguiente subcadena (NULL))
        valor = strtod(pcadena, &pOtrasubcadena);
        //Si el puntero de la primera subcadena apunta a la misma direcci�n que el puntero de la siguiente subacena
        if (pcadena == pOtrasubcadena)
            break;  //hemos terminado la conversi�n
        else {
            printf("    %f", valor);
            pcadena = pOtrasubcadena;  //Inicio de almacenamiento para la siguiente conversi�n
        }
    }
    return 0;
}
