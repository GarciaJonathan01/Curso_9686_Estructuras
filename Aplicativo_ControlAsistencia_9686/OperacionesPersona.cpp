/*#include "OperacionesPersona.h"
#include <iostream>
#include <fstream>
#include "Persona.h"

Persona OperacionesPersona::pedirDatosPersona(){
	std::string nombre;
	std::string apellido;
	std::string cedula;

	std::cout<<"\nIngrese el Nombre: ";
	std::cin>>nombre;
	std::cout<<"\nIngrese el Apellido: ";
	std::cin>>apellido;
	std::cout<<"\nIngrese la Cedula: ";
	std::cin>>cedula;
	
	Persona persona(cedula,nombre,apellido);
	return persona;
}

void OperacionesPersona::guardarPersonaEnArchivo(Persona persona){
	std::ofstream archive;
	archive.open("personasRegistradas.txt", std::ios::app);
	if (archive.fail()) {
        std::cout << "ERROR, no se pudo abrir o encontrar el archivo" << std::endl;
    }else{
    archive <<"Cedula:   "<<persona.getCedula();
    archive <<"\nNombre:   "<<persona.getNombre();
    archive <<"\nApellido: "<<persona.getApellido();
    archive << "\n---------------------------------" << std::endl;
	}

    archive.close(); 
}

template <typename T>
listaDobleCircular<T>* OperacionesPersona::cargarDatosDeArchivoEnLista(listaDobleCircular<T>* personasRegistradas){

	std::ifstream file("personasRegistradas.txt");
	if (!file) {
        std::cerr << "No se ha podido abrir el archivo\n";
        //menuPrincipal();
        std::cerr << "SE DEBERÍA VOLVER AL MENU PRINCIPAL AQUI\n";
    }
	
    std::string line;
    while (std::getline(file, line)) {
        if (line.find("Nombre:") != std::string::npos) {
            std::string cedula = line.substr(10);  // Extrae la cédula del Empleado
            std::getline(file, line);
            std::string nombre = line.substr(10);  // Extrae el nombre del Empleado
            std::getline(file, line);
            std::string apellido = line.substr(10);  // Extrae el Apellido del Empleado

			Persona persona(cedula,nombre,apellido);
			
            // Inserta el empleado en la lista
            personasRegistradas->insertar(persona);
        }
    }
    file.close();
    return personasRegistradas;
}
*/