//Programa que crea una lista enlazada compuesta por cuatro nodos que se a�adir�n como primer elemento de la lista.
//Posteriormente, se recorre la lista de manera iterativa y recursiva para conocer el n�mero de Nodos existente en la lista.

#include <stdio.h>
#include <stdlib.h>

//Estructura Nodo que define cada miembro del que est� compuesto cada elemento de un Nodo
struct Nodo {
    int dato;  //variable que guarda un valor de tipo entero
    struct Nodo* siguienteNodo;  //puntero de tipo Nodo que apunta al siguiente nodo
};

//Funciones prototipo
void insertarAlInicio(struct Nodo** cabeza_ref, int nuevo_dato); //Funci�n insertar un nuevo nodo al inicio de la lista enlazada
void imprimirLista(struct Nodo *n); //Funci�n imprimir los valores (dato) de todos los nodos de la lista
int numeroDeNodos(struct Nodo* cabeza); //Funci�n obtener el n�mero de Nodos existentes en la lista enlazada (recursiva)

//Inicio del programa
int main()
{
    /* Comenzar con una lista vac�a */
    struct Nodo* cabeza = NULL;

    //Insertamos los siguientes nodos al inicio de la lista
    insertarAlInicio(&cabeza, 7);
    insertarAlInicio(&cabeza, 1);
    insertarAlInicio(&cabeza, 3);
    insertarAlInicio(&cabeza, 2);

    //Recorrer los elementos de la lista enlazada
    puts("Lista enlazada creada: ");
    imprimirLista(cabeza);

    puts("\n");

    //Conocer la longitud de la lista enlazada (n�mero de Nodos)
    printf("El numero de Nodos existente en la lista es: %d\n", numeroDeNodos(cabeza));
    return 0;
}

//Funci�n insertarAlInicio
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

//Funci�n imprimirLista
//Imprimir los valores de todos los nodos
void imprimirLista(struct Nodo *n) {
    //mientras nodo sea distinto de NULL
    while (n != NULL) {
        printf("%d ", n->dato);  //imprimir el valor del nodo
        n = n->siguienteNodo;  //pasar al siguiente nodo
    }
}

//Funci�n numeroDeNodos
//Obtener el n�mero de Nodos (elementos) de la lista enlazada
//Esta funci�n es recursiva
int numeroDeNodos(struct Nodo* cabeza) {

    //Caso base
    //si la cabeza de la lista apunta a NULL, se retorna 0
    if (cabeza == NULL) {
        return 0;
    }
    else {
        //en caso contrario, se retorna 1 + el numero de veces a la que llamamos a la funci�n numeroDeNodos()
        return 1 + numeroDeNodos(cabeza->siguienteNodo);
    }
}
