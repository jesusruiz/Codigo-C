#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //char  8 bits (1 byte):  -128 a 127
    //podemos imprimir la letra correspondiente al código ASCII del valor almacenado en este variable
    unsigned char letraA = 65;

    //unsigned short   8 bits (1 byte):  0 a 255  (en esta plataforma 2 bytes)
    unsigned short talla_pie = 38;

    //unsined int  16 bits (2 bytes):  0 a 65535  (en esta plataforma 4 bytes)
    unsigned int habitantes_Zamora = 65362UI;

    //int  16 bits (2 bytes):   -32768 a 32767  (en esta plataforma 4 bytes)
    int habitantes_Madrid = 3223334;
    int habitantes_Madrid_Zamora = 0;

    //unsigned long (4 bytes):   0 a 4294967295
    unsigned long superficie_kmts2_Oceanos = 361000000UL;

    //float (4 bytes):   3.4E-38 a 3.4E+38  (de 6 a 7 digitos decimales de precisión)
    const float PI = 3.141592f;

    //long long  −9,223,372,036,854,775,807, +9,223,372,036,854,775,807
    long long estrellas = 833567334669567801LL;

    //double (8 bytes):   1.7E-308 a 1.7E+308   ó 3.4E-4932 a 1.1E+4932  (15 digitos decimales de precisión)
    double valor_Double = 1.1636368;

    //long double (12  bytes):  ±1.19E±4932  (18 digitos decimales de precisión)
    long double valor_longDouble = 1.26969606;


    printf("El valor 65 en el codigo ASCII pertenece a la letra %c", letraA);
    printf("\nMi n%cmero de pie es %hu", 163, talla_pie);
    printf("\nEl n%cmero de habitantes de Zamora es %u", 163, habitantes_Zamora);
    printf("\nEl n%cmero de habitantes de Madrid es %d", 163, habitantes_Madrid);
    habitantes_Madrid_Zamora = habitantes_Zamora + habitantes_Madrid;
    printf("\nMadrid y Zamora suman un total de %d habitantes", habitantes_Madrid_Zamora);
    printf("\nLa superficie ocupada en kilometros cuadrados por los Oceanos es %lu", superficie_kmts2_Oceanos);
    printf("\nPI es igual a %f", PI);
    printf("\nNumero de estrellas %lld", estrellas);  //en Windows se utiliza %I64u
    printf("\nEl valor almacenado en la variable valor_Double es %lg", valor_Double);
    printf("\nEl valor almacenado en la variable valor_longDouble es %llu", valor_longDouble); //en Windows se utiliza %I64u

    //Comprobacin del número de bytes que ocupa en esta plataforma realmente cada tipo de dato definido anteriormente
    printf("\n\nComprobacion del numero de bytes que ocupan los tipos de datos definidos anteriormente en esta plataforma:");
    printf("\n----------------------------------------------------------------------------------------------------------");
    printf("\nunsigned char - letra A: %d byte",sizeof(letraA));
    printf("\nunsigned short - numero de pie: %d bytes",sizeof(talla_pie));
    printf("\nunsined int - habitantes Zamora: %d bytes",sizeof(habitantes_Zamora));
    printf("\nint - habitantes Madrid: %d bytes",sizeof(habitantes_Madrid));
    printf("\nunsigned long - superficie Oceanos: %d bytes", sizeof(superficie_kmts2_Oceanos));
    printf("\nfloat - PI: %d bytes", sizeof(PI));
    printf("\nlong long - estrellas: %d bytes", sizeof(estrellas));
    printf("\ndouble - valor_Double: %d bytes", sizeof(valor_Double));
    printf("\nlong double - valor_longDouble: %d bytes", sizeof(valor_longDouble));

    return 0;
}
