#include <stdio.h>  //la funci�n getchar() se encuenta disponible en la libreria est�ndar input-output de C
#include <stdlib.h>

//funci�n getchar()
int main()
{
    char letra;

    //Con la funci�n getchar() se muestra el caracter que estamos teclando por pantalla, pero tenemos que pulsar
    //Intro para que se ejecute la siguiente l�nea de c�digo
    printf("Pulse una tecla y presione Intro: ");
    letra = getchar();
    printf("La tecla presionada fue %c",letra);
    return 0;
}
