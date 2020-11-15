#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[10];
    unsigned int aprobados = 0;

    for(unsigned int contador = 0; contador <= 9; ++contador) {
        printf("Introduzca la nota del alumno %u: ", contador +1);
        scanf("%f",&notas[contador]);
    }

    for(unsigned int contador = 0; contador <= 9; ++contador) {
        printf("\nLa nota del alumno %u es %.2f", contador + 1, notas[contador]);

        if (notas[contador] >= 5) {
            ++aprobados;
        }
    }

    printf("\n\nTotal de alumnos aprobados: %u", aprobados);

    return 0;
}
