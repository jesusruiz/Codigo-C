#include <stdio.h>
#include <stdlib.h>

int main()
{
    float variable;

    printf("Las variables de tipo char en este sistema ocupa %u byte", sizeof(char));  //1 byte
    printf("\nLas variables de tipo short en este sistema ocupa %u bytes", sizeof(short));  //2 bytes
    printf("\nLas variables de tipo entero en este sistema ocupa %u bytes", sizeof(int));  //4 bytes
    printf("\nLas variables de tipo long en este sistema ocupa %u bytes", sizeof(long));  //4 bytes
    printf("\nLas variables de tipo long long en este sistema ocupa %u bytes", sizeof(long long));  //8 bytes
    printf("\nLas variables de tipo float en este sistema ocupa %u bytes", sizeof(float));  //4 bytes
    printf("\nLas variables de tipo double en este sistema ocupa %u bytes", sizeof(double));  //8 bytes
    printf("\nLas variables de tipo long double en este sistema ocupa %u bytes", sizeof(long double));  //12 bytes

    printf("\n\nLa variable de tipo float declarada en este sistema ocupa %u bytes", sizeof(variable));  //4 bytes
    return 0;
}
