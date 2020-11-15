#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Función prototipo
void funcAMayusculas(char* sPtr);  //Función que recibe un puntero a cadena

int main()
{
    char cadena[] = "EsTo es Una CadeNa";

    printf("La cadena original antes de ser convertida a mayusculas es: %s", cadena);

    funcAMayusculas(cadena);  //función que recibe la dirección de memoria de la cadena

    printf("\nLa cadena resultante tras ser convertida a mayusculas es: %s", cadena);
}

//Función funcAMayusculas
void funcAMayusculas(char* sPtr) {

    while (*sPtr != '\0') {
        *sPtr = toupper(*sPtr);
        ++sPtr;
    }
}
