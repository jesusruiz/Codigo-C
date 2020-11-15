#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  //Hay que incluir el siguiente archivo de cabecera para poder utilizar algunas funciones
#define BUF_SIZE 100  //Definimos un tamaño de buffer de 100

/* Funciones de cadena y caracteres  -  Clasificando caracteres */

int main()
{
    char buf[BUF_SIZE];  //Buffer de entrada de 100 caracteres
    int nLetras = 0;  //Número de letras introducidas
    int nDigitos = 0;  //Número de dígitos introducidos
    int nPuntuacion = 0;  //Número de caracteres de puntuación

    printf("Introduzca una cadena de menos de %d caracteres:\n", BUF_SIZE);

    //COmprobamos si se produce algún error con la función gets()
    if (!gets(buf)) {  //La función gets() lee una cadena de texto desde teclado almacenándola en el buffer
        printf("Error al leer la cadena.\n");
        return 1;
    }

    size_t i = 0;  //Índice del buffer
    //Recorremos el buffer desde la posición 0
    while(buf[i])
    {
        if(isalpha(buf[i]))
            ++nLetras;  //Incremento del recuento de letras
        else if(isdigit(buf[i]))
            ++nDigitos;  //Incremento del recuento de dígitos
        else if(ispunct(buf[i]))
            ++nPuntuacion;
        ++i;  //Sumamos 1 al buffer para pasar al siguiente caracter de la cadena
    }

    printf("\nSu cadena contiene %d letras, %d digitos y %d caracteres de puntuacion.\n",
    nLetras, nDigitos, nPuntuacion);

    return 0;
}
