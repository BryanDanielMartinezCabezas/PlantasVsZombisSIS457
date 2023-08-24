#pragma once
#include "Planta.h"
class LechugaIceberg: public Planta
{
	int congelar;
public:
	//Constructores
	LechugaIceberg() {};
	//Metodos accesores
	int getCongelar() { return congelar; }
	void setCongelar(int _congelar) { congelar = _congelar; }
	//Metodos propios
	void congela();
};

