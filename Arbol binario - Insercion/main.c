//Programa que demuestra la operación de inserción de un nodo en un árbol de búsqueda binaria.

//Un árbol binario es aquel cuyos elementos tienen como máximo 2 hijos.
//Dado que cada elemento en un árbol binario puede tener solo 2 hijos, normalmente los llamamos hijo izquierdo y derecho.
//Se llama nodo hoja, al nodo que no tiene hijos.

//Los nodos de un árbol contienen dos o más enlaces (ninguno, uno o ambos pueden ser NULL).

/*Un árbol de búsqueda binario (no debe tener valores suplicados), tiene la característica de que
los valores en cualquier subárbol izquierdo son menores que el valor existente en su nodo padre,
y los valores en cualquier subárbol derecho son mayores que el valor existente en su nodo padre.
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
  /* Vamos a crear el siguiente BST (Árbol de Búsqueda Binaria)
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */

   struct nodo* raiz = NULL;  //creamos un nodo raiz del comienzo del árbol, y le asignamos el valor null
   raiz = insertar(raiz, 50);  //En el nodo raiz introducimos el valor 50
   //Introducimos en el árbol binario 6 nodos más
   insertar(raiz, 30);
   insertar(raiz, 20);
   insertar(raiz, 40);
   insertar(raiz, 70);
   insertar(raiz, 60);
   insertar(raiz, 80);

   //imprimir en orden transversal los elementos del árbol binario
   imprimirenordentransversal(raiz);

   return 0;
}

//Función introducir nodo en árbol binario
/* Una útil función para introducir
   un nuevo nodo con un valor dado en
   un árbol binario

   La  función retorna un puntero nodo
*/
struct nodo* insertar(struct nodo* nodo, int valor)
{
    /* Si el árbol está vacío, retornar un nuevo nodo */
    if (nodo == NULL)
        return nuevoNodo(valor); //se llama a la función nuevoNodo()

    /* Si el árbol no está vacío, recorrer el árbol hacía abajo */
    if (valor < nodo->valor)
        nodo->izquierdo = insertar(nodo->izquierdo, valor);
    else if (valor > nodo->valor)
        nodo->derecho = insertar(nodo->derecho, valor);

    /* retorna el puntero nodo (sin cambios) */
    return nodo;
}

//Función crear nuevo nodo
// Una útil función para crear un nuevo nodo para el árbol de búsqueda binaria
//La función devuelve un puntero nodo
//La función recibe el valor que tendrá el nodo
struct nodo* nuevoNodo(int valorElemento)
{
    struct nodo* temporal
        = (struct nodo*)malloc(sizeof(struct nodo));  //creamos un nodo temporal
    temporal->valor = valorElemento; //introducimos el valor que tendrá el nuevo nodo del árbol
    temporal->izquierdo = temporal->derecho = NULL; //hacemos que los campos de siguientes nodos del árbol (árbol hijos)
                                                    //apunten a NULL
    return temporal; //retornamos el nodo creado
}

//Función imprimir todos los elementos del árbol binario
//Una útil función para recorrer un árbol binario en orden transversal
void imprimirenordentransversal(struct nodo* raiz)
{
    if (raiz != NULL) {
        imprimirenordentransversal(raiz->izquierdo);
        printf("%d \n", raiz->valor);
        imprimirenordentransversal(raiz->derecho);
    }
}
