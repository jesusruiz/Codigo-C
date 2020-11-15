#include <stdio.h>
#include <stdlib.h>

/*Funciones atof()  atoi()  atol()  y  atoll()   -  Convertir cadenas a valores num�ricos

atof() Un valor de tipo double que se produce a partir del argumento de cadena.
El infinito como valor doble se reconoce a partir de las cadenas "INF" o "INFINITY"
donde cualquier car�cter puede estar en may�sculas o min�sculas y
"no se reconoce un n�mero" de la cadena "NAN" en may�sculas o min�sculas.

atoi() Un valor de tipo int que se produce a partir del argumento de cadena

atol() Un valor de tipo long que se produce a partir del argumento de cadena.

atoll() A value of type long long that is produced from the string argument.
*/

int main()
{
    char valor_cadena[] = "98.4";
    double valor_decimal = atof(valor_cadena);

    printf("El valor de la cadena %s convertido a valor num�rico es %f", valor_cadena, valor_decimal);

    char valor_cadena2[] = "92";
    int valor_numerico = atoi(valor_cadena2);

    printf("\nEl valor de la cadena %s convertido a valor num�rico es %d", valor_cadena2, valor_numerico);

    return 0;
}
