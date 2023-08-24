#pragma once
#include "Planta.h"
class Girasol :
    public Planta
{
	int soles;
public:
	//Constructores
	Girasol() {};
	//Metodos accesores
	int getGolpear() { return soles; }
	void setGolpear(int _soles) { soles = _soles; }
	//Metodos propios
	void darSol();
};

