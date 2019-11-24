#include "Triángulo.h"

double Triángulo::ObtenerArea(double lado, double altura)
{
	double Area = (lado * altura) / 2;
	return Area;
}

double Triángulo::ObtenerPerimetro(double lado)
{
	return lado * 3;
}