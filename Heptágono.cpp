#include "Heptágono.h"
double Heptágono::ObtenerArea(double lado, double apotema)
{
	double perimetro = ObtenerPerimetro(lado);
	return perimetro * apotema * 0.5;
}
double Heptágono::ObtenerPerimetro(double lado)
{
	return lado * 7;
}