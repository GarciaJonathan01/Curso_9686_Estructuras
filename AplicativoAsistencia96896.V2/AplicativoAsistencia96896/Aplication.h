#pragma once
#include "OperacionesPersona.h"
#include "Registro.h"
class Aplication
{
public:
	Aplication() {};
	void run();
	void registroNuevoEmpleado();
	void registrarEntrada();
	void mostrarPersonasRegistradas();

private:
	OperacionesPersona operacionesPersona;
	Registro registro;
};

