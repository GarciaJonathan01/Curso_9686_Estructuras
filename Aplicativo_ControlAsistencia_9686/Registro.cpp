/*********************************************************************************
 * Module:  fecha.cpp
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sabado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementacion  
 ********************************************************************************/

#include "fecha.h"
#include "Registro.h"
#include <string>



////////////////////////////////////////////////////////////////////////
// Name:       Registro::Registro()
// Purpose:    Implementation of Registro::Registro()
// Return:     
////////////////////////////////////////////////////////////////////////

Registro::Registro()
{
   fecha = nullptr;
}

////////////////////////////////////////////////////////////////////////
// Name:       Registro::~Registro()
// Purpose:    Implementation of Registro::~Registro()
// Return:     
////////////////////////////////////////////////////////////////////////

Registro::~Registro()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Registro::getFechaEntrada()
// Purpose:    Implementation of Registro::getFechaEntrada()
// Return:     fecha
////////////////////////////////////////////////////////////////////////

fecha Registro::getFechaEntrada(void)
{
   return fechaEntrada;
}

////////////////////////////////////////////////////////////////////////
// Name:       Registro::setFechaEntrada(fecha newFechaEntrada)
// Purpose:    Implementation of Registro::setFechaEntrada()
// Parameters:
// - newFechaEntrada
// Return:     void
////////////////////////////////////////////////////////////////////////

void Registro::setFechaEntrada(fecha newFechaEntrada)
{
   fechaEntrada = newFechaEntrada;
}

////////////////////////////////////////////////////////////////////////
// Name:       Registro::getFechaSalida()
// Purpose:    Implementation of Registro::getFechaSalida()
// Return:     fecha
////////////////////////////////////////////////////////////////////////

fecha Registro::getFechaSalida(void)
{
   return fechaSalida;
}

////////////////////////////////////////////////////////////////////////
// Name:       Registro::setFechaSalida(fecha newFechaSalida)
// Purpose:    Implementation of Registro::setFechaSalida()
// Parameters:
// - newFechaSalida
// Return:     void
////////////////////////////////////////////////////////////////////////

void Registro::setFechaSalida(fecha newFechaSalida)
{
   fechaSalida = newFechaSalida;
}

////////////////////////////////////////////////////////////////////////
// Name:       Registro::insertarEntrada(Persona persona, fecha fecha)
// Purpose:    Implementation of Registro::insertarEntrada()
// Parameters:
// - persona
// - fecha
// Return:     void
////////////////////////////////////////////////////////////////////////

void Registro::insertarEntrada(Persona persona, fecha fecha)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Registro::insertarSalida(Persona persona, fecha fecha)
// Purpose:    Implementation of Registro::insertarSalida()
// Parameters:
// - persona
// - fecha
// Return:     void
////////////////////////////////////////////////////////////////////////

void Registro::insertarSalida(Persona persona, fecha fecha)
{
   // TODO : implement
}