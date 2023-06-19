/*********************************************************************************
 * Module:  fecha.cpp
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sabado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementacion  
 ********************************************************************************/
#pragma once
//#include "Registro.h"
#include "Fecha.cpp"

#include <iostream>

class Persona
{
private:
   std::string cedula;
   std::string nombre;
   std::string apellido;
   std::string fechaNacimiento;
   Fecha fechaDeNacimiento1;
public:
   std::string getCedula(void);
   void setCedula(std::string newCedula);
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);

   std::string getFechaNacimiento(void);
   Fecha getFechaDeNacimiento1(void);
   
   Persona();
   Persona(std::string cedula,std::string nombre,std::string apellido, std::string fechaNacimiento);
   ~Persona();

   //Registro** registro;
   //fecha** fecha;

protected:

};
