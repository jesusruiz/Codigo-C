#include <stdio.h>
#include <stdlib.h>

int main()
{
    char primeraLetra = 'A';
    char segundaLetra = 'B';
    char ultimaLetra = 'Z';

    char numero = 40;

    char ex1 = primeraLetra + 2;  //Suma 2 a 'A'
    char ex2 = segundaLetra -1;   //Resta 1 a 'B'
    char ex3 = ultimaLetra + 2;   //Suma 2 a 'Z'

    printf("Valores de los caracteres:     %-5c%-5c%-5c\n", ex1, ex2, ex3);  /*Se imprimirá     C     A     \*/
    printf("Valores numericos equivalentes: %-5d%-5d%-5d\n", ex1,ex2,ex3);  /*Se imprimirá     67    65     92*/
    printf("El numero %d es el codigo para el caracter %c\n", numero, numero);  /*Se imprimirá     40   (*/
    return 0;
}
