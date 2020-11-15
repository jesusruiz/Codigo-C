#include <stdio.h>
#include <stdlib.h>

/* Funcion getchar() - Devuelve el car�cter que se halle en la entrada est�ndar

Esta funci�n no devuelve un car�cter, sino un entero. Ya que con un entero podemos representar tanto el conjunto de caracteres
que cabe en el tipo car�cter (normalmente el conjunto ASCII de caracteres) como el car�cter EOF de fin de fichero.
*/

int main()
{
    int caracter;

    caracter = getchar();  /* N�tese que getchar() no devuelve nada
                            hasta que se presiona ENTER */
    putchar(caracter);  //Imprime el caracter pulsado tras presionar ENTER
    return 0;
}
