#include <stdio.h>
#include <stdlib.h>

int main()
{
    //la variable debe ser declarada previamente al bucle for
    int contador = 1;

    //bucle for con la declaración de la variable de control declarada fuera del propio bucle
    for ( ; contador <= 10; ++contador) {
        printf("%d ", contador);
    }

    printf("\n%d ", contador);  //Aquí la variable contador vale 11
    return 0;
}
