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

private:
	OperacionesPersona operacionesPersona;
	Registro registro;
};

