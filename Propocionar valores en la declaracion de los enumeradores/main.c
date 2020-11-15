#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Los valores de los enumeradores empiezan ahora en 1 y no en 0 como ocurre por defecto
    enum diasSemana {Lunes = 1, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};

    enum diasSemana hoy = 3;

    printf("Hoy es el dia %u de la semana", hoy); //Hoy es el dia 3 de la semana  (Miercoles)

    //Enero tendrá valor 12, Febrero tendrá valor 5, Marzo tendrá valor 7, Abril tendrá valor 6  (5 + 1)
    //Mayo tendrá valor 7 y Marzo tendrá también un valor 7
    enum meses {Enero = 12, Febrero = 5, Abril, Mayo, Marzo = 7};

    enum meses mes = Abril;

    printf("\nAbril es el mes %u de la lista enumerada", mes);

    enum baraja {dos = 2, tres, cuatro, cinco, seis, siete, ocho, nueve, diez,
                 sota, caballo, rey, as};

    enum baraja cartaAs = as;

    printf("\nEl valor de la carta AS es %u", cartaAs);
    return 0;
}
