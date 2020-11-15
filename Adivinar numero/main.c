#include <stdio.h>
#include <stdlib.h>
#include <time.h>  //incluimos esta cabecera para utilizarla en la función srand() como semilla para los numeros aleatorios

int main()
{
    int numeroAleatorio;
    int numeroUsuario;

    srand(time(NULL));  //A esta función solamente hay que llamarla una vez

    numeroAleatorio = rand()%10+1;  //Generará un número aleatorio entre 1 y 10

    for (int intento = 0; intento <5; intento ++) {
    printf("Adivine el numero que estoy pensando. Introduzca un numero del 1 al 10 y pulse INTRO: ");
    scanf("%d",&numeroUsuario);

        if(numeroAleatorio < numeroUsuario) {
            printf("No, %d no es el numero que estoy pensando. El numero que estoy pensando es menor.\n\n",numeroUsuario);
        }
        if(numeroAleatorio > numeroUsuario) {
            printf("No, %d no es el numero que estoy pensando. El numero que estoy pensando es mayor.\n\n",numeroUsuario);
        }
        if (numeroUsuario == numeroAleatorio) {
            printf("Eres una maquina. Efectivamente, el numero que estaba pensando era el %d",numeroAleatorio);
            exit(0);
        }
    }
    printf("Se acabaron tus intentos. El numero que estaba pensando era el %d",numeroAleatorio);
    return 0;
}
