#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //la funci�n getch() se encuenta disponible en la libreria conio.h de C. Disponible solo en Windows

//funci�n getch()
int main()
{
    char letra;

    //Con la funci�n getch() no se muestra el caracter que estamos teclando por pantalla, y en cuanto pulsemos
    //una tecla se ejecuta la siguiente l�nea de c�digo
    printf("Pulse una tecla: ");
    letra = getch();
    printf("\nLa tecla presionada fue %c",letra);
    return 0;
}
