#include "Tri�ngulo.h"

double Tri�ngulo::ObtenerArea(double lado, double altura)
{
	double Area = (lado * altura) / 2;
	return Area;
}

double Tri�ngulo::ObtenerPerimetro(double lado)
{
	return lado * 3;
}