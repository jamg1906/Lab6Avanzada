#include "Octágono.h"
double Octágono::ObtenerArea(double lado, double apotema)
{
	double peri = ObtenerPerimetro(lado);
	return peri * 0.5 * apotema;
}
double Octágono::ObtenerPerimetro(double lado)
{
	return lado * 8;
}