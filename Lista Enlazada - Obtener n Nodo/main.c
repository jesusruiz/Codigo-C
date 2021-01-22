//Programa que crea una lista enlazada compuesta por cuatro nodos que se añadirán como primer elemento de la lista.
//Posteriormente, se utiliza una función para acceder y obtener al valor de n Nodo (siendo n el número del Nodo a acceder)

#include <assert.h>
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
int obtenerNodo(struct Nodo* cabeza, int indice); //Función obtenerNodo. Accede al número de Nodo pasado en la variable int indice

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

    //Acceder al Nodo número 3 de la lista enlazada
    printf("El valor guardado en el Nodo 3 (empezando por el elemento 0) es: %d\n", obtenerNodo(cabeza, 3));
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

//Función obtenerNodo
//Obtener el valor que tiene el número de Nodo pasado en la función (int indice)
 int obtenerNodo(struct Nodo* cabeza, int indice) {

   /* El nodo actual debe apuntar a la cabeza de la lista enlazada */
   struct Nodo* actual = cabeza;

  //el índice del nodo que estamos viendo actualmente
   int contador = 0;
   //mientras el nodo actual no apunte a NULL (no se ha llegado al final de la lista enlazada)
   while (actual != NULL) {
       //si contador es igual al indice pasado (el número de nodo al que queremos acceder)
        if (contador == indice)
            return (actual->dato);  //retornar el campo valor del Nodo
        //de lo contrario
        contador++; //sumamos 1 a la variable contador
        actual = actual->siguienteNodo;  //avanzamos al siguiente nodo
   }

   /* si llegamos a esta línea, se estaba solicitando un elemento inexistente, por lo que no es posible devolver nada */
   //Assert es una macro que se usa para verificar condiciones específicas en tiempo de ejecución
   //(cuando un programa está en ejecución) y es muy útil mientras se depura un programa.
   //Para utilizar la función assert(), hay que incluir al inicio del programa la cabecera assert.h
    assert(0);
  }

