/*********************************************************************************
 * Module:  fecha.cpp
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sabado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementacion  
 ********************************************************************************/

#include "fecha.h"
#include "Persona.h"
#include <string>

class Registro
{
public:
   Registro();
   fecha getFechaEntrada(void);
   void setFechaEntrada(fecha newFechaEntrada);

   fecha getFechaSalida(void);
   void setFechaSalida(fecha newFechaSalida);

   void insertarEntrada(Persona persona, fecha fecha);
   void insertarSalida(Persona persona, fecha fecha);

private:
	
	Persona persona;

	fecha fechaEntrada;
	fecha fechaSalida;
};
