#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long suma = 0LL;  //Almacena la suma de los enteros
    unsigned int contador = 0;   //El número de enteros a ser sumados

    //Leer el número de enteros a ser sumados
    printf("\nIntroduzca el numero de enteros a ser sumados: ");
    scanf(" %u",&contador);

    //Suma los enteros desde 1 hasta contador
    for (unsigned int i = 1; i <= contador; ++i) {
        suma = suma + i;
    }

    //Mostrar el resultado de la suma
    printf("\nLa suma total de los primeros %u numeros es %llu", contador, suma);
    return 0;
}
