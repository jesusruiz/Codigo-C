#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("      ");
    printf("Caracteres");
    printf("      ");
    printf("Valores numericos");
    printf("\n      ----------      ------------------\n");
    for (int c = 0; c <= 127; ++c) {
        if (isgraph(c)) {
            printf("%12c", c);
            printf("%20d\n", c);
        }
    }
    return 0;
}
