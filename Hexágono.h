#pragma once
#include "Polígono.h"
class Hexágono: public Polígono
{
public:
	double ObtenerPerimetro(double lado);
	double ObtenerArea(double lado, double apotema);

};

