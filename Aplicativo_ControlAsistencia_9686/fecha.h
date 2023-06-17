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

class fecha
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
   fecha();
   ~fecha();

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