#include "Ene�gono.h"

double Ene�gono::ObtenerPerimetro(double lado)
{
	return lado * 9;
}
double Ene�gono::ObtenerArea(double lado, double apotema)
{
	double peri = ObtenerPerimetro(lado);
	return peri * apotema * 0.5;
}