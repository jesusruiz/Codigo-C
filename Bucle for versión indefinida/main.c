#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  //hay que incluir esta línea para usar la función tolower()

int main()
{
    unsigned int suma = 0;
    unsigned int numero;
    char respuesta;

    for ( ; ; ) {
        printf("Introduzca un numero: ");
        scanf(" %u",&numero);

        suma = suma + numero;

        printf("Desea introducir otro numero: S o N");
        scanf(" %c", &respuesta);

        respuesta = tolower(respuesta);

        if (respuesta == 'n') {
            break;
        }
    }
    printf("La suma de los numeros introducidos es: %u", suma);
    return 0;
}
