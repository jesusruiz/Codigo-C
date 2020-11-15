#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 5;
    int resultado;

    resultado = ++contador + 6;  //contador vale 5 y se le suma 1 = 6 + 6 = 12

    printf("%d",resultado);  //se imprimirá 12

    contador = 5; //volvemos a establer contador a 5
    resultado = 0;  //al igual que resultado que lo establecemos a 0

    resultado = 6 + contador++; //resultado valdrá 6 + 5, ya que el incremento de contador a 6 se produce posteriormente a la asignación
    //es como si en realidad realizaramos dos instrucciones:   resultado = 6 + contador;   y   ++contador;
    //si usamos el operador de incremento en una declaración por sí mismo (como en la segunda declaración anterior,
    //que incrementa el recuento), no importa si escribe el prefijo o la versión postfix del operador.
    //Ambos tienen el mismo efecto.

    printf("\n%d",resultado);  //se imprimirá 11
    return 0;
}
