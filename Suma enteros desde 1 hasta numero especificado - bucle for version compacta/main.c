#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long suma = 0LL;  //Almacena la suma de los enteros
    unsigned int contador = 0;  //El número de enteros a ser sumados

    //Leer el número de enteros a ser sumados
    printf("Introduzca el numero de enteros que desea sumar: ");
    scanf(" %u",&contador);

    //Suma los enteros desde 1 a contador
    for (int i = 1; i <= contador; suma += i++);   //esto es igual a   for (int i = 1; i <= contador; suma = suma + i, ++i);
    //Esta expresión añade el valor de i a la suma y luego incrementa i para la siguiente iteración.
    //Funciona de esta manera porque ha utilizado el formato postfix del operador de incremento.
    //Si usa el formato prefix aquí, obtendrá un resultado incorrecto porque se añadirá contador + 1 para sumar
    //en la última iteración del ciclo, en lugar de solamente contador.

    //Imprime el resultado de la suma
    printf("La suma total de los primeros %u enteros es %u",contador,suma);

    return 0;
}
