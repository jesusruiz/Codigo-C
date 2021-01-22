//Crear una lista enlazada simple compuesta por 3 nodos y recorrerla imprimiendo sus valores

#include <stdio.h>
#include <stdlib.h>

//Estructura Nodo
struct Nodo {
    int dato;  //campo dato de tipo int
    struct Nodo* siguienteNodo;  //campo puntero que apunta al siguiente nodo
};

//Función prototipo
//Esta función imprime el contenido de la lista enlazada comenzando desde el nodo dado
void imprimirListaEnlazada(struct Nodo* n);

int main()
{
    ////Definicion de tres variables puntero de tipo Nodo
    struct Nodo* cabeza = NULL;  //primer nodo que apunta a un valor NULL
    struct Nodo* segundoNodo = NULL;  //segundo nodo que apunta a un valor NULL
    struct Nodo* tercerNodo = NULL;  //tercer nodo que apunta a un valor NULL

    //asignar los 3 nodos definidos en la pila. la función malloc() pide la memoria requerida
    cabeza = (struct Nodo*)malloc(sizeof(struct Nodo));
    segundoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    tercerNodo = (struct Nodo*)malloc(sizeof(struct Nodo));

    //Si hay memoria disponible para crear los tres nodos
    if (cabeza != NULL & segundoNodo != NULL & tercerNodo != NULL) {
        //introducir los datos y enlazar los nodos unos con otros
        cabeza->dato = 1;
        cabeza->siguienteNodo = segundoNodo;
        segundoNodo->dato = 2;
        segundoNodo->siguienteNodo = tercerNodo;
        tercerNodo->dato = 3;
        tercerNodo->siguienteNodo = NULL;
    }
    //si no hay memoria disponible
    else {
        printf("Error. No habia memoria suficiente disponible");
        return 1;
    }

    imprimirListaEnlazada(cabeza); //imprimir todos los elementos de la lista enlazada comenzando desde el nodo 'cabeza'
}

//Función imprimirListaEnlazada
//Esta función imprime el contenido de la lista enlazada comenzando desde el nodo dado (cabeza)
void imprimirListaEnlazada(struct Nodo* n) {
    while(n != NULL) {
        printf("%d ", n->dato);
        n= n->siguienteNodo;
    }
}
