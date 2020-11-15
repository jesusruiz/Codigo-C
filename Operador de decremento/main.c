#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 10;
    int resultado;

    resultado = --contador + 6;  //contador vale 9 (10-1)  y se le suma 6 = 15

    printf("%d",resultado);  //se imprimir� 15

    contador = 10; //volvemos a establer contador a 10
    resultado = 0;  //al igual que resultado que lo establecemos a 0

    resultado = 6 + contador--; //resultado valdr� 6 + 10, ya que el incremento de contador a 11 se produce posteriormente a la asignaci�n
    //es como si en realidad realizaramos dos instrucciones:   resultado = 6 - contador;   y   --contador;
    //si usamos el operador de decremento en una declaraci�n por s� mismo (como en la segunda declaraci�n anterior,
    //que decrementa el recuento), no importa si escribe el prefijo o la versi�n postfix del operador.
    //Ambos tienen el mismo efecto.

    printf("\n%d",resultado);  //se imprimir� 16
    return 0;
}
