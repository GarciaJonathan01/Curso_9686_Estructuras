/*********************************************************************************
 * Module:  Fecha.h
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sabado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementacion  
 ********************************************************************************/

#if !defined(__Class_Diagram_1_Fecha_h)
#define __Class_Diagram_1_Fecha_h
#include <iostream>
class Fecha
{
public:
   int getHora(void);
   void setHora(int newHora);
   int getMinuto(void);
   void setMinuto(int newMinuto);
   int getSegundo(void);
   void setSegundo(int newSegundo);
   int getDia(void);
   void setDia(int newDia);
   int getMes(void);
   void setMes(int newMes);
   int getAnio(void);
   void setAnio(int newAnio);
   Fecha();
   Fecha(int, int, int, int, int, int);
   ~Fecha();
   friend std::ostream& operator<<(std::ostream&, const Fecha&);
	//void obtenerFechaDeNacimiento();
protected:
private:
   int hora;
   int minuto;
   int segundo;
   int dia;
   int mes;
   int anio;


};

#endif