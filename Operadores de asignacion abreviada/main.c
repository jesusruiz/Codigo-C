#include <stdio.h>
#include <stdlib.h>

int main()
{
    short x = 15;
    short y = -10;
    short z = 214;

    printf("Valor de x: %d\nValor de y: %d\nValor de z: %d\n",x,y,z);

    //Sumamos 12 a todas las variables anteriores
    x += 12;  //esto es igual que  x = x+12;
    y += 12;  //esto es igual que  y = y+12;
    z += 12;  //esto es igual que  z = z+12;

    printf("\nAhora los valores son:\nValor de x: %d\nValor de y: %d\nValor de z: %d\n",x,y,z);

    //Restamos, multiplicamos y dividimos las variables anteriores
    x -= 10;  //esto es igual que  x = x-10;
    y *= 10;  //esto es igual que  x = x*10;
    z /= 2;  //esto es igual que  z = z/10;

    printf("\nAhora los valores son:\nValor de x: %d\nValor de y: %d\nValor de z: %d\n",x,y,z);

    //Multiplicamos x*z

    x *= z;  //esto es igual que  x = x*z;

    //solo cambiará el valor de la variable x
    printf("\nAhora los valores son:\nValor de x: %d\nValor de y: %d\nValor de z: %d\n",x,y,z);

    return 0;
}
