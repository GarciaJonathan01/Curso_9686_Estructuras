#pragma once
#include <sstream>
#include <string>
#include <iostream>

template <typename T>
class Fraccion
{
public:
	Fraccion(T numerador, T denominador);
	T getNumerador()const;
	T setNumerador(T numerador);
	T getDenominador()const;
	T setDenominador(T numerador);
	std::string toString();
private:
	T numerador;
	T denominador;
};

template <typename T>
Fraccion<T>::Fraccion(T numerador, T denominador) : numerador(numerador), denominador(denominador) {};

template <typename T>
T Fraccion<T>::getNumerador()const{
	return numerador;
};

template <typename T>
T Fraccion<T>::getDenominador()const {
	return denominador;
};

template <typename T>
T Fraccion<T>::setNumerador(T numerador) {
	this->setNumerador = numerador;
};

template <typename T>
T Fraccion<T>::setDenominador(T denominador) {
	this->setDenominador = denominador;
}

template <typename T>
inline std::string Fraccion<T>::toString()
{
	return std::to_string(numerador) + "/" + std::to_string(denominador);
}
