#include <stdio.h>
#include <stdlib.h>

//Array de 3 dimensiones
int main()
{
    //Este array de 3 dimensiones tiene dos bloques de elementos de 3 filas y columnas
    int numeros[2][3][4] = {
                            {
                              { 1,2,3,4 },
                              { 5,6,7,8 },
                              { 9,10,11,12 }
                            },
                            {
                              { 13,14,15,16 },
                              { 17,18,19,20 },
                              { 21,22,23,24 }
                            }
                          };

    //Recorrer array de 3 dimensiones
    for (unsigned int j = 0; j < 2; ++j)
    {
        for (unsigned int i = 0; i < 3; ++i)
        {
            for (unsigned int k = 0; k < 4; ++k)
            {
             printf("%d ", numeros[j][i][k]);
            }
        }
    }

    printf("\n\n");

    //Recorrer array de 3 dimensiones
    for (unsigned int j = 0; j < sizeof(numeros)/sizeof(numeros[0]); ++j)
    {
        for (unsigned int i = 0; i < sizeof(numeros[0])/sizeof(numeros[0][0]); ++i)
        {
            for (unsigned int k = 0; k < sizeof(numeros[0][0])/sizeof(numeros[0][0][0]); ++k)
            {
             printf("%d ", numeros[j][i][k]);
            }
        }
    }

    return 0;
}
