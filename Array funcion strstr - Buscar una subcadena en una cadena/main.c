#include <stdio.h>
#include <stdlib.h>

/*Array funcion strstr   -   Buscar una subcadena en una cadena*/

int main()
{
    char cadena1[] = "Volveran las oscuras golondrinas";
    char cadena2[] = "oscuras golondrinas";
    char cadena3[] = "oscurras golondrinas";

    //Buscar ocurrencia de cadena2 en cadena1
    if (strstr(cadena1, cadena2))
        printf("\"%s\" fue encontrada en \"%s\"", cadena2, cadena1);
    else
        printf("\"%s\" no fue encontrada en \"%s\"", cadena2, cadena1);

    //Buscar ocurrencia de cadena3 en cadena1
    if (strstr(cadena1, cadena3))
        printf("\n\"%s\" fue encontrada en \"%s\"", cadena3, cadena1);
    else
        printf("\n\"%s\" no fue encontrada en \"%s\"", cadena3, cadena1);

    return 0;
}
