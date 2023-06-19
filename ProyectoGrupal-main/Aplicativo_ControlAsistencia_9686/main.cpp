#include <iostream>
#include "Nodo.cpp"
#include "Fecha.h"
#include "listaDobleCircular.cpp"
#include "Persona.h"
#include "OperacionesPersona.h"



int main(int argc, char** argv) {
	Fecha fecha;
	std::cout <<fecha<<std::endl;
	int opc;
	Persona personaTemp;
	
	do{
	//INICIALIZAMOS LAS VARIABLES Y LA LISTA DOBLEMENTE CIRCULAR
	
	Nodo<Persona>* nodo;
	listaDobleCircular<Persona>* personasRegistradas = new listaDobleCircular<Persona>();
	
	//Esta función carga las personas del txt en la lista y las devuelve para que se actualicen.
	//personasRegistradas = OperacionesPersona::cargarDatosDeArchivoEnLista(personasRegistradas);
	
	
	std::cout<<"\n============PROGRAMA DE REGISTRO============"<<std::endl;
	std::cout<<"1. Registro de Nuevo Empleado"<<std::endl;
	std::cout<<"\nPor favor, seleccione una opcion: ";
	std::cin>>opc;
	
	switch(opc){
		case 1:
			personaTemp = OperacionesPersona::pedirDatosPersona();
			OperacionesPersona::guardarPersonaEnArchivo(personaTemp);
		break;
		default:
			
		break;
	}
}while(opc!=0);
	return 0;
}