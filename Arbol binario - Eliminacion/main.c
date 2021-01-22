//Programa que demuestra la operación de inserción de un nodo en un árbol de búsqueda binaria y su posterior eliminación.

//Un árbol binario es aquel cuyos elementos tienen como máximo 2 hijos.
//Dado que cada elemento en un árbol binario puede tener solo 2 hijos, normalmente los llamamos hijo izquierdo y derecho.
//Se llama nodo hoja, al nodo que no tiene hijos.

//Los nodos de un árbol contienen dos o más enlaces (ninguno, uno o ambos pueden ser NULL).

/*En el caso de la eliminación de un elemento, tenemos varias posibilidades:

1) Si el nodo que se va a eliminar es una hoja (nodo que no tiene hijos): simplemente se eliminará del árbol.

              50                               50
           /     \         eliminar(20)      /    \
          30      70       --------->       30     70
         /  \    /  \                        \    /  \
       20   40  60   80                      40  60  80

2) Si el nodo que se va a eliminar solo tiene un hijo: copiar el hijo en el nodo y eliminar el hijo.


              50                               50
            /    \         eliminar(30)      /    \
          30      70       --------->       40     70
            \    /  \                            /  \
            40  60   80                         60   80

3) Si el nodo que se va a eliminar tiene dos hijos: Buscar en orden sucesor del nodo.
Copiar el contenido del orden sucesor en el nodo
y eliminar el nodo sucesor. Tenga en cuenta que también se puede utilizar el orden predecesor.

              50                               60
            /    \         eliminar(50)      /    \
          40      70       --------->       40    70
                 /  \                               \
                60   80                             80

Lo importante a tener en cuenta es que el orden sucesor solo se necesita cuando el hijo derecho no está vacío. E
n este caso particular, el orden sucesor se puede obtener encontrando el valor mínimo en el hijo derecho del nodo.
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
struct nodo* eliminarNodo(struct nodo* raiz, int valor);
struct nodo* nodoDeValorMinimo(struct nodo* nodo);

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

   //eliminar el nodo con valor 20
   printf("\nEliminar 20\n");
   raiz = eliminarNodo(raiz, 20);
   printf("Recorrido en orden del arbol modificado \n");
   imprimirenordentransversal(raiz);

   //eliminar el nodo con valor 30
   printf("\nEliminar 30\n");
   raiz = eliminarNodo(raiz, 30);
   printf("Recorrido en orden del arbol modificado \n");
   imprimirenordentransversal(raiz);

   //eliminar el nodo con valor 50
   printf("\nEliminar 50\n");
   raiz = eliminarNodo(raiz, 50);
   printf("Recorrido en orden del arbol modificado \n");
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

//Función buscar nodo con valor mínimo
//Dado un árbol de búsqueda binario no vacío, devolver el nodo con el valor mínimo encontrado en ese árbol.
//Tenga en cuenta que no es necesario buscar en todo el árbol.
struct nodo* nodoDeValorMinimo(struct nodo* nodo)
{
    struct nodo* actual = nodo;

    /* bucle hacia abajo para encontrar la hoja más a la izquierda */
    while (actual && actual->izquierdo != NULL)
        actual = actual->izquierdo;

    return actual;
}

//Función eliminar valor de nodo, y devolver la nueva raíz
//Dado un árbol de búsqueda binario y un valor, esta función elimina el valor y devuelve la nueva raíz
struct nodo* eliminarNodo(struct nodo* raiz, int valor)
{
    //caso base
    if (raiz == NULL)
        return raiz;

    //Si la clave que se va a eliminar tiene un valor más bajo que la clave de la raíz,
    //entonces se encuentra en el subárbol izquierdo
    if (valor < raiz->valor)
        raiz->izquierdo = eliminarNodo(raiz->izquierdo, valor);

    //Si la clave que se va a eliminar tiene un valor más alto que la clave de la raíz,
    //entonces se encuentra en el subárbol derecho
    else if (valor > raiz->valor)
        raiz->derecho = eliminarNodo(raiz->derecho, valor);

    //Si el valor es el mismo que el de la raíz, entonces este es el nodo que se eliminará
    else {
        //Nodo con solo un hijo o sin hijo
        if (raiz->izquierdo == NULL) {
            struct nodo* temporal = raiz->derecho;
            free(raiz);
            return temporal;
        }
        else if (raiz->derecho == NULL) {
            struct nodo* temporal = raiz->izquierdo;
            free(raiz);
            return temporal;
        }

        //nodo con dos hijos:
        //Obtener en orden el sucesor (el valor más pequeño en el subárbol derecho)
        struct nodo* temporal = nodoDeValorMinimo(raiz->derecho);

        //Copiar el contenido en orden del sucesor en este nodo
        raiz->valor = temporal->valor;

        //Eliminar en orden el sucesor
        raiz->derecho = eliminarNodo(raiz->derecho, temporal->valor);
    }
    return raiz;
}
