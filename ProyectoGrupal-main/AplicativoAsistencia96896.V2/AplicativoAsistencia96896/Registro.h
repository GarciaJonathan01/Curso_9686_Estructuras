/*********************************************************************************
 * Module:  fecha.cpp
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sabado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementacion  
 ********************************************************************************/
#ifndef __REGISTRO_H
#define __REGISTRO_H
#include "Fecha.h"
#include "Persona.h"
#include <string>
#include <cstring>
#include <ctime>

class Registro
{
public:
   Registro();
   Fecha getFechaEntrada(void);
   void setFechaEntrada(Fecha newFechaEntrada);

   Fecha getFechaSalida(void);
   void setFechaSalida(Fecha newFechaSalida);

   void insertarEntrada(Persona persona, Fecha fecha);
   void insertarSalida(Persona persona, Fecha fecha);
   void registrarEntradaAutom(void);
   void guardar_txt(std::string texto,std::string nombreArchivo);

private:
	
	Persona persona;

	Fecha fechaEntrada;
	Fecha fechaSalida;
};
#endif
