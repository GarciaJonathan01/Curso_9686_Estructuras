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
    Nodo<T>* primero= nullptr;
    Nodo<T>* ultimo= nullptr;
    int tam=0 ;
public:
    listaDobleCircular();
    ~listaDobleCircular();

    void insertar(T);
    void insertarCabeza(T);
    void eliminar(T);
    void imprimirDatos(); //AÚN NO SE CÓMO ES
    int cantidadNodos() const;
    T buscarPorCedula(std::string cedula);
    Nodo<T>* getCabeza();
};


#endif  // LISTADOBLECIRCULAR_H

