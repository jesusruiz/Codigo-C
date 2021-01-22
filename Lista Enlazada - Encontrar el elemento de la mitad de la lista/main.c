//Lista enlazada - Encontrar el elemento de la mitad de la lista

/*M�todo 1:
Recorrer toda la lista enlzada y contar el n�mero de nodos existentes.
Posteriormente, recorrer la lista enlazada nuevamente hasta contador / 2 y devolver el nodo en contador / 2.
*/

/*M�todo 2:
Recorrer la lista enlazada usando dos punteros.
Mover un puntero (avance lento) a trav�s de los nodos uno por uno,
Mover el otro puntero (avance r�pido) cada dos nodos.
Cuando el puntero de avance r�pido llega al final, el puntero lento llegar� al centro de la lista enlazada.
*/

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
void imprimirNodoMedio(struct Nodo* cabeza); //Funci�n que busca el Nodo medio (nodo central) de la lista enlazada

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

    //Buscar si existe alg�n elemento que contenga el valor 21 dentro de la lista
    //y devolver "Si" si se encuentra alguno, o "No" si no se encuentra (se utiliza un operador ternario)
    imprimirNodoMedio(cabeza);
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

//Funci�n que imprime el Nodo medio (Nodo central) de una lista enlazada
void imprimirNodoMedio(struct Nodo* cabeza) {

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
        }
        printf("El Nodo de la mitad de la lista tiene el valor: [%d]\n\n", ptrAvanceLento->dato);
    }
}
