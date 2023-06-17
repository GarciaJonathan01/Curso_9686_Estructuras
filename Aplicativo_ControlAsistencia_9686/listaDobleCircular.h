/*********************************************************************************
 * Module:  fecha.cpp
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sabado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementacion  
 ********************************************************************************/

#if !defined(__Class_Diagram_1_listaDobleCircular_h)
#define __Class_Diagram_1_listaDobleCircular_h

#ifndef LISTADOBLECIRCULAR_H
#define LISTADOBLECIRCULAR_H

#include "Nodo.h"

template <class T>
class listaDobleCircular {
public:
    listaDobleCircular();
    ~listaDobleCircular();

    void insertar(T dato);
    void eliminar(T dato);
    void imprimirDatos();
    int cantidadNodos() const;
    T buscarPorCedula(std::string cedula);

private:
    Nodo<T>* primero;
    Nodo<T>* ultimo;
};

#include "listaDobleCircular.cpp"

#endif  // LISTADOBLECIRCULAR_H


#endif
