#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //Hay que a�adir este archivo de cabecera para poder utilizar las funciones de cadena

//Funci�n strncpy()
//Esta funci�n puede meter basura en el �ltimo car�cter al copiar un array de cadena a otro de distintos tama�os.
//Aqu� se ofrece un truco para que no ocurra, pero no aconsejable utilizarlo. Mejor utilizar otros m�todos de copiado de cadenas.

int main()
{
    char origen[50] = "";  //Inicializamos la cadena para que no aparezcan al imprimirla caracteres extra�os al utilizar strncpy()
    char destino[20] = "";  //Inicializamos la cadena para que no aparezcan al imprimirla caracteres extra�os al utilizar strncpy()

    strcpy(origen, "Esto es un ejemplo de una funcion strncpy()"); //Se copia la cadena al array origen[50]
    strncpy(destino, origen, 10); //Se copian los 10 primeros caracteres del array origen al array destino

    printf("%s\n", origen);  //se imprime "Esto es un ejemplo de una funci�n strncpy()"
    printf("%s", destino);  //se imprime "Esto es un"   //Se pueden imprimir caracteres extra�os si no iniciamos la cadena al declararla

    return 0;
}
