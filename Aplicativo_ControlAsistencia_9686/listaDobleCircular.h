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


#include <Nodo.h>
#include <Persona.h>

template <typename T>
class listaDobleCircular {
public:
   listaDobleCircular();
   ~listaDobleCircular();
   void insertar(T persona);
   void eliminar(T persona);
   void imprimirDatos(void);
   Nodo<T> crearNodo(T persona);
   int cantidadNodos(void);
   void agregarPersona(T persona);
   T buscarPorCedula(std::string cedula);
   Nodo<T>* getUltimo(void);
   void setUltimo(Nodo<T>* newUltimo);
   Nodo<T>* getPrimero(void);
   void setPrimero(Nodo<T>* newPrimero);

   Nodo<T>** nodo;

protected:
private:
   Nodo<T>* ultimo;
   Nodo<T>* primero;
};

#endif