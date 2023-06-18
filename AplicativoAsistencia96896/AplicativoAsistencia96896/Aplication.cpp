#include "Aplication.h"
#include <iostream>
#include "menu.h"
#include "Persona.h"

void Aplication::run()
{
	Menu menu("Menu Principal");
	menu.add(MenuItem("Registro de Nuevo Empleado.",std::bind(&Aplication::registroNuevoEmpleado,this)));
	menu.add(MenuItem("Ingresar Registro.",std::bind(&Aplication::ingresarRegistro,this)));
	menu.run();

}

void Aplication::registroNuevoEmpleado()
{
	Persona persona = operacionesPersona.pedirDatosPersona();
	operacionesPersona.guardarPersonaEnArchivo(persona);
	std::cout << "Persona guardada con exito." << std::endl;

}

void Aplication::ingresarRegistro()
{
std::string cedula;
	std::cout << "Ingrese la cedula del empleado: ";
	std::cin >> cedula;
	//Persona persona = operacionesPersona.buscarPersonaPorCedula(cedula);
	/*if(persona.getCedula() == "")
	{
		std::cout << "No se encontro la persona." << std::endl;
		return;
	}


	std::cout << "Ingrese el monto a pagar: ";
	double monto;
	std::cin >> monto;
	operacionesPersona.ingresarRegistro(persona,monto);
	std::cout << "Registro ingresado con exito." << std::endl;*/
}