//Programa que crea una lista enlazada compuesta por cuatro nodos que se añadirán como primer elemento de la lista
//y que elimina un nodo especificado

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
void eliminarNodo(struct Nodo** cabeza_ref, int clave); //Función eliminar un nodo cuyo valor (dato) coincida con el especificado en el segundo argumento de la función

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

    //Eliminar nodo
    eliminarNodo(&cabeza, 1);

    //Recorrer los elementos de la lista enlazada
    puts("\nLista enlazada tras eliminar el nodo que contenia el valor clave (dato) 1: ");
    imprimirLista(cabeza);
    puts("");
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
  void eliminarNodo(struct Nodo** cabeza_ref, int clave) {

    struct Nodo* temporal = *cabeza_ref;  //Nodo temporal que apunta al puntero del primer elemento (cabeza) de la lista enlazada
    struct Nodo *previo;

    //Si el propio nodo 'cabeza' tiene el valor que se quiere eliminar
    if (temporal != NULL && temporal->dato == clave) {
        *cabeza_ref = temporal->siguienteNodo;  //Cambiar la cabeza
        free(temporal);  //liberar memoria de la vieja cabeza
        return;
    }

    //Buscar la clave a elimina,
    //realizar un seguimiento del nodo previo al que buscamos eliminar, ya que tenemos que cambiar 'previo->siguienteNodo'
    while (temporal != NULL && temporal->dato != clave) {
        previo = temporal;
        temporal = temporal->siguienteNodo;
    }

    //Si el valor 'clave' no fue encontrado en la lista enlazada
    if (temporal == NULL)
        return;

    //Desvincular el nodo de la lista enlazada
    previo->siguienteNodo = temporal->siguienteNodo;

    free(temporal); //Liberar memoria
  }

