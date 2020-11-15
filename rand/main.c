#include <stdio.h>
#include <stdlib.h>
#include <time.h>  //incluimos esta cabecera para utilizarla en la función srand() como semilla para los numeros aleatorios

int main()
{
    //La función rand() nos devuelve un numero entero aleatorio entre 0 y RAND_MAX
    //Además, este número que nos devuelve se repite cada vez que ejecutamos el programa
    printf("La constante RAND_MAX vale: %d",RAND_MAX);
    printf("\n%u", rand());
    printf("\n%u", rand());

    //Para limitar el numero aleatorio máximo que nos devuelve rand(), podemos hacerlo de la siguiente manera
    //Se nos devuelve un numero aleatorio entre 0 y 10
    printf("\n%u", rand()%11);

    //Si queremos que se nos devuelva un valor aleatorio entre 1 y 10, lo haríamos de la siguiente manera
    printf("\n%u", rand()%10 + 1);

    //Para solventar el problema de que siempre salgan los mismos numeros aleatorios, podemos utilizar la función srand()
    //a la que pasaremos como parámetro o la fecha/hora del sistema srand(time(NULL));
    //o el número de proceso del programa srand(getpid());
    srand(time(NULL)); //A esta función solamente hay que llamarla una vez
    printf("\n%u\n",rand()%10+1);  //Generará un número aleatorio entre 1 y 10

    //Vamos a rellenar un vector de 5 elementos de tipo entero con valores aleatorios
    int vec[5]; //declaramos vector de tipo int de 5 elementos

    for (int contador = 0; contador <=4; contador++) {
        vec[contador] = rand()%10 + 1;  //creamos un numero aleatorio entre 1 y 10 y lo almacenamos en el vector
    }

    //Recorremos de nuevo el vector para imprimir los valores
    for (int contador = 0; contador <=4; contador++) {
        printf("%u ", vec[contador]);
    }
    return 0;
}
