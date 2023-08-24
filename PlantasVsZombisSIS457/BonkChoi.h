#pragma once
#include "Planta.h"
class BonkChoi : public Planta
{
	int golpear;
public:
	//Constructores
	BonkChoi() {};
	//Metodos accesores
	int getGolpear() { return golpear; }
	void setGolpear(int _golpear) { golpear = _golpear; }
	//Metodos propios
	void golpea();
};

