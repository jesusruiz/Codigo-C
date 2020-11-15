#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[7] = {5,1,3,0,7,12,2};

    //Este primer blucle for se encarga de recorrer 7 veces el bucle numeros, ya que 7 son los elementos del array.
    for (int contador1 = 0; contador1 < 7; contador1++) {
        //Este segundo bucle for se encarga de cambiar la posición de los elementos cuando la condición se cumple.
        //Hay que tener en cuenta que si movemos el último número a una posición superior al número de elementos del array,
        //la operación no se podrá hacer ya que el elemento intentaría posicionarse un número de elemento superior de lo que
        //permite el array. Por esa razón, este segundo bucle, solamente compara hasta el elemento 6
        for (int contador = 0; contador < 6 ; contador++) {
            if(numeros[contador+1] <= numeros[contador]) {
                int menor = numeros[contador+1];
                int mayor = numeros[contador];
                numeros[contador] = menor;
                numeros[contador+1] = mayor;
            }
        }
    }

    for (int contador = 0; contador < 7; contador++) {
        printf("%d ",numeros[contador]);
    }
    return 0;
}
