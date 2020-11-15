#include <stdio.h>
#include <stdlib.h>
#include <limits.h>  //Para límites en tipos enteros

int main()
{
    printf("Las variables de tipo char pueden almacenar un valor comprendido entre %d y %d", CHAR_MIN, CHAR_MAX);
    printf("\nLas variables de tipo char sin signo (unsigned char) pueden almacenar un valor comprendidos entre 0 y %u", UCHAR_MAX);
    printf("\nLas variables de tipo short pueden almacenar un valor comprendido entre %d y %d", SHRT_MIN, SHRT_MAX);
    printf("\nLas variables de tipo short sin signo (unsigned short) pueden almacenar un valor comprendido entre 0 y %d", USHRT_MAX);
    printf("\nLas variables de tipo entero pueden almacenar un valor comprendido entre %d y %d", INT_MIN, INT_MAX);
    printf("\nLas variables de tipo entero sin signo (unsigned int) pueden almacenar un valor comprendido entre 0 y %u", UINT_MAX);
    printf("\nLas variables de tipo long pueden almacenar un valor comprendido entre %ld y %ld", LONG_MIN, LONG_MAX);
    printf("\nLas variables de tipo long (sin signo) pueden almacenar un valor comprendido entre 0 y %lu", ULONG_MAX);
    printf("\nLas variables de tipo long long pueden almacenar un valor comprendido entre %lld y %lld", LLONG_MIN, LLONG_MAX);
    printf("\nLas variables de tipo long (sin signo) pueden almacenar un valor comprendido entre 0 y %llu", ULLONG_MAX);
    return 0;
}
