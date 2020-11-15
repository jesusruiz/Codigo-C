#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radio = 2.5f;  //simple precisión  (4 bytes = 32 bits  ±3.4E±38  -- 6 cifras significativas (mantisa de 23 bits 2^23-1 (una para el signo)) --)
    double masGrande = 123E30;  //doble precisión  (8 bytes = 64 bits  ±1.7E±308  -- 15 cifras significativas  --)
    long double enorme = 1234567.89123L;  //12 bytes = 96 bits  ±1.19E±4932  -- 18 cifras significativas  --)

    printf("Valor de la variable de simple presicion del radio: %f\n",radio);  //dará como resultado  12.560000
    printf("Valor de la variable de simple presicion con dos digitos decimales del radio: %.2f\n",radio);  //dará como resultado  12.56
    printf("Valor de la variable de simple presicion con un digito decimal del radio: %.1f\n",radio);  //dará como resultado  12.6  (se redondea el numero)
    printf("Valor de la variable de simple presicion con un digito entero del radio: %1.f\n",radio);  //dará como resultado  13  (se redondea el numero)

     //dará como resultado  '   12.56'
    printf("Valor de la variable de simple presicion con siete digitos en total rellenados desde la izquierda del radio: %7.2f\n",radio);

    //dará como resultado  '12.56      '
    printf("Valor de la variable de simple presicion con diez digitos en total rellenados desde la derecha del radio: %-11.2fPRUEBA DE ELLO\n",radio);

    printf("\nValor de la variable de doble presicion masGrande: %.f\n",masGrande);
    printf("\nValor de la variable enorme: %Lf",enorme);  //este valor no aparece si no marcamos la compilación -std=c11
    return 0;
}
