//Detectar loop en una lista enlazada.
//Se produce un loop, cuando hay un Nodo de la lista que apunta a otro Nodo anterior en la lista.

//Para resolver este ejercicio:
//1. Recorrer la lista enlazada usando dos punteros.
//2. El primer puntero (ptrAvanceLento) recorrer� la lista Nodo a Nodo
//El otro puntero (ptrAvanceRapido) recorrer� la lista cada dos Nodos
//3. Si estos dos punteros se encuentran en un mismo nodo, entonces hay un bucle (loop) en la lista enlazada.
//Si los punteros no se encuentran, la lista vinculada no tiene un bucle.

#include <stdio.h>
#include <stdlib.h>

//Estructura Nodo que define cada miembro del que est� compuesto cada elemento de un Nodo
struct Nodo {
    int dato;  //variable que guarda un valor de tipo entero
    struct Nodo* siguienteNodo;  //puntero de tipo Nodo que apunta al siguiente nodo
};

//Funciones prototipo
void insertarAlInicio(struct Nodo** cabeza_ref, int nuevo_dato); //Funci�n insertar un nuevo nodo al inicio de la lista enlazada
int detectarLoop(struct Nodo* cabeza); //Funci�n que busca si hay un loop en la lista enlazada

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

    /* Crear un loop para testear el c�digo */
    cabeza->siguienteNodo->siguienteNodo->siguienteNodo->siguienteNodo = cabeza; //el nodo 4 apuntar� a la cabeza

    //Si la funci�n detectarLoop devuelve true (1), se ha detectado el loop
    if (detectarLoop(cabeza))
        printf("Loop encontrado\n");
        //de lo contrario la funci�n devuelve false (0), por no haberse detectado el loop
    else
        printf("Loop no encontrado\n");
    return 0;  //se sale del programa con c�digo 0
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

//Funci�n que devuelve al c�digo principal si se ha detectado o no un loop
int detectarLoop(struct Nodo* cabeza) {

    struct Nodo* ptrAvanceLento = cabeza;  //Nodo que recorrer� la lista enlazada nodo a nodo
    struct Nodo* ptrAvanceRapido = cabeza; //Nodo que recorrer� la lista enlazada cada dos nodos

    //si la cabeza sea distinto de NULL, significa que hay Nodos en la lista enlazada
    //y por tanto, podemos empezar a buscar el nodo central de la lista enlazada.
    if (cabeza != NULL)
    {
        //mientras el Nodo de avance r�pido no sea NULL, ni apunte (el siguiente Nodo) a NULL
        while (ptrAvanceRapido != NULL && ptrAvanceRapido->siguienteNodo != NULL)
        {
            //hacemos avanzar dos nodos al Nodo de avance r�pido
            //y un nodo al Nodo de avance lento
            ptrAvanceRapido = ptrAvanceRapido->siguienteNodo->siguienteNodo;
            ptrAvanceLento = ptrAvanceLento->siguienteNodo;
            //si ambos punteros coinciden en un mismo Nodo
            if (ptrAvanceLento == ptrAvanceRapido) {
                return 1;  //se devuelve 1 (true)
            }
        }
        return 0; //si el c�digo llega a este punto, no hay loop en la lista enlazada, y se devuelve 0 (false)
    }
}
