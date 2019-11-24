#include "Cuadrilátero.h"

double Cuadrilátero::ObtenerArea(double lado)
{
	return lado * lado;
}

double Cuadrilátero::ObtenerPerimetro(double lado)
{
	return lado * 4;
}