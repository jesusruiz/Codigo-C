#include <stdio.h>
#include <stdlib.h>

//Operador bit a bit unario NOT ~
//Esta operación solo se aplica a un elemento. Invierte los valores de los bits del elemento involucrado.
//El NOT forma el complemento a 1 de un valor binario dado.
int main()
{
    int x = 16;  //0001 0000 en binario
    int c1 = ~x;  //1110 1111 en Complemento a 1
    int c2 = ~x + 1;  //1111 0000 en Complemento a 2 (en Complemento a 2 se suma 1 al Complemento a 1)

    printf("%d en Complemento a 1",c1); //resultado  -17 en complemento a 1
    printf("\n%d en Complemento a 2",c2); //resultado  -16 en complemento a 2 (en Complemento a 2 se suma 1 al Complemento a 1)
    return 0;
}
