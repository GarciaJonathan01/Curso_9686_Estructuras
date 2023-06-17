#pragma once
#include "Fraccion.h"
template <typename T>
class Operaciones
{
public:
	virtual Fraccion <T> procesoa(Fraccion<T> fraccion1, Fraccion<T> fraccion2) = 0;
	virtual Fraccion <T> procesoa(T num1, T num2, T num3, T num4) = 0;
	virtual T procesof(Fraccion<T> fraccion1, Fraccion<T> fraccion2) = 0;
	virtual T procesof(T num1, T num2, T num3, T num4) = 0;
	//virtual T ingresar() = 0;
};



