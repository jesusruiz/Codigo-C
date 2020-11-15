#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 15;
    int y = -10;
    int z = 2147483647;

    printf("%d\n",++x);  //suma 1 al valor 15 lo que dará como resultado 16
    printf("%d\n",++y);  //al sumar 1, el resultado será -9  (-10)+(+1) = -9
    printf("%d\n",++z);  //integer overflow. Imprimirá por pantalla -2147483648
    printf("%d",++z);  //Continua el integer overflow. Imprimirá por pantalla -2147483647
    return 0;
}
