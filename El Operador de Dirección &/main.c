#include <stdio.h>
#include <stdlib.h>

//Utilizando el operador de dirección &
int main()
{
    //Definimos algunas variables de tipo entero
    long a = 1L;
    long b = 2L;
    long c = 3L;

    //Definimos algunas variables de tipo flotante
    double d = 4.0;
    double e = 5.0;
    double f = 6.0;

    printf("Una variable de tipo long ocupa %u bytes.", sizeof(long));
    printf("\nA continuacion se muestran algunas direcciones de variables de tipo long:");
    printf("\nLa direccion de a es: %p  La direccion de b es: %p", &a, &b);
    printf("\nLa direccion de c es: %p", &c);

    printf("\n\nUna variable de tipo double ocupa %u bytes.", sizeof(double));
    printf("\nA continuacion se muestran algunas direcciones de variables de tipo double:");
    printf("\nLa direccion de d es: %p  La direccion de e es: %p", &d, &e);
    printf("\nLa direccion de f es: %p", &f);

    return 0;
}
