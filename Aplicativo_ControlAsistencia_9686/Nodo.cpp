/*********************************************************************************
 * Module:  fecha.cpp
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sabado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementacion  
 ********************************************************************************/

#include "Nodo.h"

template <class T>
Nodo<T>::Nodo(T dato) : dato(dato), siguiente(nullptr), anterior(nullptr) {}

template <class T>
Nodo<T>::~Nodo() {}

template <class T>
T Nodo<T>::getDato() const {
    return dato;
}

template <class T>
Nodo<T>* Nodo<T>::getSiguiente() const {
    return siguiente;
}

template <class T>
Nodo<T>* Nodo<T>::getAnterior() const {
    return anterior;
}

template <class T>
void Nodo<T>::setDato(T nuevoDato) {
    dato = nuevoDato;
}

template <class T>
void Nodo<T>::setSiguiente(Nodo<T>* nuevoSiguiente) {
    siguiente = nuevoSiguiente;
}

template <class T>
void Nodo<T>::setAnterior(Nodo<T>* nuevoAnterior) {
    anterior = nuevoAnterior;
}

