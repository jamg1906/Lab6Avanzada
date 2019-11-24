#include "Pentágono.h"

double Pentágono::ObtenerPerimetro(double lado)
{
	return lado * 5;
}

double Pentágono::ObtenerArea(double perimetro, double apotema)
{
	return perimetro * apotema * 0.5;
}