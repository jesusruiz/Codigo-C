#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%cHola!\n\n\nEste programa es un poco",173);
    printf(" mas largo que los anteriores.");
    //la secuencia de escape \a emite el sonido de alerta predefinido por el Sistema Operativo
    printf("\nPero en realidad tambien lo unico que hace es imprimir texto.\n\n\n\a\a");
    printf("%c%cHey, espera un minuto!! %c%cQue fue eso???\n\n",173,173,168,168);
    printf("\t1.\t%cUn pajaro?\n");
    printf("\t2.\t%cUn avion?\n");
    printf("\t3.\t%cUn caracter especial?\n");
    //la secuencia de escape \b (Espacio atrás - Retroceso (backspace)). Hace retroceder el cursor una posición a la izquierda.
    //el efecto visual de las secuencias de escape de tabulación \t y del Espacio atrás - Retroceso puede variar entre compiladores
    printf("\n\t\t\b\b%cY como se vera esto cuando se imprima?\n\n",168);
    return 0;
}
