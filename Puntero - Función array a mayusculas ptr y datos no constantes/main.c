#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Funci�n prototipo
void funcAMayusculas(char* sPtr);  //Funci�n que recibe un puntero a cadena

int main()
{
    char cadena[] = "EsTo es Una CadeNa";

    printf("La cadena original antes de ser convertida a mayusculas es: %s", cadena);

    funcAMayusculas(cadena);  //funci�n que recibe la direcci�n de memoria de la cadena

    printf("\nLa cadena resultante tras ser convertida a mayusculas es: %s", cadena);
}

//Funci�n funcAMayusculas
void funcAMayusculas(char* sPtr) {

    while (*sPtr != '\0') {
        *sPtr = toupper(*sPtr);
        ++sPtr;
    }
}
