#include "OperacionesPersona.h"
#include <iostream>
#include <string.h>
#include <ctime> // Para trabajar con fechas y tiempos
#include <fstream> // Para trabajar con archivo

Persona OperacionesPersona::pedirDatosPersona()
{
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
    
     //Validar la fecha de nacimiento
     //Se asume que el formato de fecha es correcto (dd/mm/aaaa)
    
    // Obtener fecha actual
    std::time_t currentTime = std::time(nullptr);
    std::tm localTime;
    localtime_s(&localTime, &currentTime);
    int currentYear = localTime.tm_year + 1900;
    int currentMonth = localTime.tm_mon + 1;
    int currentDay = localTime.tm_mday;
    
    // Obtener día, mes y año de la fecha de nacimiento ingresada
    int day, month, year;
    if (sscanf_s(fechaNacimiento.c_str(), "%d/%d/%d", &day, &month, &year) != 3) {
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

void OperacionesPersona::guardarPersonaEnArchivo(Persona persona)
{
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

void OperacionesPersona::mostrarPersonasRegistradas()
{
    std::ifstream archivo("personasRegistradas.txt");
        if (archivo.fail()) {
            std::cout << "ERROR: No se pudo abrir o encontrar el archivo.\n";
            return;
        }
    
        std::string line;
        while (std::getline(archivo, line)) {
            std::cout << line << "\n";
        }
    
        archivo.close();
}