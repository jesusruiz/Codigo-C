#include <stdio.h>
#include <stdlib.h>

/* Funcion gets() -

gets se diferencia de scanf en que scanf sólo captura una cadena de texto hasta que aparece el primer espacio
o fin de línea (desechando todo lo que venga a continuación).

De este modo si tratamos de capturar con scanf el texto “Amanece un maravilloso día aquí en Alaska”,
lo único que capturaremos es “Amanece”, perdiéndose el resto del texto.

En cambio con gets se captura todo el texto. Tanto con scanf como con gets se introduce automáticamente un fin de cadena (\0)
al final del texto capturado (de ahí que un array de caracteres siempre tenga un carácter adicional además del texto visible,
el correspondiente al final de cadena.)
*/

int main()
{
    char frase[100];
    printf("Escriba una frase: ");
    gets(frase);
    puts("Frase introducida");
    puts(frase);

    return 0;
}
