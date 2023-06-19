/*********************************************************************************
 * Module:  fecha.cpp
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sabado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementacion  
 ********************************************************************************/
#ifndef LISTADOBLECIRCULAR_H
#define LISTADOBLECIRCULAR_H

#include "Nodo.h"
#include <iostream>

template <class T>
class listaDobleCircular {
	
private:
    Nodo<T>* primero;
    Nodo<T>* ultimo;
public:
    listaDobleCircular();
    ~listaDobleCircular();

    void insertar(T);
    void eliminar(T);
    void imprimirDatos(); //AÚN NO SE CÓMO ES
    int cantidadNodos() const;
    T buscarPorCedula(std::string cedula);
};


#endif  // LISTADOBLECIRCULAR_H

