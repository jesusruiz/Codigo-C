#include <stdio.h>
#include <stdlib.h>

//Array de cadena de dos dimensiones 2 - Número de cadenas y Longitud de las cadenas
int main()
{
    char cadenas[][70] = {
                          "Las computadoras hacen lo que les dices que hagan, no lo que quieres que hagan.",
                          "Cuando pones algo en la memoria, recuerda donde lo has puesto.",
                          "Nunca pruebe una condicion que no sabe lo que hace.",
                         };

    unsigned int contador = 0;  //Longitud de una cadena
    unsigned int numCadenas = sizeof(cadenas)/sizeof(cadenas[0]);  //Número de cadenas

    //Imprimimos el número de cadenas que cotiene el array. 3 en este caso.
    printf("El array contiene %u cadenas.\n", numCadenas);

    //Conocer la longitud de las cadenas
    for (unsigned int i = 0; i < numCadenas; i++) {  //bucle que va desde 0 hasta 3
        contador = 0;  //la variable contador que comienza en 0 cada vez que finaliza la suma de caracteres de cada cadena
        while (cadenas[i][contador]) {  //itera sobre los caracteres en la cadena actual seleccionada por el primer valor de índice, i.
            contador++;  //se suma 1 a la variable contador por cada caracter de la cadena
        }
        printf("\nLa cadena:\n \"%s\"\n\n contiene %u caracteres.\n", cadenas[i], contador);
    }

    return 0;
}
