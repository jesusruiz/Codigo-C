#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[7] = {5,1,3,0,7,12,2};

    //Este primer blucle for se encarga de recorrer 7 veces el bucle numeros, ya que 7 son los elementos del array.
    for (int contador1 = 0; contador1 < 7; contador1++) {
        //Este segundo bucle for se encarga de cambiar la posici�n de los elementos cuando la condici�n se cumple.
        //Hay que tener en cuenta que si movemos el �ltimo n�mero a una posici�n superior al n�mero de elementos del array,
        //la operaci�n no se podr� hacer ya que el elemento intentar�a posicionarse un n�mero de elemento superior de lo que
        //permite el array. Por esa raz�n, este segundo bucle, solamente compara hasta el elemento 6
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
