#include "Oct�gono.h"
double Oct�gono::ObtenerArea(double lado, double apotema)
{
	double peri = ObtenerPerimetro(lado);
	return peri * 0.5 * apotema;
}
double Oct�gono::ObtenerPerimetro(double lado)
{
	return lado * 8;
}