#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Funci�n prototipo
void fncAMinuscula(char* sPtr);

int main()
{
    char cadena[] = "EsTO Es UNA CADena";

    printf("La cadena original antes de ser convertida a minusculas es: %s\n", cadena);

    fncAMinuscula(cadena);  //funci�n que recibe una cadena

    printf("La cadena resultante tras ser convertida a minusculas es: %s\n", cadena);

    return 0;
}

//Funci�n fncAMinuscula
void fncAMinuscula(char* sPtr) {

    while (*sPtr != '\0') {  //mientras el contenido del puntero sea distinto al valor de fin de cadena
        *sPtr = tolower(*sPtr);  //convertir a minuscula el valor al que apunta el puntero
        sPtr++; //avanzar al siguiente caracter
    }
}
