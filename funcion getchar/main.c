#include <stdio.h>  //la función getchar() se encuenta disponible en la libreria estándar input-output de C
#include <stdlib.h>

//función getchar()
int main()
{
    char letra;

    //Con la función getchar() se muestra el caracter que estamos teclando por pantalla, pero tenemos que pulsar
    //Intro para que se ejecute la siguiente línea de código
    printf("Pulse una tecla y presione Intro: ");
    letra = getchar();
    printf("La tecla presionada fue %c",letra);
    return 0;
}
