#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //la función getch() se encuenta disponible en la libreria conio.h de C. Disponible solo en Windows

//función getch()
int main()
{
    char letra;

    //Con la función getch() no se muestra el caracter que estamos teclando por pantalla, y en cuanto pulsemos
    //una tecla se ejecuta la siguiente línea de código
    printf("Pulse una tecla: ");
    letra = getch();
    printf("\nLa tecla presionada fue %c",letra);
    return 0;
}
