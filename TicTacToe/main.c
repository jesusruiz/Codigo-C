#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jugador = 0;           //Número del jugador actual: 1 o 2
    int ganador = 0;           //El número del jugador que gana la partida
    int eleccion = 0;         //Casilla elegida
    unsigned int fila = 0;     //Índice de la fila de la casilla
    unsigned int columna = 0;  //índice de la columna de la casilla

    //Declaramos Array para el tablero: tablero de 3 filas y 3 columnas
    //Este array es de tipo chat porque utilizaremos los caracteres 'X' y 'O' para mostrarlos en las casillas seleccionadas
    char tablero[3][3] =  {               //El tablero
                    { '1', '2', '3' },    //Los valores iniciales son los caracteres del '1' al '9'
                    { '4', '5', '6' },    //utlizados para seleccionar una casilla vacía
                    { '7', '8', '9' }     //durante el turno de un jugador.
                          };

    //El bucle principal del juego. El juego continúa durante 9 turnos
    //siempre que no haya un ganador
    //Al tener claro que hay 9 turnos como máximo, puedo utilizar un bucle for en vez de un bucle do-while o while
    for (unsigned int i = 0; i < 9 && ganador == 0; ++i) {
        //Mostrar el tablero
        printf("\n");
        printf(" %c | %c | %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
        printf("---+---+---\n");
        printf(" %c | %c | %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
        printf("---+---+---\n");
        printf(" %c | %c | %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);

        //Seleccionar jugador  (si el resto de la división es impar le tocará al jugador 1. si es para al 2
        //Estamos dividiendo el turno entre 2 (2 jugador) y le sumamos 1 porque el turno empieza en 0
        jugador = i%2 + 1;

        //Obtener por parte del jugador la elección de una casilla válida
        do
        {
            printf("\nJugador %d, por favor introduzca el numero de una casilla valida "
                   "para colocar su ficha %c: ",
                   jugador, (jugador==1) ? 'X' : 'O'); //Imprimimos el numero de jugador y el caracter perteneciente a su ficha
            scanf("%d", &eleccion); //Guardamos la casilla seleccionada por el jugador en la variable eleccion

            //Obtener el índice de la fila de la casilla seleccionada por el jugador
            //Se resta 1 a la eleccion porque el array empieza en 0.
            //Se divide entre 3 posteriormente al ser el número de filas del tablero
            fila = --eleccion/3;

            //Obtener el índice de la columna de la casilla seleccionada por el jugador
            //Se divide entre 3 el numero de la casilla seleccionada al ser el número de columnas del tablero.
            //Posteriormente el resto de la división nos indicará el número de columna
            columna = eleccion%3;
        }
        //mientras la elección sea menor que 0 y mayor que 8, o la casilla del tablero tenga un valor mayor que el caracter '9'
        //Los códigos de caracteres de 'X' y 'O' son mayores que el código de caracter de '9'
        while (eleccion < 0 || eleccion > 8 || tablero[fila][columna] > '9');

        //Introducimos el símbolo caracter perteneciente a la ficha del jugador
        tablero[fila][columna] = (jugador == 1) ? 'X' : 'O';  //en el tablero introducimos una X si el jugador es el 1, sino una O

        //Código para comprobar el ganador
        //Busqueda de una línea ganadora: primero comprobación de las diagonales
        if ((tablero[0][0] == tablero[1][1] && tablero[0][0] == tablero[2][2]) ||
            (tablero[0][2] == tablero[1][1] && tablero[0][2] == tablero[2][0]))
          ganador = jugador;
        else
        {
            //Comprobación de filas y columnas para una línea ganadora: comprobaciones verticales y horizontales
            for(unsigned int linea = 0; linea <= 2; ++linea) {
                if ((tablero[linea][0] == tablero[linea][1] && tablero[linea][0] == tablero[linea][2]) ||
                    (tablero[0][linea] == tablero[1][linea] && tablero[0][linea] == tablero[2][linea]))
                  ganador = jugador;
            }
        }
    }

    /* Código para el resultado */
    //El juego ha terminado, así que se muestra el tablero final
    printf("\n");
    printf(" %c | %c | %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);

    //Mostrar mensaje de resultado
    if (ganador)
        printf("\nEnhorabuena, jugador %d, TU ERES EL GANADOR!\n", jugador);
    else
        printf("\nHubo un empate");

    return 0;
}
