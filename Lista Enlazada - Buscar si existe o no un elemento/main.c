//Programa que crea una lista enlazada compuesta por cuatro nodos que se añadirán como primer elemento de la lista.
//Posteriormente, se pedirá que se busque en la lista el valor de un elemento y se devuelva true si existe dentro de la lista
//o false en caso contrario

#include <stdbool.h>
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
bool buscar(struct Nodo* cabeza, int x); //Función que busca el valor de un elemento (int x)
                                         //y devuelve (bool) true si existe dentro de la lista, o false si no existe

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

    puts("\n");

    //Buscar si existe algún elemento que contenga el valor 21 dentro de la lista
    //y devolver "Si" si se encuentra alguno, o "No" si no se encuentra (se utiliza un operador ternario)
    buscar(cabeza, 21)? printf("Se encontro el valor en la lista\n") : printf("No se encontro el valor en la lista\n");
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

//Función buscar un valor para ver si existe dentro de la lista
//Se devuelve true si se encuentra
//false en caso contrario
bool buscar(struct Nodo* cabeza, int x) {

    struct Nodo* actual = cabeza;  //Inicializamos el puntero de tipo Nodo 'actual' pàra que apunte a la cabeza de la lista enlazada

    //mientras no alcancemos el último Nodo de la lista enlazada
    while (actual != NULL)
    {
        //si el valor que hemos pasado a la función 'x', es igual al valor que almacena el Nodo actual que estamos revisando
        if (actual->dato == x)
            //retornar valor 'true'
            return true;
        //en caso contrario, avanzar al siguiente Nodo de la lista enlazada
        actual = actual->siguienteNodo;
    }
    //si se alcanza este punto, es porque no se ha encontrado el valor pasado a la función 'x' dentro de la lista enlazada
    //por lo tanto, se devuelve 'false'
    return false;
}
