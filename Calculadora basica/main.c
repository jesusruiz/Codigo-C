#include <stdio.h>
#include <stdlib.h>

//Calculadora b�sica
int main()
{
    double numero1 = 0.0;  //primer valor operando
    double numero2 = 0.0;  //segundo valor operando
    char operacion = 0;  //operaci�n debe ser +, -, *, / o %

    printf("Introduzca el calculo a realizar: ");
    //al utilizar scanf() a�adir la 'l' al tipo double. Debe quedar %lf para que lea correctamente el valor del usuario
    scanf("%lf %c %lf", &numero1, &operacion, &numero2);

    switch (operacion)
    {
        case '+':
            //al utilizar printf() no a�adir la 'l' del tipo double solamente la 'f'
            printf("\nSuma de: %f + %f = %f", numero1, numero2, numero1 + numero2);
            break;

        case '-':
            //al utilizar printf() no a�adir la 'l' del tipo double solamente la 'f'
            printf("\nResta de: %f - %f = %f", numero1, numero2, numero1 - numero2);
            break;

        case '*':
            //al utilizar printf() no a�adir la 'l' del tipo double solamente la 'f'
            printf("\nMultiplicacion de: %f * %f = %f", numero1, numero2, numero1 * numero2);
            break;

        case '/':
            if (numero2 == 0) {
                printf("\nError. Division por cero");  //Comprobar el operando 2 para prevenir divisi�n por 0
                break;
            }
            else {
                //al utilizar printf() no a�adir la 'l' del tipo double solamente la 'f'
                printf("\nDivision de: %f / %f = %f", numero1, numero2, numero1 / numero2);
                break;
            }

        //���ATENCI�N!!! los dos n�meros double deben convertirse a long cuando se calcula el m�dulo.
        //Esto se debe a que el operador % (m�dulo) solo funciona con enteros en C.
        case '%':
            if ((long)numero2 == 0) {
                printf("\nError. Division por cero");  //Comprobar el operando 2 para prevenir divisi�n por 0
                break;
            }
            else {
                //al utilizar printf() no a�adir la 'ld' del tipo double solamente la 'f'
                printf("\nResto de: %ld / %ld = %ld", (long)numero1, (long)numero2, (long)numero1 % (long)numero2);
                break;
            }

        default:
            printf("\nOperacion no reconocida");
    }

    return 0;
}
