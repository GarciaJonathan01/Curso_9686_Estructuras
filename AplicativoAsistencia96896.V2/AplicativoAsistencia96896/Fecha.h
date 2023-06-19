/*********************************************************************************
 * Module:  fecha.cpp
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sabado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementacion  
 ********************************************************************************/

#if !defined(__Class_Diagram_1_fecha_h)
#define __Class_Diagram_1_fecha_h
#include <iostream>
#include <ostream>
#include <string>
#include <cstring>

class Fecha
{
public:

   std::string getSegundo(void);
   void setSegundo(std::string newSegundo);
   std::string getAnio(void);
   void setAnio(std::string newAnio);
   std::string getMes(void);
   void setMes(std::string newMes);
   std::string getDia(void);
   void setDia(std::string newDia);
   std::string getHora(void);
   void setHora(std::string newHora);
   std::string getMinuto(void);
   void setMinuto(std::string newMinuto);
   Fecha();
   Fecha(std::string newAnio, std::string newMes,std:: string newDia, std::string newHora,std:: string newMinuto,std:: string newSegundo);
   Fecha(std::string newDia, std::string newMes,std:: string newAnio);
	
protected:
private:
   std::string anio;
   std::string mes;
   std::string dia;
   std::string hora;
   std::string minuto;
   std::string segundo;


};

#endif