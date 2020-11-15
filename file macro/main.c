#include <stdio.h>
#include <stdlib.h>

int main()
{
    //la macro __FILE__ permite conocer la ruta y el archivo que se está ejecutando en ese momento
    printf("El archivo que se esta ejecutando en este momento es: %s",__FILE__);
    return 0;
}
