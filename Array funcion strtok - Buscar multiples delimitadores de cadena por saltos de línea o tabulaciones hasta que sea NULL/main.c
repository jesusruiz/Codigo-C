#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //Hay que incluir este archivo de cabecera para poder utilizar la función strtok()

int main()
{
    char cadena[] = "Hola\nMundo\t\t\tSeparado\nPor\nSaltos y tabulaciones";
    char delimitador[] = "\n\t";
    char *token = strtok(cadena, delimitador);

    if (token != NULL ) {
        while (token != NULL) {
            // Sólo en la primera pasamos la cadena. En las siguientes pasamos NULL

            /*La primera llamada a strtok debe pasar la cadena C para tokenizar,
            y las llamadas posteriores deben especificar NULL como el primer argumento,
            que le dice a la función que continúe tokenizando la cadena que pasó primero.

            El valor de retorno de la función devuelve una cadena C que es el token actual recuperado.
            Entonces, primera llamada -> primer token,
            segunda llamada (con NULL especificado) -> segundo token, y así sucesivamente.

            Cuando no quedan fichas para recuperar, strtok devuelve NULL,
            lo que significa que la cadena se ha tokenizado completamente.*/
            printf("Token: %s\n", token);
            token = strtok(NULL, delimitador);
        }
    }

    return 0;
}
