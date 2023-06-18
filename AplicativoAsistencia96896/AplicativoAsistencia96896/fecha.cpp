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

int fecha::getHora(void)
{
   return hora;
}

void fecha::setHora(int newHora)
{
   hora = newHora;
}

int fecha::getMinuto(void)
{
   return minuto;
}

void fecha::setMinuto(int newMinuto)
{
   minuto = newMinuto;
}

int fecha::getSegundo(void)
{
   return segundo;
}

void fecha::setSegundo(int newSegundo)
{
   segundo = newSegundo;
}

int fecha::getDia(void)
{
   return dia;
}

void fecha::setDia(int newDia)
{
   dia = newDia;
}

int fecha::getMes(void)
{
   return mes;
}

void fecha::setMes(int newMes)
{
   mes = newMes;
}

int fecha::getAnio(void)
{
   return anio;
}

void fecha::setAnio(int newAnio)
{
   anio = newAnio;
}


fecha::fecha()
{
    // Establece la configuración regional en español
    setlocale(LC_ALL, "es_ES.UTF-8");

    // Obtiene el tiempo actual del sistema
    std::time_t tiempoActual = std::time(nullptr);

    // Convierte el tiempo en una estructura tm utilizando localtime_s
    std::tm tiempoLocal;
    localtime_s(&tiempoLocal, &tiempoActual);

    // Obtiene los componentes de fecha y hora
    this->dia = tiempoLocal.tm_mday;
    this->mes = tiempoLocal.tm_mon + 1;
    this->anio = tiempoLocal.tm_year + 1900;
    this->hora = tiempoLocal.tm_hour;
    this->minuto = tiempoLocal.tm_min;
    this->segundo = tiempoLocal.tm_sec;
}


fecha::fecha(int anio, int mes, int dia, int hora, int minuto, int segundo) {
	this->dia = dia;
	this->mes = mes;
    this->anio = anio;
    this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
}
