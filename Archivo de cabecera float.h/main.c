#include <stdio.h>
#include <stdlib.h>
#include <float.h>  //Para límites en tipos de punto flotante

int main()
{
    printf("El tama%co del menor valor positivo distinto de cero de tipo flotante es %.3e", 164, FLT_MIN);
    printf("\nEl tama%co del mayor valor positivo de tipo flotante es %.3e\n", 164, FLT_MAX);
    printf("El tama%co del menor valor positivo distinto de cero de tipo double es %.3e", 164, DBL_MIN);
    printf("\nEl tama%co del mayor valor positivo de tipo double es %.3e\n", 164, DBL_MAX);
    printf("El tama%co del menor valor positivo distinto de cero de tipo long double es %.3Le", 164, LDBL_MIN);
    printf("\nEl tama%co del mayor valor positivo de tipo long double es %.3Le\n", 164, LDBL_MAX);

    printf("\nLas variables de tipo flotante proporcionan una precision de %u digitos decimales", FLT_DIG);
    printf("\nLas variables de tipo double proporcionan una precision de %u digitos decimales", DBL_DIG);
    printf("\nLas variables de tipo long double proporcionan una precision de %u digitos decimales", LDBL_DIG);
    return 0;
}
