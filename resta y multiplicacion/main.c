#include <stdio.h>
#include <stdlib.h>

int main()
{
    int galletas = 5;
    int calorias_galleta = 125;  //calorias por cada galleta
    int total_comidas = 0;  //total de galletas comidas

    int comidas = 2;  //galletas a ser comidas
    galletas = galletas - comidas;
    total_comidas = total_comidas + comidas;
    printf("Yo he comido %d galletas. Quedan %d galletas.", comidas, galletas);

    comidas = 3;  //nuevo valor para comidas
    galletas = galletas - comidas;  //restamos el número de galletas comidas de las galletas
    total_comidas = total_comidas + comidas; //sumamos las galletas comidas al total
    printf("\nYo me he comido otras %d galletas. Ahora quedan %d galletas.", comidas, galletas);
    printf("\nEl numero total de energia consumida es de %d calorias.", total_comidas * calorias_galleta);
    return 0;
}
