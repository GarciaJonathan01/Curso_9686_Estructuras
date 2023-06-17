/*********************************************************************************
 * Module:  fecha.cpp
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sabado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementacion  
 ********************************************************************************/
#if !defined(__Class_Diagram_1_Nodo_h)
#define __Class_Diagram_1_Nodo_h
#ifndef NODO_H
#define NODO_H

template <class T>
class Nodo {
public:
    Nodo(T dato);
    ~Nodo();

    T getDato() const;
    Nodo<T>* getSiguiente() const;
    Nodo<T>* getAnterior() const;

    void setDato(T nuevoDato);
    void setSiguiente(Nodo<T>* nuevoSiguiente);
    void setAnterior(Nodo<T>* nuevoAnterior);

private:
    T dato;
    Nodo<T>* siguiente;
    Nodo<T>* anterior;
};

#include "Nodo.cpp"

#endif  // NODO_H

#endif

#endif
