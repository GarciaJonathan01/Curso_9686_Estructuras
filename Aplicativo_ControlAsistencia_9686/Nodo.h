/*********************************************************************************
 * Module:  fecha.cpp
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sabado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementacion  
 ********************************************************************************/

#if !defined(__Class_Diagram_1_Nodo_h)
#define __Class_Diagram_1_Nodo_h

class Persona;

#include <Persona.h>

class Nodo
{
public:
   Nodo* getAnterior(void);
   void setAnterior(Nodo* newAnterior);
   Nodo* getSiguiente(void);
   void setSiguiente(Nodo* newSiguiente);
   Nodo(Persona* persona);
   ~Nodo();

   Persona* persona;

protected:
private:
   Nodo* anterior;
   /// @brief 
   Nodo* siguiente;


};

#endif