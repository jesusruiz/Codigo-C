//Simple programa que crea una cola
//Una cola se basa en la regla FIFO (Primero en Entrar Primero en Salir), al igual que una cola del supermercado

#include <limits.h>  //se utiliza para determinar los l�mites establecidos de los tipos de datos.
#include <stdio.h>
#include <stdlib.h>

//Estructura autoreferencial
struct nodoCola {
    char dato;  //almacenar� un tipo de dato char
    struct nodoCola *siguienteNodo;  //puntero al siguiente nodo de la cola
};

//Definimos dos nuevos tipos de datos: NodoCola y NodoColaPtr
typedef struct nodoCola NodoCola;
typedef NodoCola *NodoColaPtr;

//funciones prototipo
void imprimirCola(NodoColaPtr actualPtr); //Imprimir la cola. Recibe como argumento el puntero actual
int estaVacia(NodoColaPtr cabezaPtr); //Verificar si la cola est� vac�a. Recibe como par�metro la cabeza de la cola
char eliminar(NodoColaPtr *cabezaPtr, NodoColaPtr *colaPtr); //Eliminar nodo de la cola.
void introducir(NodoColaPtr *cabezaPtr, NodoColaPtr *colaPtr, char valor); //Introducir nodo en la cola.
void instrucciones(void);  //Menu de Intrucciones del programa que se imprimen por pantalla

//Inicio de programa
int main()
{
    //Creamos dos nodos. No hace falta utilizar la palabra clave struct, ya que tenemos creados los tipos de datos necesarios
    NodoColaPtr cabezaPtr = NULL;  //inicializamos el nodo cabezaPtr
    NodoColaPtr colaPtr = NULL;  //inicializamos el nodo colaPtr
    char caracter;  //Variable que almacenar� un tipo car�cter

    instrucciones(); //mostrar el menu
    printf("%s", "? ");
    unsigned int eleccion; //variables que guarda la opci�n seleccionada por el usuario
    scanf("%u", &eleccion); //Leemos la opci�n tomada por el usuario y la guardamos en la variable eleccion

    //mientras el usuario no introduzca un 3 como opci�n
    while (eleccion != 3) {

        switch(eleccion) {
            //introducir valor en la cola
            case 1:
                printf("%s", "Introduzca un caracter a introducir en la cola: ");
                scanf("\n%c", &caracter);
                introducir(&cabezaPtr, &colaPtr, caracter); //Llamamos a la funci�n introducir()
                imprimirCola(cabezaPtr);
                break;
            //eliminar valor en la cola
            case 2:
                //si cola no est� vac�a
                if (!estaVacia(cabezaPtr)) {
                    caracter = eliminar(&cabezaPtr, &colaPtr); //en la cariable caracter se guarda el caracter eliminado
                    printf("%c ha sido eliminado de la cola.\n", caracter);
                }
                imprimirCola(cabezaPtr);
                break;
            //si se selecciona una opcion distinta, volver a mostrar el menu
            default:
                puts("Eleccion no valida.\n");
                instrucciones();
                break;
        }
        //Volvemos a mostrar el signo interrogante despu�s de haber realizado una operaci�n
        //para que el usuario vuelva a introducir un n�mero de operaci�n a realizar
        printf("%s", "? ");
        scanf("%u", &eleccion);  //leemos la opci�n elegida por el usuario
    }
        puts("Fin de ejecucion.");  //imprimimos este mensaje cuando elijamos la opci�n 3 y el programa haya finalizado
}

//funci�n instrucciones
//mostrar las instrucciones del programa al usuario
void instrucciones(void) {
    printf ("Introduzca su eleccion:\n"
            " 1 para anadir un elemento a la cola\n"
            " 2 para eliminar un elemento de la cola\n"
            " 3 para finalizar\n");
}

//Funci�n insertar nodo en la cola
//insertar un nodo al final de la cola
void introducir(NodoColaPtr *cabezaPtr, NodoColaPtr *colaPtr, char valor)
{
    NodoColaPtr nuevoPtr = malloc(sizeof(NodoCola));  //creamos el nuevo nodo que se a�adir� a la cola

    if (nuevoPtr != NULL) {  //�hay espacio disponible?
        nuevoPtr->dato = valor;  //se a�ade el valor al nodo
        nuevoPtr->siguienteNodo = NULL;  //se hace que el valor del campo siguienteNodo del nuevo nodo apunte a NULL

        //si la cola est� vac�a, introducir el nuevo nodo en la cabeza de la cola
        if (estaVacia(*cabezaPtr)) {
            *cabezaPtr = nuevoPtr;  //el puntero de la cabeza de la cola, apuntar� ahora,
                                    //a la direcci�n del puntero del nuevo nodo creado
        }
        //si la cola no est� vac�a, introducir el nuevo nodo al final de la cola
        else{
            (*colaPtr)->siguienteNodo = nuevoPtr; //el puntero del campo 'siguienteNodo' del �ltimo nodo de la cola,
                                              //apuntar� ahora a la direcci�n del puntero del nuevo nodo creado
        }

        *colaPtr = nuevoPtr;  //asignar nuevoPtr a *colaPtr, ya que el nuevo nodo es la cola de la cola.
    }
    else {
        printf("%c no introducido. No hay memoria disponible.\n", valor);
    }
}

//Funci�n eliminar nodo de la cola
//eliminar el nodo de la cabeza de la cola
char eliminar(NodoColaPtr *cabezaPtr, NodoColaPtr *colaPtr) {

    char valor = (*cabezaPtr)->dato; //en la variable valor de tipo char,
                                     //almacenamos el valor que contiene el nodo de la cabeza de la cola
    NodoColaPtr temporalPtr = *cabezaPtr;  //creamos un nodo temporal y almacenamos la direcci�n del nodo de la cabeza de la cola
    *cabezaPtr = (*cabezaPtr)->siguienteNodo;  //hacemos que el puntero que apunta al nodo de la cabeza apunte al nodo siguiente

    //si la cola est� vac�a
    if (*cabezaPtr == NULL) {
        *colaPtr = NULL;  //la direcci�n del puntero de la cola apuntar� a NULL
    }

    free(temporalPtr);  //liberamos la memoria del nodo temporal
    return valor; //retornamos al programa principal el car�cter eliminado
}

//Funci�n est�Vac�a
//devuelve 1 si la cola est� vac�a, 0 en caso contrario
int estaVacia(NodoColaPtr cabezaPtr) {

    return cabezaPtr == NULL;
}

//Funci�n imprimir la cola
void imprimirCola(NodoColaPtr actualPtr) {

    //si cola est� vac�a
    if (actualPtr == NULL) {
        puts("La cola esta vacia.\n");
    }
    else {
        puts("Los elementos de la cola son:");

    //mientras la cola no llegue al final de los elementos
    while (actualPtr != NULL) {
        printf("%c --> ", actualPtr->dato); //imprimir el campo 'dato' del elemento
        actualPtr = actualPtr->siguienteNodo; //avanzamos un elemento
    }

        puts("NULL\n");  //se imprime un salto de l�nea y a continuaci�n el valor "NULL"
    }
}
