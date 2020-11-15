#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //Hay que añadir este archivo de cabecera para poder utilizar las funciones de cadena

//Función strncpy()
//Esta función puede meter basura en el último carácter al copiar un array de cadena a otro de distintos tamaños.
//Aquí se ofrece un truco para que no ocurra, pero no aconsejable utilizarlo. Mejor utilizar otros métodos de copiado de cadenas.

int main()
{
    char origen[50] = "";  //Inicializamos la cadena para que no aparezcan al imprimirla caracteres extraños al utilizar strncpy()
    char destino[20] = "";  //Inicializamos la cadena para que no aparezcan al imprimirla caracteres extraños al utilizar strncpy()

    strcpy(origen, "Esto es un ejemplo de una funcion strncpy()"); //Se copia la cadena al array origen[50]
    strncpy(destino, origen, 10); //Se copian los 10 primeros caracteres del array origen al array destino

    printf("%s\n", origen);  //se imprime "Esto es un ejemplo de una función strncpy()"
    printf("%s", destino);  //se imprime "Esto es un"   //Se pueden imprimir caracteres extraños si no iniciamos la cadena al declararla

    return 0;
}
