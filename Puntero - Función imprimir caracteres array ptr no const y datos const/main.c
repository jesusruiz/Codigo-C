#include <stdio.h>
#include <stdlib.h>

//Funci�n prototipo
void fncImprimirCaracteres(char *sPtr);

int main()
{
    char cadena[] = "Esto es una cadena de texto";

    puts("La cadena es: ");
    fncImprimirCaracteres(cadena);
    puts("");

    return 0;
}

//Funci�n fncImprimirCaracteres
void fncImprimirCaracteres(char *sPtr) {

    for (; *sPtr != '\0'; ++sPtr) {
        printf("%c", *sPtr);
    }
}
