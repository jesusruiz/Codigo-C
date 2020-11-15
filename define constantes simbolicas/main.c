#include <stdio.h>
#include <stdlib.h>

/*
La diferencia entre el uso de const y el uso de #define está en que mediante
const se declara una constante que tiene un tratamiento asemejable a una variable
(por ejemplo, la constante es de un tipo de dato)
mientras que mediante define se indica que escribir el nombre especificado equivale a escribir el valor,
con una correspondencia directa y sin tratamiento análogo al de una variable.
*/
#define DIAS_DE_LA_SEMANA 12

int main()
{
    printf("Dias de la semana: %d",DIAS_DE_LA_SEMANA);
    return 0;
}
