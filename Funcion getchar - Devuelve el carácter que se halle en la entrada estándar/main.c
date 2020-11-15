#include <stdio.h>
#include <stdlib.h>

/* Funcion getchar() - Devuelve el carácter que se halle en la entrada estándar

Esta función no devuelve un carácter, sino un entero. Ya que con un entero podemos representar tanto el conjunto de caracteres
que cabe en el tipo carácter (normalmente el conjunto ASCII de caracteres) como el carácter EOF de fin de fichero.
*/

int main()
{
    int caracter;

    caracter = getchar();  /* Nótese que getchar() no devuelve nada
                            hasta que se presiona ENTER */
    putchar(caracter);  //Imprime el caracter pulsado tras presionar ENTER
    return 0;
}
