//Programa que crea una lista enlazada compuesta por cuatro nodos que se añadirán como primer elemento de la lista
//y que posteriormente elimina todos los nodos de la lista que hemos creado previamente, eliminando así la lista enlazada.

#include <stdio.h>
#include <stdlib.h>

//Estructura Nodo que define cada miembro del que está compuesto cada elemento de un Nodo
struct Nodo {
    int dato;  //variable que guarda un valor de tipo entero
    struct Nodo* siguienteNodo;  //puntero de tipo Nodo que apunta al siguiente nodo
};

//Funciones prototipo
void insertarAlInicio(struct Nodo** cabeza_ref, int nuevo_dato); //Función insertar un nuevo nodo al inicio de la lista enlazada
void imprimirLista(struct Nodo *n); //Función imprimir los valores (dato) de todos los nodos de la lista
void eliminarLista(struct Nodo** cabeza_ref); //Función eliminar la lista que recibe el puntero que apunta a la lista enlazada

//Inicio del programa
int main()
{
    /* Comenzar con una lista vacía */
    struct Nodo* cabeza = NULL;

    //Insertamos los siguientes nodos al inicio de la lista
    insertarAlInicio(&cabeza, 7);
    insertarAlInicio(&cabeza, 1);
    insertarAlInicio(&cabeza, 3);
    insertarAlInicio(&cabeza, 2);

    //Recorrer los elementos de la lista enlazada
    puts("Lista enlazada creada: ");
    imprimirLista(cabeza);

    //Eliminar lista
    eliminarLista(&cabeza);

    //intentamos imprimir la lista enlazada que ahora está vacía
    puts("\n");
    imprimirLista(cabeza);

    //imprimir mensaje para hacer saber que la lista enlazada ha sido eliminada y liberada de memoria
    printf("\n Lista enlazada eliminada\n");
    return 0;
}

//Función insertarAlInicio
//Inserta un nodo al inicio de la lista
//Dada una referencia (puntero a puntero) a la cabeza de una lista enlazada y un dato de tipo int
void insertarAlInicio(struct Nodo** cabeza_ref, int nuevo_dato) {

    //Asignar nodo
    struct Nodo* nuevo_nodo = (struct Nodo*)malloc(sizeof(struct Nodo));

    //Establecer el dato de tipo int del nodo
    nuevo_nodo->dato = nuevo_dato;

    //Hacer que el puntero 'siguienteNodo' del nuevo nodo 'nuevo_nodo' apunte al que era anteriormente el nodo cabeza
    //para enlazar ambos nodos
    nuevo_nodo->siguienteNodo = (*cabeza_ref);

    //Mover la 'cabeza' para que apunte al nuevo nodo
    (*cabeza_ref) = nuevo_nodo;
}

//Función imprimirLista
//Imprimir los valores de todos los nodos
void imprimirLista(struct Nodo *n) {
    //mientras nodo sea distinto de NULL
    while (n != NULL) {
        printf("%d ", n->dato);  //imprimir el valor del nodo
        n = n->siguienteNodo;  //pasar al siguiente nodo
    }
}

//Función eliminarNodo
//Eliminar un nodo de la lista enlazada
/*Dada una referencia (puntero a puntero) a la cabeza de una lista enlazada y un dato 'clave' de tipo int a buscar para eliminar,
  eliminar la primera aparición de dicho valor (dato de tipo int) en la lista enlazada*/
  void eliminarLista(struct Nodo** cabeza_ref) {

   /* dereferenciar cabeza_ref para obtener la dirección real de la cabeza */
   struct Nodo* actual = *cabeza_ref;
   struct Nodo* siguiente;  //nodo que apunta al siguiente nodo del nodo actual donde estemos

   //mientras no lleguemos al final de la lista enlazada
   while (actual != NULL) {
    siguiente = actual->siguienteNodo;  //El nodo siguiente apunta al siguiente nodo del actual donde nos encontremos
    free(actual); //liberamos de memoria el nodo actual
    actual = siguiente; //avanzamos un nodo, ya que el nodo siguiente mantiene la dirección del siguienteNodo al actual que borramos
   }

   /* dereferenciamos cabeza_ref para modificar a la cabeza real devuelta en la llamada a la función*/
   *cabeza_ref = NULL;
  }

