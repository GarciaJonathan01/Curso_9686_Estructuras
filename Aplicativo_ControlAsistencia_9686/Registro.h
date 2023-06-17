/*********************************************************************************
 * Module:  fecha.cpp
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sabado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementacion  
 ********************************************************************************/

#if !defined(__Class_Diagram_1_Registro_h)
#define __Class_Diagram_1_Registro_h

class fecha;

#include <fecha.h>
#include <Persona.h>
#include <string>



class Registro
{
public:
   Registro();
   ~Registro();
   fecha getFechaEntrada(void);
   void setFechaEntrada(fecha newFechaEntrada);
   fecha getFechaSalida(void);
   void setFechaSalida(fecha newFechaSalida);
   void insertarEntrada(Persona persona, fecha fecha);
   void insertarSalida(Persona persona, fecha fecha);

  // fecha** fecha;

protected:
private:
   fecha fechaEntrada;
   fecha fechaSalida;


};

#endif