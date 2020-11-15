#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum diasSemana {Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};
    enum diasSemana hoy = Martes;

    switch (hoy) {

    case Lunes:
        printf("Dia seleccionado Lunes");
        break;

    case Martes:
        printf("Dia seleccionado Martes");
        break;

    case Miercoles:
        printf("Dia seleccionado Martes");
        break;

    case Jueves:
        printf("Dia seleccionado Martes");
        break;

    case Viernes:
        printf("Dia seleccionado Martes");
        break;

    case Sabado:
        printf("Dia seleccionado Martes");
        break;

    case Domingo:
        printf("Dia seleccionado Martes");
        break;
    }

    return 0;
}
