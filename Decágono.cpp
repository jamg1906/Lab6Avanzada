#include "Dec�gono.h"

double Dec�gono::ObtenerArea(double lado, double apotema)
{
	double peri = ObtenerPerimetro(lado);
	return peri * apotema * 0.5;
}

double Dec�gono::ObtenerPerimetro(double lado)
{
	return lado * 10;
}