/*********************************************************************************
 * Module:  fecha.cpp
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sabado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementacion  
 ********************************************************************************/

#if !defined(__Class_Diagram_1_listaDobleCircular_h)
#define __Class_Diagram_1_listaDobleCircular_h

class Nodo;

#include <Nodo.h>
#include <Persona.h>

class listaDobleCircular
{
public:
   listaDobleCircular();
   ~listaDobleCircular();
   void insertar(Persona persona);
   void eliminar(Persona persona);
   void imprimirDatos(void);
   Nodo crearNodo(Persona persona);
   int cantidadNodos(void);
   void agregarPersona(Persona persona);
   Persona buscarPorCedula(std::string cedula);
   Nodo getUltimo(void);
   void setUltimo(Nodo newUltimo);
   Nodo getPrimero(void);
   void setPrimero(Nodo newPrimero);

   Nodo** nodo;

protected:
private:
   Nodo ultimo;
   Nodo primero;


};

#endif