#include <stdio.h>
#include <stdlib.h>

int main()
{
    int galletas = 45;  //n�mero de galletas
    int ninos = 7;  //n�mero de ni�os
    int galletas_por_nino = 0;  //n�mero de galletas por ni�o
    int galletas_sobrantes = 0;  //n�mero de galletas sobrantes

    //Calcula cu�ntas galletas recibe cada ni�o cuando se dividan
    galletas_por_nino = galletas/ninos;
    printf("Tu tienes %d ni%cos y %d galletas.\n", ninos, 164, galletas);
    printf("Da a cada ni%co %d galletas.\n", 164, galletas_por_nino);

    //Calcula cu�ntas galletas sobrantes quedan
    galletas_sobrantes = galletas%ninos;  //La expresi�n a la derecha del operador de asignaci�n calcula el resto de la divisi�n
    printf("El n%cmero de galletas sobrantes es %d.\n", 163, galletas_sobrantes);
    return 0;
}
