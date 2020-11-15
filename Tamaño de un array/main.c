#include <stdio.h>
#include <stdlib.h>

//Tama�o de un array
int main()
{
    //Declaraci�n de un array de 5 elementos
    double valores[5] = {1.0, 2.0, 3.0, 4.0, 5.0};

    //Saber el n�mero de elementos que tiene un array.
    //Podemos saberlo con la f�rmula:   sizeof (nombre_del_array)  = tama�o en bytes del array
    //dividido entre:   sizeof (numero_del_elemento_0_del_array)  = tama�o del tipo de dato del primer elemento
    //nos dar� como resultado el n�mero de elementos del array.  En este caso:  5  (40 bytes / 8 bytes)

    //Tambi�n ser�a v�lida la siguiente f�rmula:   size_t  numero_elementos = sizeof valores/sizeof(double);
    size_t  numero_elementos = sizeof valores/sizeof valores[0];

    //Imprimir el n�mero de bytes que ocupa el array. En este caso 40 bytes  (5 elementos * 8 bytes cada uno)
    printf("El tama%co del array es de %zu bytes", 164, sizeof valores);

    //Imprimir el n�mero de elementos que tiene el array y los bytes que ocupa cada uno de esos elementos
    printf("\nEl array tiene %zu elementos, y cada uno de estos elementos ocupa %zu bytes", numero_elementos, sizeof valores[0]);
    printf("\n");

    //De esta manera, como ya sabemos calcular el n�mero de elementos de un array, podr�amos recorrer el array utilizando
    //un bucle for de la siguiente manera:
    for (unsigned int contador = 0; contador < sizeof(valores)/sizeof(valores[0]); ++contador) {
        printf("\nValor del elemento %u: %.2f", contador, valores[contador]);
    }

    return 0;
}
