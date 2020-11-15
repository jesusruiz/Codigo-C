#include <stdio.h>
#include <stdlib.h>

//Longitud de cadena en un array
int main()
{
    char cadena1[] = "Ser o no ser";  //Array de tipo cadena
    char cadena2[] = ", esa es la cuestion";  //Otro array de tipo cadena
    unsigned int contador = 0;  //Almacena la longitud de la cadena

    while (cadena1[contador] != '\0')  //mientras no se encuentre el caracter nulo \0 fin de la cadena
        ++contador;  //aumentar el contador en 1

    printf("La longitud de la cadena \"%s\" es de %u caracteres.\n", cadena1, contador);

    contador = 0;  //Reiniciamos la variable contador

    while (cadena2[contador] != '\0')  //mientras no se encuentre el caracter nulo \0 fin de la cadena
        ++contador;  //aumentar el contador en 1

    printf("La longitud de la cadena \"%s\" es de %u caracteres.", cadena2, contador);
    return 0;
}
