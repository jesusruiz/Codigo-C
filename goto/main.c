#include <stdio.h>
#include <stdlib.h>

//Instrucción goto
int main()
{
    int suma = 0;

    for(int i = 0; i <= 10; i++) {
        suma = suma + i;

        if (i==5) {
            goto resultado; //Salir del bucle for e ir directamente a la instrucción etiquetada como 'resultado'
        }
    }

    resultado:  //Al salir del bucle for gracias a la isntrucción goto, vamos a esta línea de código
           printf("%d", suma);  //imprime 15  1+2+3+4+5
    return 0;
}
