//Una lista enlazada simple compuesta por 3 nodos

#include <stdio.h>
#include <stdlib.h>

//Estructura que define cada miembro del que está compuesto cada elemento de un Nodo
struct Nodo {
    int dato;  //variable que guarda un valor de tipo entero
    struct Nodo* siguienteNodo;  //puntero de tipo Nodo que apunta al siguiente nodo
};

int main()
{
    //Definicion de tres variables puntero de tipo Nodo
    struct Nodo* cabeza = NULL;  //primer nodo que apunta a un valor NULL
    struct Nodo* segundoNodo = NULL;  //segundo nodo que apunta a un valor NULL
    struct Nodo* tercerNodo = NULL;  //tercer nodo que apunta a un valor NULL

    //asignar los 3 nodos definidos en la pila. la función malloc() pide la memoria requerida
    cabeza = (struct Nodo*)malloc(sizeof(struct Nodo));
    segundoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    tercerNodo = (struct Nodo*)malloc(sizeof(struct Nodo));

     /* Tres bloques han sido asignados de manera dinámica.
     Nosotros tenemos tres punteros que apuntan a cada uno de esos tres bloques:
     cabeza, segundoNodo y tercerNodo

      cabeza        segundoNodo      tercerNodo
        |                |               |
        |                |               |
    +---+-----+     +----+----+     +----+----+
    | #  | #  |     | #  | #  |     |  # |  # |
    +---+-----+     +----+----+     +----+----+

   # representa cualquier valor aleatorio.
   Los datos son aleatorios porque todavía no hemos asignado
   ningún valor a ninguno de ellos  */

    //imprimir las direcciones de memoria donde se encuentran alojados los tres nodos
    printf("\n%p", cabeza);
    printf("\n%p", segundoNodo);
    printf("\n%p", tercerNodo);

    if (cabeza != NULL && segundoNodo != NULL && tercerNodo != NULL) { //¿hubo espacio disponible en memoria?
        printf("\nPunteros creados");  //si hubo memoria disponible y los espacios para los nodos fueron creados imprimirlo
        cabeza->dato = 1;  //En el miembro 'dato' del nodo 'cabeza' insertamos el valor 1
        cabeza->siguienteNodo = segundoNodo; //Enlazamos el primer nodo con el segundo nodo
                                             //el campo puntero 'siguienteNodo' del nodo 'cabeza'
                                             //apunta a la dirección de memoria del 'segundoNodo'

        printf("\n%p", cabeza->siguienteNodo);  //imprime la dirección de memoria ocupada por el segundo nodo

    /* El valor 1 ha sido asignado al campo 'dato' del primer bloque. (bloque apuntado por la cabeza).
    Y el campo de tipo puntero 'siguienteNodo del primer bloque apunta a la dirección de memoria ocupada por el segundo nodo
    (segundo bloque).
    Ahora ambos nodos están enlazados.

      cabeza      segundoNodo      tercerNodo
        |              |              |
        |              |              |
    +---+---+     +----+----+     +-----+----+
    | 1  | o----->| #  | #  |     |  #  | #  |
    +---+---+     +----+----+     +-----+----+
  */

    //asignar un valor al segundo  nodo
    segundoNodo->dato = 2;

    //enlazar el segundo nodo con el tercer nodo
    segundoNodo->siguienteNodo = tercerNodo;

    /* El valor 2 ha sido asignado al campo 'dato' del segundo bloque. (bloque apuntado por el segundo nodo).
    Y el campo de tipo puntero 'siguienteNodo del segundo bloque apunta a la dirección de memoria ocupada por el tercer nodo
    (tercer bloque).
    Ahora los tres nodos están enlazados.

      cabeza      segundoNodo     tercerNodo
        |             |              |
        |             |              |
    +---+---+     +---+---+     +----+----+
    | 1  | o----->| 2 | o-----> |  # |  # |
    +---+---+     +---+---+     +----+----+      */

    //asignar un valor al tercer  nodo
    tercerNodo->dato = 3;

    //enlazar el segundo nodo con el tercer nodo
    tercerNodo->siguienteNodo = NULL;

     /* El valor 3 ha sido asignado al campo 'dato' del tercer bloque. (bloque apuntado por el tercer nodo).
    Y el campo de tipo puntero 'tercerNodo del tercer bloque apunta a NULL para indicar que la lista enlazada
    termina aquí.

     Finalmente, tenemos la siguiente lista

           cabeza
             |
             |
        +---+---+     +---+---+       +----+------+
        | 1  | o----->|  2  | o-----> |  3 | NULL |
        +---+---+     +---+---+       +----+------+


    Tenga en cuenta que solamente con la cabeza de la lista será suficiente para representar la lista completa.
    Podemos recorrer la lista enlazada completamente siguiendo los punteros de cada nodo.    */

    return 0;
    }
    else {
        printf("Error");
        return 1;
    }
}
