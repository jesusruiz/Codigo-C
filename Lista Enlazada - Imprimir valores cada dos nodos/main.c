#include <stdio.h>
#include <stdlib.h>

//Estructura Nodo que define cada miembro del que está compuesto cada elemento de un Nodo
struct Nodo {
    int dato;  //variable que guarda un valor de tipo entero
    struct Nodo* siguienteNodo;  //puntero de tipo Nodo que apunta al siguiente nodo
};

//Funciones prototipo

void insertarAlInicio(struct Nodo** cabeza_ref, int dato); //Función insertar un nuevo nodo al inicio de la lista enlazada
void imprimirCadaDosNodos(struct Nodo* n);  //Función imprimir los valores (dato) de cada dos nodos de la lista

int main()
{
    /* Comenzar con una lista vacía */
    struct Nodo* cabeza = NULL;

    insertarAlInicio(&cabeza, 7);
    insertarAlInicio(&cabeza, 6);
    insertarAlInicio(&cabeza, 5);
    insertarAlInicio(&cabeza, 4);
    insertarAlInicio(&cabeza, 3);
    insertarAlInicio(&cabeza, 2);
    insertarAlInicio(&cabeza, 1);
    insertarAlInicio(&cabeza, 0);

    puts("Valores existentes en la lista cada dos nodos:\n ");
    imprimirCadaDosNodos(cabeza);
}

//Función insertarAlInicio()
//La función inserta un nodo al inicio de la lista enlazada
void insertarAlInicio(struct Nodo** cabeza_ref, int dato) {

    //Asignar nodo
    struct Nodo* nuevo_nodo = (struct Nodo*)malloc(sizeof(struct Nodo));

    //Establecer el dato de tipo int en el nuevo nodo creado
    nuevo_nodo->dato = dato;

    //Hacer que el puntero 'siguienteNodo' del nuevo nodo 'nuevo_nodo' apunte a la que era anteriormente la cabeza de la lista
    //para enlazar ambos nodos
    nuevo_nodo->siguienteNodo = (*cabeza_ref);

    //Mover la 'cabeza' para que apunte al nuevo nodo
    (*cabeza_ref) = nuevo_nodo;
}

//Función imprimirCadaDosNodos()
//Imprimir el valor de cada dos nodos de la lista enlazada
void imprimirCadaDosNodos(struct Nodo* n) {

    while (n != NULL) {
        printf("%d ", n->dato);
        n= n->siguienteNodo->siguienteNodo;
    }
}
