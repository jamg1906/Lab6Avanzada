#pragma once
class Pol�gono
{
public:
	double Lado;
	virtual double ObtenerArea(double lado);
	virtual double ObtenerPerimetro(double lado);
	void DefinirLado(double lado)
	{
		Lado = lado;
	}
};

