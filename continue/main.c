#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum diasSemana {Lunes = 1, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};

    //se puede hacer un bucle for con enumeraciones ya que recordemos que los enumerandos son en realidad de tipos entero
    for (enum diasSemana dia = Lunes; dia <= Domingo; ++dia) {
        if (dia == Miercoles) {
            continue;
        }
        printf("\nEl dia %d de la semana no es Miercoles",dia);
    }
    return 0;
}
