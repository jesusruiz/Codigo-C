#include <stdio.h>
#include <stdlib.h>

//Instrucci�n goto
int main()
{
    int suma = 0;

    for(int i = 0; i <= 10; i++) {
        suma = suma + i;

        if (i==5) {
            goto resultado; //Salir del bucle for e ir directamente a la instrucci�n etiquetada como 'resultado'
        }
    }

    resultado:  //Al salir del bucle for gracias a la isntrucci�n goto, vamos a esta l�nea de c�digo
           printf("%d", suma);  //imprime 15  1+2+3+4+5
    return 0;
}
