/*********************************************************************************
 * Module:  fecha.cpp
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sábado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementación  
 ********************************************************************************/
#include "listaDobleCircular.h"

template <typename T>
listaDobleCircular<T>::listaDobleCircular() {
	this->primero = nullptr;
	this->ultimo = nullptr;
    this->tam = 0;
}

template <class T>
listaDobleCircular<T>::~listaDobleCircular() {
    // TODO: Implementar el destructor
}


///////////////////////////////////////////////////////////////////////
// Purpose: Inserta un nuevo nodo al principio de la lista
// Return: void
////////////////////////////////////////////////////////////////////////
	
template <typename T>
void listaDobleCircular<T>::insertar(T dato) {

    Nodo<T>* nuevo = new Nodo<T>(dato);
    if (primero == nullptr) {
        primero = nuevo;
        ultimo = nuevo;
    } else {
        nuevo->setSiguiente(primero);
        primero->setAnterior(nuevo);
        primero = nuevo;
    }
    tam++;
}

template <typename T>
void listaDobleCircular<T>::eliminar(T dato) {
///////////////////////////////////////////////////////////////////////
// Purpose: Elimina un nodo que contiene el valor dado de la lista
// Return: void
////////////////////////////////////////////////////////////////////////
    Nodo<T>* nodo = buscar(dato);

    if (nodo != nullptr) {
        if (nodo == primero && nodo == ultimo) {
            primero = nullptr;
            ultimo = nullptr;
        } else if (nodo == primero) {
            primero = nodo->getSiguiente();
            primero->setAnterior(nullptr);
        } else if (nodo == ultimo) {
            ultimo = nodo->getAnterior();
            ultimo->setSiguiente(nullptr);
        } else {
            nodo->getAnterior()->setSiguiente(nodo->getSiguiente());
            nodo->getSiguiente()->setAnterior(nodo->getAnterior());
        }
        delete nodo;
        std::cout << "Elemento eliminado correctamente." << std::endl;
    } else {
        std::cout << "Elemento no encontrado." << std::endl;
    } 
}

template <typename T>
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

template <typename T>
int listaDobleCircular<T>::cantidadNodos() const {
///////////////////////////////////////////////////////////////////////
// Purpose: Devuelve el número de nodos en la lista
// Return: int
////////////////////////////////////////////////////////////////////////
    int count = 0;

    if (primero == nullptr) {
        return count;  // La lista está vacía
    }

    Nodo<T>* actual = primero;

    do {
        count++;
        actual = actual->getSiguiente();
    } while (actual != primero);

    return count;
}
template <typename T>
Nodo<T>* listaDobleCircular<T>::getCabeza() {
    return this->primero;
}



