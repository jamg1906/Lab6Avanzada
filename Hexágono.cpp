#include "Hex�gono.h"

double Hex�gono::ObtenerPerimetro(double lado)
{
	return lado * 6;
}

double Hex�gono::ObtenerArea(double lado, double apotema)
{
	double peri = ObtenerPerimetro(lado);

	return peri * apotema * 0.5;
}