/*********************************************************************************
 * Module:  Nodo.cpp
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sabado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementacion  
 ********************************************************************************/
#ifndef NODO_H
#define NODO_H

template <class T>
class Nodo {
private:
    T dato;
    Nodo<T>* siguiente;
    Nodo<T>* anterior;
public:
    Nodo(T);
    Nodo();
    ~Nodo();

    T getDato() const;
    Nodo<T>* getSiguiente() const;
    Nodo<T>* getAnterior() const;

    void setDato(T nuevoDato);
    void setSiguiente(Nodo<T>* nuevoSiguiente);
    void setAnterior(Nodo<T>* nuevoAnterior);
};

#endif  // NODO_H
