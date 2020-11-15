#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char respuesta = 'N';  //Decisi�n de continuar o no el bucle
    double total = 0.0;  //Resultado total de los valores introducidos
    double valor = 0.0;  //Valor introducido
    unsigned int contador = 0;  //N�mero de valores introducidos

    for ( ; ; ) {    //Bucle for indefinido
        printf("\nIntroduzca un valor: ");
        scanf(" %lf", &valor);

        total = total + valor;
        ++contador;

        //preguntar al usuario si se desean a�adir m�s n�meros a la suma
        printf("\nQuiere introducir otro valor - S o N: ");
        scanf(" %c", &respuesta);

        if (tolower(respuesta) == 'n') {
            break;  //salir del bucle
        }
    }
    printf("\nLa media total de los valores introducidos es: %.2f", total/contador);
    return 0;
}
