#include "Decágono.h"

double Decágono::ObtenerArea(double lado, double apotema)
{
	double peri = ObtenerPerimetro(lado);
	return peri * apotema * 0.5;
}

double Decágono::ObtenerPerimetro(double lado)
{
	return lado * 10;
}