//Simple programa que crea una pila

#include <limits.h>  //se utiliza para determinar los límites establecidos de los tipos de datos.
#include <stdio.h>
#include <stdlib.h>

//Estructura autorreferencial
//Una estructura para representar una pila
struct NodoPila {
    int dato;  //define la información que almacenará el nodo (en este caso de tipo int)
    struct NodoPila* siguienteNodoPila;  //puntero de tipo nodoPila que apunta al siguiente nodo de la pila
};

//Funciones prototipo
void insertar(struct NodoPila** raiz, int dato);  //función que introduce un nodo en la pila. Recibe el puntero a la raiz de la pila
int eliminar(struct NodoPila** raiz); //función que elimina un nodo de la pila. Recibe el puntero a la raiz de la pila
int estaVacia(struct NodoPila* raiz); //función que comprueba si la pila contiene algún nodo. Recibe el puntero a la pila
int ultimoNodoIntroducidoEnPila(struct NodoPila* raiz);  //función que devuelve el siguiente elemento a la pila
struct NodoPila* nuevoNodo(int dato);  //función que crea un nodo nuevo

//INICIO DE PROGRAMA
int main()
{
    /* Comenzar con una pila vacía */
    struct NodoPila* raiz = NULL;

    //Introducimos tres nodos en la pila
    //Los nodos se crean todos al inicio de la pila (LIFO) - Último en entrar primero en salir
    //Por tanto, tenemos que pasar por referencia la dirección del puntero raiz a la función push()
    //junto con el valor entero a introducir en el nodo
    insertar(&raiz, 10);
    insertar(&raiz, 20);
    insertar(&raiz, 30);

    //salto de linea
    puts("\n");

    //Eliminar un elemento de la pila (se elimina el último elemento introducido) e imprimir el que era su valor
    printf("%d eliminado de la pila", eliminar(&raiz));

    //salto de linea
    puts("\n");

    printf("El valor del elemento situado mas arriba de la pila es %d\n", ultimoNodoIntroducidoEnPila(raiz));

    return 0;
}
//FIN DE PROGRAMA

//Función insertar Nodo en la pila
//Función que recibe el puntero a la pila y una variable tipo entero del dato que debe tener el nodo a introducir
void insertar(struct NodoPila** raiz, int dato)
{
    struct NodoPila* NodoPila = nuevoNodo(dato); //se llama a la función nuevoNodo() que crea el nodo antes de poder insertarlo
    printf("\nNodoPila %p\n", NodoPila);

    NodoPila->siguienteNodoPila = *raiz;  //hacemos que el nodo siguiente del nodo creado en la pila apunte a la raiz de la pila
    printf("\nNodoPila->siguienteNodoPila %p = *raiz %p\n", NodoPila->siguienteNodoPila, *raiz);

    *raiz = NodoPila; //hacemos que la raiz de la pila apunte ahora al nodo creado
    printf("\n*raiz %p = NodoPila %p\n", *raiz, NodoPila);

    printf("Elemento %d insertado en la pila\n", dato);
}

//Función que crea un nodo nuevo y lo devuelve a la función insertar() que lo introduce en la pila
struct NodoPila* nuevoNodo(int dato)
{
    //Asignar nodo
    struct NodoPila* nuevo_nodo_pila = (struct NodoPila*)malloc(sizeof(struct NodoPila));

    printf("\nDireccion nuevo nodo de la pila %p\n", nuevo_nodo_pila);

    //Establecer el dato de tipo int del nodo
    nuevo_nodo_pila->dato = dato;

    //Hacer que el puntero 'siguienteNodoPila' del nuevo nodo 'nuevo_nodo_pila' apunte al que era anteriormente el nodo raiz
    //para enlazar ambos nodos
    nuevo_nodo_pila->siguienteNodoPila = NULL;

    //devuelve la estructura del nuevo nodo creado en la pila
    return nuevo_nodo_pila;
}

//Función estaVacia()
//Función que comprueba si la pila está vacia. Recibe la dirección de la raiz de la pila
int estaVacia(struct NodoPila* raiz) {

    //devolver
    return !raiz;
}

//Función eliminar()
//Función que elimina el último nodo que ha entrado en la pila (LIFO) -> Ultimo en entrar, primero en salir
int eliminar(struct NodoPila** raiz) {

    if (estaVacia(*raiz)) {
        return INT_MIN;  //devolver el valor minimo que puede tener un tipo de dato entero
    }

    struct NodoPila* temp = *raiz;
    *raiz = (*raiz)->siguienteNodoPila;
    int eliminado = temp->dato;
    free(temp);

    return eliminado;
}

//Función ultimoNodoIntroducidoEnPila()
//Función que devuelve el valor del último nodo existente que fue introducido en la pila
int ultimoNodoIntroducidoEnPila(struct NodoPila* raiz) {

    if (estaVacia(raiz)) {
        return INT_MIN; //devolver el valor minimo que puede tener un tipo de dato entero
    }

    return raiz->dato;
}
