#include <stdio.h>
#include <stdlib.h>

//Declaración array de tipo string
int main()
{
    //Tenemos para almacenar una cadena de 19 caracteres, ya que el caracter 20 se utiliza para el caracter nulo \0 de fin de cadena
    char saludo[20] = "Hola mundo.";
    //Imprimir cadena almacenada en el array
    printf("%s",saludo);  //La especificación %s se utiliza para imprimir una cadena terminada en nulo
    return 0;
}
