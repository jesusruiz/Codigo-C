#include <stdio.h>
#include <stdlib.h>

//Tamaño de un array
int main()
{
    //Declaración de un array de 5 elementos
    double valores[5] = {1.0, 2.0, 3.0, 4.0, 5.0};

    //Saber el número de elementos que tiene un array.
    //Podemos saberlo con la fórmula:   sizeof (nombre_del_array)  = tamaño en bytes del array
    //dividido entre:   sizeof (numero_del_elemento_0_del_array)  = tamaño del tipo de dato del primer elemento
    //nos dará como resultado el número de elementos del array.  En este caso:  5  (40 bytes / 8 bytes)

    //También sería válida la siguiente fórmula:   size_t  numero_elementos = sizeof valores/sizeof(double);
    size_t  numero_elementos = sizeof valores/sizeof valores[0];

    //Imprimir el número de bytes que ocupa el array. En este caso 40 bytes  (5 elementos * 8 bytes cada uno)
    printf("El tama%co del array es de %zu bytes", 164, sizeof valores);

    //Imprimir el número de elementos que tiene el array y los bytes que ocupa cada uno de esos elementos
    printf("\nEl array tiene %zu elementos, y cada uno de estos elementos ocupa %zu bytes", numero_elementos, sizeof valores[0]);
    printf("\n");

    //De esta manera, como ya sabemos calcular el número de elementos de un array, podríamos recorrer el array utilizando
    //un bucle for de la siguiente manera:
    for (unsigned int contador = 0; contador < sizeof(valores)/sizeof(valores[0]); ++contador) {
        printf("\nValor del elemento %u: %.2f", contador, valores[contador]);
    }

    return 0;
}
