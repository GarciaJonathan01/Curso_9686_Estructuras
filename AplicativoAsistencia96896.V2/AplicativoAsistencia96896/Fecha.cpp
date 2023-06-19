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
#include "Fecha.h"
#include <ostream>
#include <string>
#include <cstring>

std::string Fecha::getHora(void)
{
   return hora;
}

void Fecha::setHora(std::string newHora)
{
   hora = newHora;
}

std::string Fecha::getMinuto(void)
{
   return minuto;
}

void Fecha::setMinuto(std::string newMinuto)
{
   minuto = newMinuto;
}

std::string Fecha::getSegundo(void)
{
   return segundo;
}

void Fecha::setSegundo(std::string newSegundo)
{
   segundo = newSegundo;
}

std::string Fecha::getDia(void)
{
   return dia;
}

void Fecha::setDia(std::string newDia)
{
   dia = newDia;
}

std::string Fecha::getMes(void)
{
   return mes;
}

void Fecha::setMes(std::string newMes)
{
   mes = newMes;
}

std::string Fecha::getAnio(void)
{
   return anio;
}

void Fecha::setAnio(std::string newAnio)
{
   anio = newAnio;
}


Fecha::Fecha()
{
}

Fecha::Fecha(std::string newAnio, std::string newMes, std::string newDia,std:: string newHora,std:: string newMinuto, std::string newSegundo)
{
   anio = newAnio;
   mes = newMes;
   dia = newDia;
   hora = newHora;
   minuto = newMinuto;
   segundo = newSegundo;
}
Fecha::Fecha(std::string newDia,std:: string newMes, std::string newAnio)
{
  this->dia= newDia;
   this->mes= newMes;
   this->anio= newAnio;
   this->hora= "00";
   this->minuto= "00";
   this->segundo= "00";
}
