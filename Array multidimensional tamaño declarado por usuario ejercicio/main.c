#include <stdio.h>
#include <stdlib.h>

/*
Un compilador compatible con C11 no tiene que implementar soporte para arrays de longitud variable porque es una caracter�stica opcional.
Si no es as�, el s�mbolo __STDC_NO_VLA__ debe definirse como 1.
Puede verificar la compatibilidad con matrices de longitud variable utilizando este c�digo:
*/
#ifdef __STDC_NO_VLA__
printf("Los arrays de longitud variable no son compatibles.\n");
exit(1);
#endif

//Promedio de un n�mero variable de calificaciones
int main()
{
    size_t nCalificaciones = 0; //N�mero de calificaciones
    printf("Introduzca el numero de calificaciones que desea introducir: ");
    scanf("%zd",&nCalificaciones);
    int calificaciones[nCalificaciones]; //Array que almacena el n�mero de Calificaciones

    long suma = 0L; //Suma de los n�meros
    float promedio = 0.0f; //Promedio de los n�meros introducidos

    printf("\nIntroduzca las %zd calificaciones:\n", nCalificaciones); //Prompt para la entrada de datos

    //Lee los n�meros de las calificaciones a promediar
    for(size_t i = 0 ; i < nCalificaciones ; ++i)
    {
        printf("%2zd> ",i + 1); //Imprime el n�mero de calificaci�n que vamos a introducir utilizando dos espacios para ello
                                //seguido de un caracter >
        scanf("%d", &calificaciones[i]); //Lee una calificaci�n
        suma += calificaciones[i]; //A�ade �sta a la suma
    }

    printf("Las calificaciones que ha introducido son las siguientes:\n");

    for(size_t i = 0 ; i < nCalificaciones ; ++i)
    {
        printf("Calificacion[%2zd] = %3d ", i + 1, calificaciones[i]);
        if((i+1) % 5 == 0) //Despu�s de 5 valores
        printf("\n"); //Saltamos a una nueva l�nea
    }
    promedio = (float)suma/nCalificaciones; //Calcula el promedio
    printf("\nEl promedio de las %zd calificaciones introducidas es: %.2f\n", nCalificaciones, promedio);
    return 0;
}
