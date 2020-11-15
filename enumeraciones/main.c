#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaraci�n de tipo diasSemana
    enum diasSemana {Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};

    //declaracio�n de tipo meses y declaraci�n de la variable 'mesActual' de tipo meses
    enum meses {Enero, Febrero, Marzo, Abril, Mayo} mesActual;

    //Declaramos una variable de tipo diasSemana y la inicializamos con el valor Miercoles = 2
    enum diasSemana hoy = Miercoles;

    printf("Estamos en el dia numero %d de la semana",hoy + 1);  //Estamos en el d�a numero 3 de la semana (miercoles)

    mesActual = Enero;

    printf("\nEstamos en el mes numero 1 del ano",mesActual);
    return 0;
}
