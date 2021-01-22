//Programa que demuestra la operaci�n de inserci�n de un nodo en un �rbol de b�squeda binaria y su posterior eliminaci�n.

//Un �rbol binario es aquel cuyos elementos tienen como m�ximo 2 hijos.
//Dado que cada elemento en un �rbol binario puede tener solo 2 hijos, normalmente los llamamos hijo izquierdo y derecho.
//Se llama nodo hoja, al nodo que no tiene hijos.

//Los nodos de un �rbol contienen dos o m�s enlaces (ninguno, uno o ambos pueden ser NULL).

/*En el caso de la eliminaci�n de un elemento, tenemos varias posibilidades:

1) Si el nodo que se va a eliminar es una hoja (nodo que no tiene hijos): simplemente se eliminar� del �rbol.

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
y eliminar el nodo sucesor. Tenga en cuenta que tambi�n se puede utilizar el orden predecesor.

              50                               60
            /    \         eliminar(50)      /    \
          40      70       --------->       40    70
                 /  \                               \
                60   80                             80

Lo importante a tener en cuenta es que el orden sucesor solo se necesita cuando el hijo derecho no est� vac�o. E
n este caso particular, el orden sucesor se puede obtener encontrando el valor m�nimo en el hijo derecho del nodo.
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

//Funci�n buscar nodo con valor m�nimo
//Dado un �rbol de b�squeda binario no vac�o, devolver el nodo con el valor m�nimo encontrado en ese �rbol.
//Tenga en cuenta que no es necesario buscar en todo el �rbol.
struct nodo* nodoDeValorMinimo(struct nodo* nodo)
{
    struct nodo* actual = nodo;

    /* bucle hacia abajo para encontrar la hoja m�s a la izquierda */
    while (actual && actual->izquierdo != NULL)
        actual = actual->izquierdo;

    return actual;
}

//Funci�n eliminar valor de nodo, y devolver la nueva ra�z
//Dado un �rbol de b�squeda binario y un valor, esta funci�n elimina el valor y devuelve la nueva ra�z
struct nodo* eliminarNodo(struct nodo* raiz, int valor)
{
    //caso base
    if (raiz == NULL)
        return raiz;

    //Si la clave que se va a eliminar tiene un valor m�s bajo que la clave de la ra�z,
    //entonces se encuentra en el sub�rbol izquierdo
    if (valor < raiz->valor)
        raiz->izquierdo = eliminarNodo(raiz->izquierdo, valor);

    //Si la clave que se va a eliminar tiene un valor m�s alto que la clave de la ra�z,
    //entonces se encuentra en el sub�rbol derecho
    else if (valor > raiz->valor)
        raiz->derecho = eliminarNodo(raiz->derecho, valor);

    //Si el valor es el mismo que el de la ra�z, entonces este es el nodo que se eliminar�
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
        //Obtener en orden el sucesor (el valor m�s peque�o en el sub�rbol derecho)
        struct nodo* temporal = nodoDeValorMinimo(raiz->derecho);

        //Copiar el contenido en orden del sucesor en este nodo
        raiz->valor = temporal->valor;

        //Eliminar en orden el sucesor
        raiz->derecho = eliminarNodo(raiz->derecho, temporal->valor);
    }
    return raiz;
}
