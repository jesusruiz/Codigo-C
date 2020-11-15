#include <stdio.h>
#include <stdlib.h>

int main()
{
    int galletas = 45;  //número de galletas
    int ninos = 7;  //número de niños
    int galletas_por_nino = 0;  //número de galletas por niño
    int galletas_sobrantes = 0;  //número de galletas sobrantes

    //Calcula cuántas galletas recibe cada niño cuando se dividan
    galletas_por_nino = galletas/ninos;
    printf("Tu tienes %d ni%cos y %d galletas.\n", ninos, 164, galletas);
    printf("Da a cada ni%co %d galletas.\n", 164, galletas_por_nino);

    //Calcula cuántas galletas sobrantes quedan
    galletas_sobrantes = galletas%ninos;  //La expresión a la derecha del operador de asignación calcula el resto de la división
    printf("El n%cmero de galletas sobrantes es %d.\n", 163, galletas_sobrantes);
    return 0;
}
