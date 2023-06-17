// Deber01.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Fraccion.h"
#include "Procesos.h"

int main()
{
	Procesos<float> p;
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

	std::cout << "\nEl primer termino es: " << p.procesoa(fr1, fr2).toString() << "\n";
	std::cout << "\nEl primer termino es: " << p.procesoa(num1, num2, num3, num4).toString() << "\n";
	std::cout << "\nEl primer termino es: " << p.procesof(fr1, fr2) << "\n";
	std::cout << "\nEl primer termino es: " << p.procesof(num1, num2, num3, num4) << "\n";
}
