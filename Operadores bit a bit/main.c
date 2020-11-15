#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int valorOriginal = 0xABC;  //2748 en decimal    1010 1011 1100 en binario
    unsigned int resultado = 0;
    unsigned int mascara = 0xF;  //recogería los cuatro bits más a la derecha
    //0xF es el valor hexadecimal más largo posible para 4 bits:  1111 en binario

    printf("\nValor original en hexadecimal: %X", valorOriginal);  //imprime ABC
    printf("\nValor original en decimal: %d", valorOriginal);  //imprime 2748

    printf("\n\nValor de la mascara en hexadecimal: %X", mascara);  //imprime F
    printf("\nValor de la mascara en decimal: %u", mascara);  //imprime 15   1111‬ en binario

    // Introduce el primer digito en resultado
    resultado |= valorOriginal & mascara;

    //Imprimimos el valor actual de resultado tanto en hexadecimal como en decimal
    printf("\n\nValor de resultado en hexadecimal: %X", resultado);  //imprime C
    printf("\nValor de resultado en decimal: %d", resultado);  //imprime 12

    //Obtener el segundo digito de valorOriginal (la B)
    valorOriginal >>= 4;  //Desplaza cuatro posiciones de bits más a la derecha. El bit menos significativo se pierde en cada desplazamiento

    printf("\n\nValor original tras 4 bits desplazamiento a la derecha. Valor original ahora vale: %X", valorOriginal);  //imprime AB  hemos perdido los ultimos 4 bits perteneciente a C

    //Hacemos espacio en resultado para almacenar el siguiente digito
    resultado <<= 4;

    //Y ahora que tenemos 4 bits de espacio a la derecha de resultado.
    //introducimos los 4 bits más a la derecha (menos significativos) de valorOriginal utilizando la mascara
    resultado |= valorOriginal & mascara;

    //Imprimimos valor de resultado
    printf("\n\nValor de resultado en hexadecimal tras crear 4 bits de espacio y utilizar mascara para establecer los 4 bits mas a la derecha del valor original: %X", resultado);  //imprime CB

    //Obtener el tercer digito de valorOriginal (la A)
    valorOriginal >>= 4;

    printf("\n\nValor original tras 4 bits desplazamiento a la derecha. Valor original ahora vale: %X", valorOriginal);  //imprime A  hemos perdido los ultimos 4 bits perteneciente a B

    //Hacemos espacio en resultado para almacenar el siguiente digito
    resultado <<= 4;

    //Y ahora que tenemos 4 bits de espacio a la derecha de resultado.
    //introducimos los 4 bits más a la derecha (menos significativos) de valorOriginal utilizando la mascara
    resultado |= valorOriginal & mascara;

    //Imprimimos valor de resultado
    printf("\n\nValor de resultado en hexadecimal tras crear 4 bits de espacio y utilizar mascara para establecer los 4 bits mas a la derecha del valor original: %X", resultado);  //imprime CBA
    return 0;
}
