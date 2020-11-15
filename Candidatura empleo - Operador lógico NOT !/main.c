#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Programa candidatura de empleo

int main()
{
    int edad = 0;  //edad del candidato
    int centroUniversitario = 0;  //código de referencia para el Centro Universitario donde estució el candidato
    int especialidad = 0;  //código de referencia para la especialidad que estudió el candidato
    _Bool entrevista = false;  //guardará un valor true si se le solicitará una entrevista y un valor false si queda descartado

    //Obtener los datos del candidato
    printf("Introduzca la edad del candidato: ");
    scanf("%d",&edad);
    printf("Introduzca el Centro Universitario donde estudi%c - 1 para Harvard, 2 para Yale, 3 para otros: ", 162);
    scanf("%d",&centroUniversitario);
    printf("Introduzca la especialidad que estudi%c - 1 para Quimica, 2 para Economia, 3 para otras: ", 162);
    scanf("%d",&especialidad);

    //Validación de la candidatura para entrevista
    if ((edad > 25 && especialidad == 1)  && (centroUniversitario == 3 || centroUniversitario == 1))
        entrevista = true;
    if (centroUniversitario  == 2 && especialidad == 1)
        entrevista = true;
    if (centroUniversitario == 1 && especialidad == 2 && !(edad > 28))  //si edad es menor o igual a 28
        entrevista = true;
    if (centroUniversitario == 2 && (especialidad == 2 || especialidad == 3) && edad > 25)
        entrevista = true;

    //Salida de respuesta para entrevista
    if (entrevista) // si entrevista tiene valor true
        printf("Solicita una entrevista con este candidato");
    else
        printf("Solicitante descartado");
    return 0;
}
