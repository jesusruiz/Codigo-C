#include <stdio.h>
#include <stdlib.h>

int main()
{
    //valor que no var�a durante el programa
    const int MAXIMO = 100;

    /*variable que puede cambiar de valor sin que nosotros modifiquemos
    (porque accedamos a un valor que cambie "solo", como el reloj interno del ordenador,
    o porque los datos sean compartidos con otro programa que tambi�n pueda modicarlos*/
    volatile int numeroDeUsuarios = 1;

    MAXIMO = 10:  //dar� error de compilaci�n

    return 0;
}
