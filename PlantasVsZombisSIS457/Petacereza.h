#pragma once
#include "Planta.h"
class Petacereza :
    public Planta
{
	int explotar;
public:
	//Constructores
	Petacereza() {};
	//Metodos accesores
	int getExplotar() { return explotar; }
	void setExplotar(int _explotar) { explotar = _explotar; }
	//Metodos propios
	void explota();
};

