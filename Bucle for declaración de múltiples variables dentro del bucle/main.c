#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 1, j = 2; i <= 10; ++i, j = j +2) {
        printf("  %5d", i*j);  //se imprime  2  4  8  32  50  72  98  128  162  200
                             //con un dise�o de impresi�n de 5 contando espacios y d�gitos num�ricos
    }
    return 0;
}
