#ifndef OPERACIONESPERSONA_H
#define OPERACIONESPERSONA_H

#include "Persona.h"
#include "listaDobleCircular.h"
#include <iostream>
#include <fstream>
#include <ctime> // Para trabajar con fechas y tiempos

class OperacionesPersona
{
	public:
	static Persona pedirDatosPersona();
	static void guardarPersonaEnArchivo(Persona persona);
	
	template <class T>
	static listaDobleCircular<T>* cargarDatosDeArchivoEnLista(listaDobleCircular<T>* personasRegistradas);
	
	
};

Persona OperacionesPersona::pedirDatosPersona() {
    std::string nombre;
    std::string apellido;
    std::string cedula;
    std::string fechaNacimiento;

    std::cout << "\nIngrese el Nombre: ";
    std::cin >> nombre;
    std::cout << "\nIngrese el Apellido: ";
    std::cin >> apellido;
    std::cout << "\nIngrese la Cedula: ";
    std::cin >> cedula;
    std::cout << "\nIngrese la Fecha de Nacimiento (formato: dd/mm/aaaa): "; //Falta pulir bien las validaciones de la fecha
    std::cin >> fechaNacimiento;

    // Validar la fecha de nacimiento
    // Se asume que el formato de fecha es correcto (dd/mm/aaaa)

    // Obtener fecha actual
    std::time_t currentTime = std::time(nullptr);
    std::tm* localTime = std::localtime(&currentTime);
    int currentYear = localTime->tm_year + 1900;
    int currentMonth = localTime->tm_mon + 1;
    int currentDay = localTime->tm_mday;

    // Obtener día, mes y año de la fecha de nacimiento ingresada
    int day, month, year;
    if (std::sscanf(fechaNacimiento.c_str(), "%d/%d/%d", &day, &month, &year) != 3) {
        std::cout << "Formato de fecha incorrecto. Vuelva a intentarlo.\n";
        return pedirDatosPersona();
    }

    // Validar fecha de nacimiento
    if (year > currentYear || year < 1900 || year > 2005) {
        std::cout << "Año de nacimiento inválido. Vuelva a intentarlo.\n";
        return pedirDatosPersona();
    }
    if (year == currentYear && month > currentMonth) {
        std::cout << "Mes de nacimiento inválido. Vuelva a intentarlo.\n";
        return pedirDatosPersona();
    }
    if (year == currentYear && month == currentMonth && day > currentDay) {
        std::cout << "Día de nacimiento inválido. Vuelva a intentarlo.\n";
        return pedirDatosPersona();
    }

    // Validar mes y número máximo de días
    if (month < 1 || month > 12) {
        std::cout << "Mes de nacimiento inválido. Vuelva a intentarlo.\n";
        return pedirDatosPersona();
    }

    int maxDays = 31; // Por defecto, máximo de días es 31
    if (month == 2) {
        // Febrero
        bool esBisiesto = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        maxDays = esBisiesto ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        // Abril, Junio, Septiembre, Noviembre
        maxDays = 30;
    }

    if (day < 1 || day > maxDays) {
        std::cout << "Día de nacimiento inválido. Vuelva a intentarlo.\n";
        return pedirDatosPersona();
    }

    Persona persona(cedula, nombre, apellido, fechaNacimiento);
    return persona;
}

void OperacionesPersona::guardarPersonaEnArchivo(Persona persona) {
    std::ofstream archivo("personasRegistradas.txt", std::ios::app);
    if (archivo.fail()) {
        std::cout << "ERROR: No se pudo abrir o encontrar el archivo.\n";
        return;
    }

    archivo << "Cedula:   " << persona.getCedula() << "\n";
    archivo << "Nombre:   " << persona.getNombre() << "\n";
    archivo << "Apellido: " << persona.getApellido() << "\n";
    archivo << "Fecha de Nacimiento: " << persona.getFechaNacimiento() << "\n";
    archivo << "---------------------------------\n";

    archivo.close();
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
            std::getline(file, line);
			std::string  fechaNacimiento= line.substr(20);  // Extrae el año de nacimiento
			Persona persona(cedula,nombre,apellido, fechaNacimiento);
			
            // Inserta el empleado en la lista
            personasRegistradas->insertar(persona);
        }
    }
    file.close();
    return personasRegistradas;
}

#endif