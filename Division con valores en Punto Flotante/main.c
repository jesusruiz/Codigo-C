#include <stdio.h>
#include <stdlib.h>

int main()
{
    float longitudTabla = 10.0f;  //en pies   un pie = 30,48 ctms.
    float numeroPiezasRequeridas = 4.0f;   //número de trozos del mismo tamaño que se requieren
    float longitudCadaPieza = 0.0f;  //Longitud que tendrá cada pieza;

    longitudCadaPieza = longitudTabla / numeroPiezasRequeridas;

    printf("Una tabla de %.f de longitud se puede cortar en %.f piezas de %.f de longitud",
           longitudTabla,numeroPiezasRequeridas,longitudCadaPieza);
    return 0;
}
