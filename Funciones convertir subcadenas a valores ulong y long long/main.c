#include <stdio.h>
#include <stdlib.h>

/*Funciones  strtoll()  strtoul()  y   strtoull() -  Convertir subcadenas a valores ulong y long

Convierten una subcadena a un valor de tipo long long, unsigned long y unsigned long long, respectivamente.
Funcionan esencialmente de la misma manera que la función strtol().
*/

int main()
{
    char cadena[] = "123 234 0xAB 111011";  //Declaración de una cadena de texto formada por 4 subcadenas de texto
    char *pcadena = cadena;  //puntero que apunta al primer caracter de la cadena
    char *pOtraSubcadena = NULL;  //puntero que apunta a la siguiente subcadena de la cadena
    long a = strtol(pcadena, &pOtraSubcadena, 0); //Convertir un valor en base 10 valor a = 123
    pcadena = pOtraSubcadena;  //Start is next character
    unsigned long b = strtoul(pcadena, &pOtraSubcadena, 0); //Convertir un valor en base 10  b = 234L
    pcadena = pOtraSubcadena;  //Start is next character
    long c = strtol(pcadena, &pOtraSubcadena, 16); // Convertir un valor hexaecimal  c = 171
    pcadena = pOtraSubcadena;  //Start is next character
    long d = strtol(pcadena, &pOtraSubcadena, 2); // Convertir un valor binario  d = 59
    return 0;
}
