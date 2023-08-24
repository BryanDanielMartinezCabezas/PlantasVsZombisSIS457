#pragma once
#include "Zombi.h"
class ZombiPuerta : public Zombi
{
	int puerta;
public:
	//Constructores
	ZombiPuerta();
	//Metodos accesores
	int getPuerta() { return puerta; }
	void getPuerta(int _puerta) { puerta = _puerta; }
	//Metodos propios
	void puertas();
};

