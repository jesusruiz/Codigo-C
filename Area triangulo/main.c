#include <stdio.h>
#include <stdlib.h>

#define M_PI 3.14159265358979323846

int main()
{
    float baseTriangulo = 0.0f;
    float alturaTriangulo = 0.0f;
    float areaTriangulo = 0.0f;

    printf("Introduza la base del triangulo: ");
    scanf("%f",&baseTriangulo);

    printf("\nIntroduzca la altura del triangulo: ");
    scanf("%f",&alturaTriangulo);

    areaTriangulo = baseTriangulo * alturaTriangulo / 2;

    printf("\nEl area del triangulo es: %.f", areaTriangulo);
    return 0;
}
