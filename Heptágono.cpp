#include "Hept�gono.h"
double Hept�gono::ObtenerArea(double lado, double apotema)
{
	double perimetro = ObtenerPerimetro(lado);
	return perimetro * apotema * 0.5;
}
double Hept�gono::ObtenerPerimetro(double lado)
{
	return lado * 7;
}