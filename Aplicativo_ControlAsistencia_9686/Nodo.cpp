/*********************************************************************************
 * Module:  fecha.cpp
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sábado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementación  
 ********************************************************************************/

#include "Nodo.h"

template <class T>
Nodo<T>::Nodo(){}


template <class T>
Nodo<T>::Nodo(T dato) {
	this->dato = dato;
	this->siguiente = nullptr;
	this->anterior = nullptr;
}

template <class T>
Nodo<T>::~Nodo(){}

template <class T>
T Nodo<T>::getDato() const {
///////////////////////////////////////////////////////////////////////
// Purpose:    Obtiene el dato almacenado en el nodo
// Return: T
////////////////////////////////////////////////////////////////////////
    return dato;
}

template <class T>
Nodo<T>* Nodo<T>::getSiguiente() const {
///////////////////////////////////////////////////////////////////////
// Purpose:    Obtiene el puntero al siguiente nodo
// Return: Nodo<T>*
////////////////////////////////////////////////////////////////////////
    return siguiente;
}

template <class T>
Nodo<T>* Nodo<T>::getAnterior() const {
///////////////////////////////////////////////////////////////////////
// Purpose:    Obtiene el puntero al nodo anterior
// Return: Nodo<T>*
////////////////////////////////////////////////////////////////////////
    return anterior;
}

template <class T>
void Nodo<T>::setDato(T nuevoDato) {
///////////////////////////////////////////////////////////////////////
// Purpose:    Establece un nuevo valor de dato en el nodo
// Return: void
////////////////////////////////////////////////////////////////////////
    dato = nuevoDato;
}

template <class T>
void Nodo<T>::setSiguiente(Nodo<T>* nuevoSiguiente) {
///////////////////////////////////////////////////////////////////////
// Purpose:    Establece el puntero al siguiente nodo
// Return: void
////////////////////////////////////////////////////////////////////////
    siguiente = nuevoSiguiente;
}

template <class T>
void Nodo<T>::setAnterior(Nodo<T>* nuevoAnterior) {
///////////////////////////////////////////////////////////////////////
// Purpose:    // Establece el puntero al nodo anterior
// Return: void
////////////////////////////////////////////////////////////////////////
    anterior = nuevoAnterior;
}
