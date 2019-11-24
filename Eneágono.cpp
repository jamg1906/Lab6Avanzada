#include "Eneágono.h"

double Eneágono::ObtenerPerimetro(double lado)
{
	return lado * 9;
}
double Eneágono::ObtenerArea(double lado, double apotema)
{
	double peri = ObtenerPerimetro(lado);
	return peri * apotema * 0.5;
}