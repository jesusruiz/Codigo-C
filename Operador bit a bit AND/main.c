#include <stdio.h>
#include <stdlib.h>

//Operador AND &  operación de multiplicación
//El resultado es 1 si los dos bits que estén en la misma posición son 1
int main()
{
    int x = 13;       //  0000 1101  &
    int y = 6;        //  0000 0110
                      // -------------
    int z = x & y;    //  0000 0100

    printf("%d",z);  //El resultado es 4 (100 en binario)
    return 0;
}
