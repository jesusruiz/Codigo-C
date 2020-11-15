#include <stdio.h>
#include <stdlib.h>

//Array de cadena de dos dimensiones
int main()
{
    //Creamos un array de cadena de 3 filas de 32 caracteres
    char cadenas[3][32] = {
                            "C es un lenguaje complejo.",
                            "C es dificil de manejar.",
                            "C es un lenguaje de bajo nivel."
                          };

    //imprimimos el contenido del array.
    for (unsigned int i = 0; i < 3; i++) {
        printf("%s\n",cadenas[i]);
    }

    printf("\n\n");  //Doble salto de línea

    //Creamos un segundo array, esta vez dejando el primer campo del array en blanco para que el compilador lo analice
    char palabras[][32] = {
                            "Hola, mundo.",
                            "Aqui estamos otra vez.",
                            "Ya vamos a dejar de escribir."
                          } ;

    //Recorremos el array e imprimimos las cadenas almacenadas en el mismo
    for (unsigned int contador = 0; contador < sizeof(palabras)/sizeof(palabras[0]); contador++) {
        printf("%s\n", palabras[contador]);
    }

    return 0;
}
