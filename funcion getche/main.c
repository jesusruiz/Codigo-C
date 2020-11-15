#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //la función getche() se encuenta disponible en la libreria conio.h de C. Disponible solo en Windows

//función getche()
int main()
{
    char letra;

    //Con la función getche() se muestra el caracter que estamos teclando por pantalla, y en cuanto pulsemos
    //una tecla se ejecuta la siguiente línea de código
    printf("Pulse una tecla: ");
    letra = getche();
    printf("\nLa tecla presionada fue %c",letra);
    return 0;
}
