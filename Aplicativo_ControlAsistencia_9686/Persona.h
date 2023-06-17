/*********************************************************************************
 * Module:  fecha.cpp
 * Authores:  Curso Estructuras De Datos
 * NRC: 9686
 * Created: viernes, 16 junio de 2023
 * Modified: sabado, 17 de junio de 2023 
 * Purpose: Modelado de Sistema para Control de Asistencia y su Implementacion  
 ********************************************************************************/

#if !defined(__Class_Diagram_1_Persona_h)
#define __Class_Diagram_1_Persona_h

class Registro;
class fecha;

class Persona
{
public:
   std::string getCedula(void);
   void setCedula(std::string newCedula);
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);
   Persona();
   ~Persona();

   Registro** registro;
   fecha** fecha;

protected:
private:
   std::string cedula;
   std::string nombre;
   std::string apellido;


};

#endif