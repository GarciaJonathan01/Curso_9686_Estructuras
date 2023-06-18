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

Registro::Registro()
{
   
}

fecha Registro::getFechaEntrada(void)
{
   return fechaEntrada;
}

void Registro::setFechaEntrada(fecha newFechaEntrada)
{
   fechaEntrada = newFechaEntrada;
}

fecha Registro::getFechaSalida(void)
{
   return fechaSalida;
}

void Registro::setFechaSalida(fecha newFechaSalida)
{
   fechaSalida = newFechaSalida;
}

void Registro::insertarEntrada(Persona persona, fecha fecha)
{
	std::string cedula="";
   
	std::cout << "Ingrese el numero de cedula" << std::endl;
	std::cin >> cedula;


	if (persona.getCedula() == cedula)
	{
		
	}
	else
	{
		std::cout << "La cedula no coincide" << std::endl;
	}
	
}

void Registro::insertarSalida(Persona persona, fecha fecha)
{
   // TODO : implement
}