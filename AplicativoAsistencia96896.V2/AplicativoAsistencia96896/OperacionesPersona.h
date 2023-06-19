#ifndef OPERACIONESPERSONA_H
#define OPERACIONESPERSONA_H

#include "Persona.h"
#include "listaDobleCircular.h"
#include <iostream>
#include <string>
#include <ctime> // Para trabajar con fechas y tiempos
#include <fstream> // Para trabajar con archivos



class OperacionesPersona{

	public:
	static Persona pedirDatosPersona();
	static void guardarPersonaEnArchivo(Persona persona);
    static void mostrarPersonasRegistradas();
	
	template <typename T>
	static listaDobleCircular<T> cargarDatosDeArchivoEnLista(listaDobleCircular<T> personasRegistradas) {

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
                std::getline(file, line);
                std::string  fechaNacimiento = line.substr(20);  // Extrae el año de nacimiento
                Persona persona(cedula, nombre, apellido, fechaNacimiento);

                // Inserta el empleado en la lista
                personasRegistradas->insertar(persona);
            }
        }
        file.close();
        return personasRegistradas;
	};
};
#endif 
//
//template <typename T>
//listaDobleCircular<T> OperacionesPersona::cargarDatosDeArchivoEnLista(listaDobleCircular<T> personasRegistradas) {
//
//}
