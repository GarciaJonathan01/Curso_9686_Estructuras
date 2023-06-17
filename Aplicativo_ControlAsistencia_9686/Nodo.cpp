/*********************************************************************************
 * Module:  fecha.cpp
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sabado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementacion  
 ********************************************************************************/

#include "Persona.h"
#include "Nodo.h"

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getAnterior()
// Purpose:    Implementation of Nodo::getAnterior()
// Return:     Nodo
////////////////////////////////////////////////////////////////////////

Nodo* Nodo::getAnterior(void)
{
   return anterior;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setAnterior(Nodo newAnterior)
// Purpose:    Implementation of Nodo::setAnterior()
// Parameters:
// - newAnterior
// Return:     void
////////////////////////////////////////////////////////////////////////

void Nodo::setAnterior(Nodo* newAnterior)
{
   anterior = newAnterior;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getSiguiente()
// Purpose:    Implementation of Nodo::getSiguiente()
// Return:     Nodo
////////////////////////////////////////////////////////////////////////

Nodo* Nodo::getSiguiente(void)
{
   return siguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setSiguiente(Nodo newSiguiente)
// Purpose:    Implementation of Nodo::setSiguiente()
// Parameters:
// - newSiguiente
// Return:     void
////////////////////////////////////////////////////////////////////////

void Nodo::setSiguiente(Nodo* newSiguiente)
{
   siguiente = newSiguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::Nodo(Persona persona)
// Purpose:    Implementation of Nodo::Nodo()
// Parameters:
// - persona
// Return:     
////////////////////////////////////////////////////////////////////////

Nodo::Nodo(Persona* persona)
{
    this->persona = persona;
    anterior = nullptr;
    siguiente = nullptr;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::~Nodo()
// Purpose:    Implementation of Nodo::~Nodo()
// Return:     
////////////////////////////////////////////////////////////////////////

Nodo::~Nodo()
{
   // TODO : implement
}