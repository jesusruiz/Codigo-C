#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 15;
    int y = -10;
    int z = 2147483647;

    printf("%d\n",++x);  //suma 1 al valor 15 lo que dar� como resultado 16
    printf("%d\n",++y);  //al sumar 1, el resultado ser� -9  (-10)+(+1) = -9
    printf("%d\n",++z);  //integer overflow. Imprimir� por pantalla -2147483648
    printf("%d",++z);  //Continua el integer overflow. Imprimir� por pantalla -2147483647
    return 0;
}
