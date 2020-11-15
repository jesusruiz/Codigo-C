#include <stdio.h>
#include <stdlib.h>

#define M_PI 3.14159265358979323846

int main()
{
    float radioCirculo = 0.0f;
    float areaCirculo = 0.0f;

    printf("Introduzca el radio del circulo: ");
    scanf("%f",&radioCirculo);

    areaCirculo = M_PI * (radioCirculo * radioCirculo);

    printf("\nEl area del circulo es: %.2f",areaCirculo);
    return 0;
}
