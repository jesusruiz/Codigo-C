#include <stdio.h>
#include <stdlib.h>

int main()
{
    //imprimimos la el caracter de ¡ (abrir exclamación) caracter especial 173
    printf("%cHola Mundo!\n",173);
    //la macro __LINE__ permite conocer el número de línea de código que se está ejecutando
    printf("La linea de codigo que se esta ejecutando en este momento es la numero: %d",__LINE__);
    return 0;
}
