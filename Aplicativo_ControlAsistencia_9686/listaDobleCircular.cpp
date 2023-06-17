/*********************************************************************************
 * Module:  fecha.cpp
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sabado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementacion  
 ********************************************************************************/
#include "listaDobleCircular.h"

template <class T>
listaDobleCircular<T>::listaDobleCircular() : primero(nullptr), ultimo(nullptr) {}

template <class T>
listaDobleCircular<T>::~listaDobleCircular() {
    // TODO: Implementar el destructor
}

template <class T>
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
    if (primero == nullptr) {
        return;  // La lista está vacía
    }

    Nodo<T>* actual = primero;

    do {
        // Imprimir el dato del nodo actual
        // ...

        actual = actual->getSiguiente();
    } while (actual != primero);
}

template <class T>
int listaDobleCircular<T>::cantidadNodos() const {
    if (primero == nullptr) {
        return 0;  // La lista está vacía
    }

    int contador = 0;
    Nodo<T>* actual = primero;

    do {
        contador++;
        actual = actual->getSiguiente();
    } while (actual != primero);

    return contador;
}

template <class T>
T listaDobleCircular<T>::buscarPorCedula(std::string cedula) {
    if (primero == nullptr) {
        return T{};  // La lista está vacía, retornar un valor por defecto del tipo T
    }

    Nodo<T>* actual = primero;

    do {
        if (actual->getDato().getCedula() == cedula) {
            return actual->getDato();
        }

        actual = actual->getSiguiente();
    } while (actual != primero);

    return T{};  // No se encontró el dato, retornar un valor por defecto del tipo T
}
