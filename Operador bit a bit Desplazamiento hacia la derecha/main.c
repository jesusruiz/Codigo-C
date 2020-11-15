#include <stdio.h>
#include <stdlib.h>

/*
Este desplazamiento, corre los bits de izquierda a derecha
(del bit más significativo al menos significativo), un número definido de veces.

El bit menos significativo se pierde en cada desplazamiento, mientras el bit más significativo se va rellenando con un cero
si el valor es positivo, o con un uno si el valor es negativo.
*/
int main()
{
    unsigned int valor = 65372;  //valor decimal sin signo  1111 1111 0101 1100 en binario de dos bytes en Complemento a 2.
    unsigned int resultado = valor >> 2;  //0011 1111 1101 0111  desplazamiento a la derecha de bits.
    printf("%u\n",resultado);  //resultado 16343 en decimal =  0011 1111 1101 0111 en binario de dos bytes en Complemento a 2.

    int nuevoValor = -164;  //valor decimal con signo  1111 1111 0101 1100 en binario de dos bytes en Complemento a 2.
    int nuevoResultado = nuevoValor >> 2;  //1111 1111 1101 0111  desplazamiento a la derecha de bits.
    printf("%d\n",nuevoResultado);  //resultado -41 (-164/4) en decimal =  1111 1111 1101 0111 en binario de dos bytes en Complemento a 2.
    return 0;
}
