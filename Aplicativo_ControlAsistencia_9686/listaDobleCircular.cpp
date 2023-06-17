/*********************************************************************************
 * Module:  fecha.cpp
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sabado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementacion  
 ********************************************************************************/

#include "Nodo.h"
#include "listaDobleCircular.h"
#include <string>

// Resto del código...

////////////////////////////////////////////////////////////////////////
// Name:       listaDobleCircular::listaDobleCircular()
// Purpose:    Implementation of listaDobleCircular::listaDobleCircular()
// Return:     
////////////////////////////////////////////////////////////////////////

listaDobleCircular::listaDobleCircular()
{
   nodo = nullptr;
}

////////////////////////////////////////////////////////////////////////
// Name:       listaDobleCircular::~listaDobleCircular()
// Purpose:    Implementation of listaDobleCircular::~listaDobleCircular()
// Return:     
////////////////////////////////////////////////////////////////////////

listaDobleCircular::~listaDobleCircular()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       listaDobleCircular::insertar(Persona persona)
// Purpose:    Implementation of listaDobleCircular::insertar()
// Parameters:
// - persona
// Return:     void
////////////////////////////////////////////////////////////////////////

void listaDobleCircular::insertar(Persona persona)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       listaDobleCircular::eliminar(Persona persona)
// Purpose:    Implementation of listaDobleCircular::eliminar()
// Parameters:
// - persona
// Return:     void
////////////////////////////////////////////////////////////////////////

void listaDobleCircular::eliminar(Persona persona)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       listaDobleCircular::imprimirDatos()
// Purpose:    Implementation of listaDobleCircular::imprimirDatos()
// Return:     void
////////////////////////////////////////////////////////////////////////

void listaDobleCircular::imprimirDatos(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       listaDobleCircular::crearNodo(Persona persona)
// Purpose:    Implementation of listaDobleCircular::crearNodo()
// Parameters:
// - persona
// Return:     Nodo
////////////////////////////////////////////////////////////////////////

Nodo listaDobleCircular::crearNodo(Persona persona)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       listaDobleCircular::cantidadNodos()
// Purpose:    Implementation of listaDobleCircular::cantidadNodos()
// Return:     int
////////////////////////////////////////////////////////////////////////

int listaDobleCircular::cantidadNodos(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       listaDobleCircular::agregarPersona(Persona persona)
// Purpose:    Implementation of listaDobleCircular::agregarPersona()
// Parameters:
// - persona
// Return:     void
////////////////////////////////////////////////////////////////////////

void listaDobleCircular::agregarPersona(Persona persona)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       listaDobleCircular::buscarPorCedula(std::string cedula)
// Purpose:    Implementation of listaDobleCircular::buscarPorCedula()
// Parameters:
// - cedula
// Return:     Persona
////////////////////////////////////////////////////////////////////////

Persona listaDobleCircular::buscarPorCedula(std::string cedula)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       listaDobleCircular::getUltimo()
// Purpose:    Implementation of listaDobleCircular::getUltimo()
// Return:     Nodo
////////////////////////////////////////////////////////////////////////

Nodo listaDobleCircular::getUltimo(void)
{
   return ultimo;
}

////////////////////////////////////////////////////////////////////////
// Name:       listaDobleCircular::setUltimo(Nodo newUltimo)
// Purpose:    Implementation of listaDobleCircular::setUltimo()
// Parameters:
// - newUltimo
// Return:     void
////////////////////////////////////////////////////////////////////////

void listaDobleCircular::setUltimo(Nodo newUltimo)
{
   ultimo = newUltimo;
}

////////////////////////////////////////////////////////////////////////
// Name:       listaDobleCircular::getPrimero()
// Purpose:    Implementation of listaDobleCircular::getPrimero()
// Return:     Nodo
////////////////////////////////////////////////////////////////////////

Nodo listaDobleCircular::getPrimero(void)
{
   return primero;
}

////////////////////////////////////////////////////////////////////////
// Name:       listaDobleCircular::setPrimero(Nodo newPrimero)
// Purpose:    Implementation of listaDobleCircular::setPrimero()
// Parameters:
// - newPrimero
// Return:     void
////////////////////////////////////////////////////////////////////////

void listaDobleCircular::setPrimero(Nodo newPrimero)
{
   primero = newPrimero;
}