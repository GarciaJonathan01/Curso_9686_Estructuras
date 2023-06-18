#pragma once
#include "OperacionesPersona.h"
class Aplication
{
public:
	Aplication() {};
	void run();
	void registroNuevoEmpleado();
	void ingresarRegistro();

private:
	OperacionesPersona operacionesPersona;
};

