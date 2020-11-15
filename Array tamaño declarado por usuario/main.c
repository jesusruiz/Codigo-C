#include <stdio.h>
#include <stdlib.h>

int main()
{
    //size_t es un tipo de datos sin signo. Por lo tanto, no puede representar ning�n valor negativo (<0).
    //Este tipo se usa para representar el tama�o de un objeto.
    //Como una consecuencia, size_t es un tipo garantizado para contener cualquier �ndice de matriz.
    size_t tamano = 0;

    printf("Introduzca el numero de elementos que desea introducir en el array: ");
    scanf("%zd", &tamano);  //%zd espera un argumento de tipo size_t

    int numeros[tamano];  //creamos el array con el n�mero de elementos definidos por el usuario

    size_t  numero_elementos = sizeof numeros/sizeof numeros[0];  //Calculamos el n�mero de elementos que tiene el array
    printf("\nElementos del array: %zu", numero_elementos);  //imprimimos el n�mero de elementos del array para comprobarlo
    return 0;
}
