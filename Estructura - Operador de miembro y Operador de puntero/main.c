#include <stdio.h>
#include <stdlib.h>

struct alumno {

    char *nombre; //definir un puntero 'nombre'
    int *edad;    //definir un puntero 'edad'
};

int main()
{

    struct alumno alumno1;  //definimos una variable estructura 'alumno1' de tipo 'alumno'

    alumno1.nombre = "Juan Carlos";
    alumno1.edad = 21;

    struct alumno *alumnoPtr = &alumno1;  //definimos un puntero estructura 'alumnoPtr' de tipo 'alumno'
                                          //que apunta a la dirección de alumno1

    printf("Nombre: %s \t Edad: %d\n", alumno1.nombre, alumno1.edad);
    printf("Nombre: %s \t Edad: %d\n", alumnoPtr->nombre, alumnoPtr->edad);
    printf("Nombre: %s \t Edad: %d\n", (*alumnoPtr).nombre, (*alumnoPtr).edad);

    return 0;
}
