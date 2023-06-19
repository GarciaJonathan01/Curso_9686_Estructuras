/*********************************************************************************
 * Module:  fecha.cpp
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sabado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementacion  
 ********************************************************************************/

#include "Fecha.h"
#include "Registro.h"
#include <string>
#include <cstring>
#include <fstream>
#include <iostream>
#include "Utils.h"
using namespace std;

Registro::Registro()
{
   
}

Fecha Registro::getFechaEntrada(void)
{
   return fechaEntrada;
}

void Registro::setFechaEntrada(Fecha newFechaEntrada)
{
   fechaEntrada = newFechaEntrada;
}

Fecha Registro::getFechaSalida(void)
{
   return fechaSalida;
}

void Registro::setFechaSalida(Fecha newFechaSalida)
{
   fechaSalida = newFechaSalida;
}

void Registro::insertarEntrada(Persona persona, Fecha fecha)
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

void Registro::insertarSalida(Persona persona, Fecha fecha)
{
   // TODO : implement
}
// para guardar un texto en un archivo
void Registro::guardar_txt(std::string texto, std::string nombreArchivo)
{
   std::ofstream archivo;
   archivo.open(nombreArchivo, ios::app);
   if (archivo.fail())
   {
      cout << "No se pudo abrir el archivo";
      exit(1);
   }
   archivo << texto + "\n";
   archivo.close();
}
// se hace la validacion de lacedula, obtine la fecha y hora actual y registra una entrada automatica en un archivo
void Registro::registrarEntradaAutom(void)
{
	Utils validacion;
   Fecha fecha;
	std::string cedula, dia, mes, anio, hora, minutos, segundos, fechaActualS;
   bool bandera = false;
   bool bandera2 = false;

   time_t tiempoActual = time(nullptr);
   tm *fechaActual = localtime(&tiempoActual);

   int diaActual = fechaActual->tm_mday;
   int mesActual = fechaActual->tm_mon + 1;
   int anioActual = fechaActual->tm_year + 1900;
   int horaActual = fechaActual->tm_hour;
   int minutosActual = fechaActual->tm_min;
   int segundosActual = fechaActual->tm_sec;

   do
   {
      cout << "Ingrese la cedula: " << endl;
      cin >> cedula;
      bandera = validacion.verificarUsuario(cedula);
      if (!bandera )
      {
         cout << "Usuario no registrado" << endl;
      }
   } while (bandera == false);

   dia = to_string(diaActual);

   mes = to_string(mesActual);
   anio = to_string(anioActual);
   hora = to_string(horaActual);
   minutos = to_string(minutosActual);
   segundos = to_string(segundosActual);

   fecha.setDia(dia);
   fecha.setMes(mes);
   fecha.setAnio(anio);
   fecha.setHora(hora);
   fecha.setMinuto(minutos);
   fecha.setSegundo(segundos);
   std::string texto = cedula + " " + fecha.getDia() + "/" + fecha.getMes() + "/" + fecha.getAnio() + " " + fecha.getHora() + ":" + fecha.getMinuto() + ":" + fecha.getSegundo() + "\n";
   fechaActualS = fecha.getDia() + "/" + fecha.getMes() + "/" + fecha.getAnio();
   cout << "FECHA ACTUAL:" << fechaActualS << endl;
   bandera2 = validacion.isDateValid(fechaActualS, "RegistroEntrada.txt");
   if (bandera2 == true)
   {
      cout << "Fecha no valida" << endl;
   }
   else
   {
      guardar_txt(texto, "RegistroEntrada.txt");
   }
   
}
