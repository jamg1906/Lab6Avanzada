#pragma once
#include "Polígono.h"
class Triángulo: public Polígono
{
public:
	double ObtenerArea(double lado, double altura);
	double ObtenerPerimetro(double lado);
};

