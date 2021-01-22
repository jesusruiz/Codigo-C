//Programa que demuestra la operaci�n de inserci�n de un nodo en un �rbol de b�squeda binaria.

//Un �rbol binario es aquel cuyos elementos tienen como m�ximo 2 hijos.
//Dado que cada elemento en un �rbol binario puede tener solo 2 hijos, normalmente los llamamos hijo izquierdo y derecho.
//Se llama nodo hoja, al nodo que no tiene hijos.

//Los nodos de un �rbol contienen dos o m�s enlaces (ninguno, uno o ambos pueden ser NULL).

/*Un �rbol de b�squeda binario (no debe tener valores suplicados), tiene la caracter�stica de que
los valores en cualquier sub�rbol izquierdo son menores que el valor existente en su nodo padre,
y los valores en cualquier sub�rbol derecho son mayores que el valor existente en su nodo padre.
*/

/*

         100                                  100
        /   \        Insertar 40             /   \
      20     500    ----------->           20     500
     /  \                                 /  \
    10   30                             10    30
                                               \
                                                40

*/

#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int valor;  //valor del nodo
    struct nodo *izquierdo, *derecho;  //punteros al nodo hijo izquierdo y derecho
};

//Funciones prototipo
struct nodo* insertar(struct nodo* nodo, int valor);
struct nodo* nuevoNodo(int valorElemento);
void imprimirenordentransversal(struct nodo* raiz);

//Inicio del programa
int main()
{
  /* Vamos a crear el siguiente BST (�rbol de B�squeda Binaria)
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */

   struct nodo* raiz = NULL;  //creamos un nodo raiz del comienzo del �rbol, y le asignamos el valor null
   raiz = insertar(raiz, 50);  //En el nodo raiz introducimos el valor 50
   //Introducimos en el �rbol binario 6 nodos m�s
   insertar(raiz, 30);
   insertar(raiz, 20);
   insertar(raiz, 40);
   insertar(raiz, 70);
   insertar(raiz, 60);
   insertar(raiz, 80);

   //imprimir en orden transversal los elementos del �rbol binario
   imprimirenordentransversal(raiz);

   return 0;
}

//Funci�n introducir nodo en �rbol binario
/* Una �til funci�n para introducir
   un nuevo nodo con un valor dado en
   un �rbol binario

   La  funci�n retorna un puntero nodo
*/
struct nodo* insertar(struct nodo* nodo, int valor)
{
    /* Si el �rbol est� vac�o, retornar un nuevo nodo */
    if (nodo == NULL)
        return nuevoNodo(valor); //se llama a la funci�n nuevoNodo()

    /* Si el �rbol no est� vac�o, recorrer el �rbol hac�a abajo */
    if (valor < nodo->valor)
        nodo->izquierdo = insertar(nodo->izquierdo, valor);
    else if (valor > nodo->valor)
        nodo->derecho = insertar(nodo->derecho, valor);

    /* retorna el puntero nodo (sin cambios) */
    return nodo;
}

//Funci�n crear nuevo nodo
// Una �til funci�n para crear un nuevo nodo para el �rbol de b�squeda binaria
//La funci�n devuelve un puntero nodo
//La funci�n recibe el valor que tendr� el nodo
struct nodo* nuevoNodo(int valorElemento)
{
    struct nodo* temporal
        = (struct nodo*)malloc(sizeof(struct nodo));  //creamos un nodo temporal
    temporal->valor = valorElemento; //introducimos el valor que tendr� el nuevo nodo del �rbol
    temporal->izquierdo = temporal->derecho = NULL; //hacemos que los campos de siguientes nodos del �rbol (�rbol hijos)
                                                    //apunten a NULL
    return temporal; //retornamos el nodo creado
}

//Funci�n imprimir todos los elementos del �rbol binario
//Una �til funci�n para recorrer un �rbol binario en orden transversal
void imprimirenordentransversal(struct nodo* raiz)
{
    if (raiz != NULL) {
        imprimirenordentransversal(raiz->izquierdo);
        printf("%d \n", raiz->valor);
        imprimirenordentransversal(raiz->derecho);
    }
}
