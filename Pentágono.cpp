#include "Pent�gono.h"

double Pent�gono::ObtenerPerimetro(double lado)
{
	return lado * 5;
}

double Pent�gono::ObtenerArea(double perimetro, double apotema)
{
	return perimetro * apotema * 0.5;
}