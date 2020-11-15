#include <stdio.h>
#include <stdlib.h>

/*
Este desplazamiento, corre los bits de derecha a izquierda
(del bit menos significativo al más significativo), un número definido de veces.

El bit más significativo se pierde en cada desplazamiento, mientras el bit menos significativo se va rellenando con un cero
si el valor es positivo, o con un uno si el valor es negativo.
*/
int main()
{
    unsigned int valor = 65372;  //valor decimal sin signo  1111 1111 0101 1100 en binario de dos bytes en Complemento a 2.
    unsigned int resultado = valor << 2;  //1111 1101 0111 0000 desplazamiento a la izquierda de bits.
    printf("%u\n",resultado);  //resultado 261488 (65372 x 4) en decimal =  0011 1111 1101 0111 0000 en binario en Complemento a 2.

    int nuevoValor = -164;  //valor decimal con signo  1111 1111 0101 1100 en binario de dos bytes en Complemento a 2.
    int nuevoResultado = nuevoValor << 2;  //1111 1101 0111 0011  desplazamiento a la izquierda de bits.
    printf("%d\n",nuevoResultado);  //resultado -656 (-164 x 4) en decimal =  1111 1111 1101 0111 en binario de dos bytes.
    return 0;
}
