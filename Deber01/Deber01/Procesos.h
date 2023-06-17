#pragma once
#include "Operaciones.h"
#include "Fraccion.h"

template <typename T>
class Procesos : public Operaciones<T>
{
public:
	Procesos();
	Fraccion<T> procesoa(Fraccion<T> fraccion1, Fraccion<T> fraccion2);
	Fraccion<T> procesoa(T num1, T num2, T num3, T num4);
	T procesof(Fraccion<T> fraccion1, Fraccion<T> fraccion2);
	T procesof(T num1, T num2, T num3, T num4);
	//T ingresar();
};


template <typename T>
Procesos<T>::Procesos() {

}

template <typename T>
Fraccion<T> Procesos<T>::procesoa(Fraccion<T> fraccion1, Fraccion<T> fraccion2){
	Fraccion<T> nueva((fraccion1.getNumerador() * fraccion2.getDenominador()) + (fraccion1.getDenominador() * fraccion2.getNumerador()), (fraccion1.getDenominador() + fraccion2.getDenominador()));
	return nueva;
}

template <typename T>
Fraccion<T> Procesos<T>::procesoa(T num1, T num2, T num3, T num4) {
	Fraccion<T> fraccion1(num1, num2);
	Fraccion<T> fraccion2(num3, num4);
	Fraccion<T> nueva((fraccion1.getNumerador() * fraccion2.getDenominador()) + (fraccion1.getDenominador() * fraccion2.getNumerador()), (fraccion1.getDenominador() + fraccion2.getDenominador()));
	return nueva;
}

template <typename T>
T Procesos<T>::procesof(Fraccion<T> fraccion1, Fraccion<T> fraccion2) {
	Fraccion<T> nueva((fraccion1.getNumerador() * fraccion2.getDenominador()) + (fraccion1.getDenominador() * fraccion2.getNumerador()), (fraccion1.getDenominador() + fraccion2.getDenominador()));
	return nueva.getNumerador()/nueva.getDenominador();
}

template <typename T>
T Procesos<T>::procesof(T num1, T num2, T num3, T num4) {
	T numerador = ((num1 * num4) + (num2 * num3));
	T denominador = (num2 + num4);
	return numerador/denominador;
}

/*template <typename T>
T Procesos<T>::ingresar() {
	float num1, num2, num3, num4;
	printf("**************************************Fraccion 1 * ****************************\n");
	printf("\nIngrese el numerador 1:\t ");
	scanf_s("%f", &num1);
	printf("\nIngrese el denominador 1:\t ");
	scanf_s("%f", &num2);
	Fraccion<float> fr1(num1, num2);
	printf("\n************************************Fraccion 2 * ****************************\n");
	printf("\nIngrese el numerador 2:\t ");
	scanf_s("%f", &num3);
	printf("\nIngrese el denominador 2:\t ");
	scanf_s("%f", &num4);
	Fraccion<float> fr2(num3, num4);

	std::cout << "\nEl primer termino es: " << procesoa(fr1, fr2).toString() << "\n";
	std::cout << "\nEl primer termino es: " << procesoa(num1, num2, num3, num4).toString() << "\n";
	std::cout << "\nEl primer termino es: " << procesof(fr1, fr2) << "\n";
	std::cout << "\nEl primer termino es: " << procesof(num1, num2, num3, num4) << "\n";
}*/



