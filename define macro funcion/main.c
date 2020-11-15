#include <stdio.h>
#include <stdlib.h>

//Otro uso de #define es el de definir macros, equivalencias a ejecutar cuando se encuentre la invocaci�n a la macro.
//En este ejemplo, se define una macro seg�n la cual cuando sea invocada pasando dos valores devolver� la suma de dichos valores.
//Esta misma tarea puede ser realizada por una funci�n, pero usar macros puede redundar en una mayor eficiencia y velocidad
//de ejecuci�n al no tener que realizarse el tratamiento propio de las funciones cuando aparece una invocaci�n a la macro.
#define SUMA(x,y) x+y

int main()
{
    int a = 12;
    int b = 12;

    //Se llama a la macro SUMA definida en el apartado #define
    printf("La suma de %d y %d es: %d",a,b,SUMA(a,b));
    return 0;
}
