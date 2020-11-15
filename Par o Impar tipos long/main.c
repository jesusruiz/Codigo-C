#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    long numero = 0L;

    //pedimos un numero menor que el límite superior del tipo long
    printf("Introduzca un numero menor que %ld: ", LONG_MAX);
    scanf("%ld",&numero);

    //comprobar si el número es par o impar
    if (numero%2 == 0L) {
        printf("El numero %ld es par", numero);
    }
    else {
        printf("El numero %ld es impar", numero);
    }

    //ahora comprobamos si la mitad de ese número introducido por el usuario es par o impar
    if ((numero/2)%2 == 0L) {
         printf("\nLa mitad del numero %ld que es %ld es tambien un numero par", numero, numero/2);
    }
    else {
         printf("\nLa mitad del numero %ld que es %ld es tambien un numero impar", numero, numero/2);
    }
    return 0;
}
