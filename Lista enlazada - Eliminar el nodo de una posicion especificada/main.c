//Lista enlazada a la que se le añade un nodo al inicio de la lista.
//A continuación, se elimina el nodo de la posición especificada

#include <stdio.h>
#include <stdlib.h>

//Estructura Nodo que define cada miembro del que está compuesto cada elemento de un Nodo
struct Nodo {
    int dato;  //variable que guarda un valor de tipo entero
    struct Nodo* siguienteNodo;  //puntero de tipo Nodo que apunta al siguiente nodo
};

//Funciones prototipo
void insertarAlInicio(struct Nodo** cabeza_ref, int dato); //Función insertar un nuevo nodo al inicio de la lista enlazada
void imprimirLista(struct Nodo* n); //Función imprimir los valores (dato) de todos los nodos de la lista
void eliminarNodoPosicionEspecificada(struct Nodo** cabeza_ref, int posicion); //Eliminar el nodo de la posicion dada

//Inicio del programa
int main()
{
    /* Comenzar con una lista vacía */
    struct Nodo* cabeza = NULL;

    puts("Situacion de la Lista al inicio");
    puts("-------------------------------");

    //imprime dirección de memoria del inicio de la lista
    printf("Direccion de memoria del inicio de la lista: %p\n", &cabeza);
    //imprime dirección de memoria a la que apunta la cabeza de la lista
    printf("Direccion de memoria a la que apunta la cabeza de la lista: %p\n", cabeza);

    //Insertamos los siguientes nodos al inicio de la lista
    insertarAlInicio(&cabeza, 7);
//    insertarAlInicio(&cabeza, 1);
//    insertarAlInicio(&cabeza, 3);
//    insertarAlInicio(&cabeza, 2);
    imprimirLista(cabeza);

    //Pedimos eliminar el nodo que ocupa la posición 0 en la lista enlazada, que es el nodo cabeza de la lista
    eliminarNodoPosicionEspecificada(&cabeza, 0);

    printf("\nEliminar el nodo cabeza de la lista");
    imprimirLista(cabeza);

    return 0;
}

//Función insertarAlInicio()
//La función inserta un nodo al inicio de la lista enlazada
void insertarAlInicio(struct Nodo** cabeza_ref, int dato) {

    puts("\n\nSituacion de la Lista cuando entra a la funcion insertarAlInicio");
    puts("-------------------------------------------------------------------");

    //Imprime la dirección de memoria del puntero que apunta al inicio de la lista (referencia a la cabeza)
    printf("Direccion de memoria del inicio de la lista (recibida como argumento -> cabeza_ref): %p\n", cabeza_ref);

    //Asignar nodo
    struct Nodo* nuevo_nodo = (struct Nodo*)malloc(sizeof(struct Nodo));

    printf("\nDireccion de memoria del NUEVO NODO creado para que sea la nueva cabeza de la lista: %p\n", *nuevo_nodo);

    //Establecer el dato de tipo int en el nuevo nodo creado
    nuevo_nodo->dato = dato;

    //Hacer que el puntero 'siguienteNodo' del nuevo nodo 'nuevo_nodo' apunte a la que era anteriormente la cabeza de la lista
    //para enlazar ambos nodos
    nuevo_nodo->siguienteNodo = (*cabeza_ref);

    //Mover la 'cabeza' para que apunte al nuevo nodo
    (*cabeza_ref) = nuevo_nodo;

    printf("\n\nNuevo dato del nuevo nodo creado (pasado como argumento -> dato): %d\n", nuevo_nodo->dato);
    printf("Direccion de memoria del NUEVO NODO creado que es ahora la direccion de la CABEZA de la lista:%p\n", *nuevo_nodo);
    printf("Direccion de memoria a la que apunta el NUEVO NODO creado ('siguienteNodo') que sera (NULL):%p\n", nuevo_nodo->siguienteNodo);
}

//Función imprimirLista()
//Imprime el dato (valor de tipo int) de todos los nodos existentes en la lista enlazada
void imprimirLista(struct Nodo* n) {

    puts("\n\nImpresion de todos los nodos existentes en la lista:");
    puts("-----------------------------------------------------");
    while(n != NULL) {
        printf("%d", n->dato);
       n = n->siguienteNodo;
    }

    puts("\n\n");
}

//Función eliminarNodoPosicionEspecificada()
//Eliminar el nodo de la posición espcificada
/* Dada una referencia (puntero a puntero) al encabezado de una lista y una posición, eliminar el nodo de la posición dada */
void eliminarNodoPosicionEspecificada(struct Nodo** cabeza_ref, int posicion) {

    //Comprobar si la lista está vacía
    if (*cabeza_ref == NULL) {
      return;
    }

    //Guardar el Nodo cabeza en un nuevo noodo temporal
    struct Nodo* temporal = *cabeza_ref;

    printf("Direccion de memoria a la que apunta el nodo temporal que acabamos de crear: %p\n\n", *temporal);

    //Si la posición dada es 0, significa que se debe eliminar el nodo cabeza
    if (posicion == 0)
    {
        *cabeza_ref = temporal->siguienteNodo;  //Cambiar cabeza. Apunta a NULL, ya que temporal->siguienteNodo apunta a NULL
        printf("Direccion de memoria temporal->siguienteNodo: %p", temporal->siguienteNodo); //apunta a NULL
        free(temporal);  //liberar de memoria la antigua cabeza
        return;
    }

    //Buscar el nodo previo al nodo que se va a eliminar
    for (int i = 0; temporal != NULL && i < posicion -1; i++)  //i < posicion - 1 es porque buscamos el nodo anterior al que queremos eliminar
         temporal = temporal->siguienteNodo;  //avanzamos una posicion en la búsqueda

    //Si la posición es más que el número de nodos
    if (temporal == NULL || temporal->siguienteNodo == NULL) {
         return;
    }

    //Nodo temporal->siguienteNodo es el nodo a ser eliminado
    //Almacenar el puntero al siguiente nodo al que se eliminará
    //Como temporal->siguienteNodo apunta al nodo previo a ser eliminado,
    //tenemos que almacenar en el nodo siguiente que creamos la dirección de siguienteNodo->siguienteNodo
    //para vincularlo al siguiente nodo que permanecerá en la lista (el siguiente nodo al nodo que será eliminado)
    struct Nodo *siguiente = temporal->siguienteNodo->siguienteNodo;

    //Desvincular el nodo de la lista enlazada
    free(temporal->siguienteNodo);  //Liberar memoria

    temporal->siguienteNodo = siguiente;  //Desvincular el nodo eliminado de la lista
}
