#include <stdio.h>
#include <stdlib.h>

//Operador XOR ^  operaci�n de suma exclusiva
//La diferencia de estados en los bits de igual posici�n dar� como resultado 1 y la igualdad de estados dar� como resultado 0
int main()
{
    int x = 13;       //  0000 1101  ^
    int y = 6;        //  0000 0110
                      // -------------
    int z = x ^ y;    //  0000 1011

    printf("%d",z);  //El resultado es 11 (1011 en binario)
    return 0;
}
