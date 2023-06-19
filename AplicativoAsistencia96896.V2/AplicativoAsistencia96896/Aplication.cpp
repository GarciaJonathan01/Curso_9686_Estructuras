#include "Aplication.h"
#include <iostream>
#include "menu.h"
#include "Persona.h"

void Aplication::run()
{
	Menu menu("Menu Principal");
	menu.add(MenuItem("Registro de Nuevo Empleado.",std::bind(&Aplication::registroNuevoEmpleado,this)));
	menu.add(MenuItem("Registro Entrada.",std::bind(&Aplication::registrarEntrada,this)));
	menu.add(MenuItem("Mostrar personas registradas", std::bind(&Aplication::mostrarPersonasRegistradas,this)));
	menu.run();

}

void Aplication::registroNuevoEmpleado()
{
	Persona persona = operacionesPersona.pedirDatosPersona();
	operacionesPersona.guardarPersonaEnArchivo(persona);
	std::cout << "Persona guardada con exito." << std::endl;

}


void Aplication::registrarEntrada(){
	registro.registrarEntradaAutom();
	system("pause");


}

void Aplication::mostrarPersonasRegistradas()
{
	operacionesPersona.mostrarPersonasRegistradas();
	system("pause");
}