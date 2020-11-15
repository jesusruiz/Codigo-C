#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int kilobytes;
    unsigned int bytes;

    kilobytes = 3*1024;
    printf("3 Mb. son %d Kb.\n", kilobytes);

    bytes = kilobytes * 1024;
    printf("3 Mb. son %d bytes", bytes);
}
