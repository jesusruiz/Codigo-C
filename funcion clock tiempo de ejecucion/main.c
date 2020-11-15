#include <stdio.h>
#include <stdlib.h>
#include <time.h>  //librería que incluye la función clock()

int main()
{
    clock_t tiempo_inicio, tiempo_final;
    double tiempo_transcurrido_en_segundos;

    tiempo_inicio = clock(); //iniciamos la medida del tiempo

    //creamos un proceso que ocupe algo de tiempo realizar
    for (int i = 0; i <= 1000; ++i) {
        printf("  %d",i);
    }

    tiempo_final = clock();  //finalizamos la medida del tiempo

    /*según que estes midiendo el tiempo en segundos es demasiado grande*/
    tiempo_transcurrido_en_segundos = (double)(tiempo_final-tiempo_inicio) / CLOCKS_PER_SEC;

    printf("\n\nTiempo transcurrido desde que se inicio el programas hasta que finalizo en segundos: %2.1f",
           tiempo_transcurrido_en_segundos);
    return 0;
}
