#include <stdio.h>
#include <stdlib.h>

int main()
{
    //valor que no varía durante el programa
    const int MAXIMO = 100;

    /*variable que puede cambiar de valor sin que nosotros modifiquemos
    (porque accedamos a un valor que cambie "solo", como el reloj interno del ordenador,
    o porque los datos sean compartidos con otro programa que también pueda modicarlos*/
    volatile int numeroDeUsuarios = 1;

    MAXIMO = 10:  //dará error de compilación

    return 0;
}
