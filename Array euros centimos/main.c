#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cantidades[5];  //Creamos un array de 5 elementos que almacenas valores de cantidades de euros y centimos ej: 2.50
    long euros[5];
    long centimos[5];

    printf("Introduce cinco valores monetarios (euros y centimos) separados por un espacio: \n");
    for(unsigned int i = 0 ; i < 5 ; ++i) {
        scanf("%f", &cantidades[i]);
        euros[i] = (long)cantidades[i]; //este valor también se puede obtener directamente con la función modf de c
        centimos[i] = (long)(100.0*(cantidades[i] - euros[i])); //este valor también se puede obtener directamente con la función modf de c
    }

    printf("\nCantidades introducidas: \n");
    for(unsigned int i = 0 ; i < 5 ; ++i) {
        printf("%f  ",cantidades[i]);
    }

    printf("\nEuros introducidos: \n");
    for(unsigned int i = 0 ; i < 5 ; ++i) {
        printf("%d  ",euros[i]);  //imprimimos la parte entera de la cantidad
    }

    printf("\nCentimos introducidos: \n");
    for(unsigned int i = 0 ; i < 5 ; ++i) {
        printf("%2d  ",centimos[i]);  //imprimimos la parte decimal (2 digitos) de la cantidad
    }
    return 0;
}
