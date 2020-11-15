#include <stdio.h>
#include <stdlib.h>

//Operador OR |  operaci�n de suma
//Donde cualquiera de los bits que se encuentren en la misma posici�n sea 1, el resultado ser� 1
int main()
{
    int x = 13;       //  0000 1101  |
    int y = 6;        //  0000 0110
                      // -------------
    int z = x | y;    //  0000 1111

    printf("%d",z);  //El resultado es 15 (1111 en binario)
    return 0;
}
