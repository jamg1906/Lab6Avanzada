#include "Hexágono.h"

double Hexágono::ObtenerPerimetro(double lado)
{
	return lado * 6;
}

double Hexágono::ObtenerArea(double lado, double apotema)
{
	double peri = ObtenerPerimetro(lado);

	return peri * apotema * 0.5;
}