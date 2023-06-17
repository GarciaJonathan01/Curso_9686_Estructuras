/*********************************************************************************
 * Module:  fecha.cpp
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sabado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementacion  
 ********************************************************************************/
#include <ctime> 
#include <locale>
#include "fecha.h"

////////////////////////////////////////////////////////////////////////
// Name:       fecha::getHora()
// Purpose:    Implementation of fecha::getHora()
// Return:     int
////////////////////////////////////////////////////////////////////////

int fecha::getHora(void)
{
   return hora;
}

////////////////////////////////////////////////////////////////////////
// Name:       fecha::setHora(int newHora)
// Purpose:    Implementation of fecha::setHora()
// Parameters:
// - newHora
// Return:     void
////////////////////////////////////////////////////////////////////////

void fecha::setHora(int newHora)
{
   hora = newHora;
}

////////////////////////////////////////////////////////////////////////
// Name:       fecha::getMinuto()
// Purpose:    Implementation of fecha::getMinuto()
// Return:     int
////////////////////////////////////////////////////////////////////////

int fecha::getMinuto(void)
{
   return minuto;
}

////////////////////////////////////////////////////////////////////////
// Name:       fecha::setMinuto(int newMinuto)
// Purpose:    Implementation of fecha::setMinuto()
// Parameters:
// - newMinuto
// Return:     void
////////////////////////////////////////////////////////////////////////

void fecha::setMinuto(int newMinuto)
{
   minuto = newMinuto;
}

////////////////////////////////////////////////////////////////////////
// Name:       fecha::getSegundo()
// Purpose:    Implementation of fecha::getSegundo()
// Return:     int
////////////////////////////////////////////////////////////////////////

int fecha::getSegundo(void)
{
   return segundo;
}

////////////////////////////////////////////////////////////////////////
// Name:       fecha::setSegundo(int newSegundo)
// Purpose:    Implementation of fecha::setSegundo()
// Parameters:
// - newSegundo
// Return:     void
////////////////////////////////////////////////////////////////////////

void fecha::setSegundo(int newSegundo)
{
   segundo = newSegundo;
}

////////////////////////////////////////////////////////////////////////
// Name:       fecha::getDia()
// Purpose:    Implementation of fecha::getDia()
// Return:     int
////////////////////////////////////////////////////////////////////////

int fecha::getDia(void)
{
   return dia;
}

////////////////////////////////////////////////////////////////////////
// Name:       fecha::setDia(int newDia)
// Purpose:    Implementation of fecha::setDia()
// Parameters:
// - newDia
// Return:     void
////////////////////////////////////////////////////////////////////////

void fecha::setDia(int newDia)
{
   dia = newDia;
}

////////////////////////////////////////////////////////////////////////
// Name:       fecha::getMes()
// Purpose:    Implementation of fecha::getMes()
// Return:     int
////////////////////////////////////////////////////////////////////////

int fecha::getMes(void)
{
   return mes;
}

////////////////////////////////////////////////////////////////////////
// Name:       fecha::setMes(int newMes)
// Purpose:    Implementation of fecha::setMes()
// Parameters:
// - newMes
// Return:     void
////////////////////////////////////////////////////////////////////////

void fecha::setMes(int newMes)
{
   mes = newMes;
}

////////////////////////////////////////////////////////////////////////
// Name:       fecha::getAnio()
// Purpose:    Implementation of fecha::getAnio()
// Return:     int
////////////////////////////////////////////////////////////////////////

int fecha::getAnio(void)
{
   return anio;
}

////////////////////////////////////////////////////////////////////////
// Name:       fecha::setAnio(int newAnio)
// Purpose:    Implementation of fecha::setAnio()
// Parameters:
// - newAnio
// Return:     void
////////////////////////////////////////////////////////////////////////

void fecha::setAnio(int newAnio)
{
   anio = newAnio;
}

////////////////////////////////////////////////////////////////////////
// Name:       fecha::fecha()
// Purpose:    Implementation of fecha::fecha()
// Return:     
////////////////////////////////////////////////////////////////////////

fecha::fecha()
{
    // Establece la configuración regional en español
    setlocale(LC_ALL, "es_ES.UTF-8");

    // Obtiene el tiempo actual del sistema
    std::time_t tiempoActual = std::time(nullptr);

    // Convierte el tiempo en una estructura tm
    std::tm* tiempoLocal = std::localtime(&tiempoActual);

    // Obtiene los componentes de fecha y hora
    this->dia = tiempoLocal->tm_mday;
    this->mes = tiempoLocal->tm_mon+1;
    this->anio = tiempoLocal->tm_year + 1900;
    this->hora = tiempoLocal->tm_hour;
    this->minuto = tiempoLocal->tm_min;
    this->segundo = tiempoLocal->tm_sec;
}

////////////////////////////////////////////////////////////////////////
// Name:       fecha::~fecha()
// Purpose:    Implementation of fecha::~fecha()
// Return:     
////////////////////////////////////////////////////////////////////////

fecha::~fecha()
{
   // TODO : implement
}