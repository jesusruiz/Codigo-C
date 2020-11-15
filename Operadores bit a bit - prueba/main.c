#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int valor = 120;  //Declaro y defino un valor entero

    unsigned int mascara = 1 << 31;  //Creo una máscara de 32 bits, con el bit más significativo a la izquierda en 1


    for (unsigned int c = 1; c <= 32; ++c) {
            putchar(valor & mascara ? '1' : '0');
            valor <<= 1; // shift value left by 1
    }

    return 0;
}
