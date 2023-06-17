/*********************************************************************************
 * Module:  fecha.cpp
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sábado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementación  
 ********************************************************************************/
#include "listaDobleCircular.h"

template <class T>
listaDobleCircular<T>::listaDobleCircular() : primero(nullptr), ultimo(nullptr) {}

template <class T>
listaDobleCircular<T>::~listaDobleCircular() {
    // TODO: Implementar el destructor
}

template <class T>
///////////////////////////////////////////////////////////////////////
// Purpose: Inserta un nuevo nodo al principio de la lista
// Return: void
////////////////////////////////////////////////////////////////////////
void listaDobleCircular<T>::insertar(T dato) {
    Nodo<T>* nuevoNodo = new Nodo<T>(dato);

    if (primero == nullptr) {
        primero = nuevoNodo;
        ultimo = nuevoNodo;
        nuevoNodo->setSiguiente(nuevoNodo);
        nuevoNodo->setAnterior(nuevoNodo);
    } else {
        nuevoNodo->setSiguiente(primero);
        nuevoNodo->setAnterior(ultimo);
        primero->setAnterior(nuevoNodo);
        ultimo->setSiguiente(nuevoNodo);
        primero = nuevoNodo;
    }
}

template <class T>
void listaDobleCircular<T>::eliminar(T dato) {
///////////////////////////////////////////////////////////////////////
// Purpose: Elimina un nodo que contiene el valor dado de la lista
// Return: void
////////////////////////////////////////////////////////////////////////
    if (primero == nullptr) {
        return;  // La lista está vacía, no hay nada que eliminar
    }

    Nodo<T>* actual = primero;

    while (actual->getDato() != dato && actual->getSiguiente() != primero) {
        actual = actual->getSiguiente();
    }

    if (actual->getDato() == dato) {
        Nodo<T>* siguienteNodo = actual->getSiguiente();
        Nodo<T>* anteriorNodo = actual->getAnterior();

        siguienteNodo->setAnterior(anteriorNodo);
        anteriorNodo->setSiguiente(siguienteNodo);

        if (actual == primero) {
            primero = siguienteNodo;
        }
        if (actual == ultimo) {
            ultimo = anteriorNodo;
        }

        delete actual;
    }
}

template <class T>
void listaDobleCircular<T>::imprimirDatos() {
///////////////////////////////////////////////////////////////////////
// Purpose: Imprime los valores almacenados en los nodos de la lista
// Return: void
////////////////////////////////////////////////////////////////////////
    if (primero == nullptr) {
        return;  // La lista está vacía
    }

    Nodo<T>* actual = primero;

    do {
        // Imprimir el dato del nodo actual
        std::cout << actual->getDato() << " ";

        actual = actual->getSiguiente();
    } while (actual != primero);

    std::cout << std::endl;
}

template <class T>
int listaDobleCircular<T>::cantidadNodos() const {
///////////////////////////////////////////////////////////////////////
// Purpose: Devuelve el número de nodos en la lista
// Return: int
////////////////////////////////////////////////////////////////////////
    if (primero == nullptr) {
        return 0;  // La lista está vacía
    }

    int contador = 0;
    Nodo<T>* actual = primero;

    do {
        contador++;
        actual = actual->getSiguiente();
    } while (

