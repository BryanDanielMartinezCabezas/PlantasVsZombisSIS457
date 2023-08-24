#pragma once
#include "Zombi.h"
class ZombiAntorcha : public Zombi
{
	int quemar;
public:
	//Constructores
	ZombiAntorcha() {};
	//Metodos accesores
	int getQuemar() { return quemar; }
	void setQuemar(int _quemar) { quemar = _quemar ; }
	//Metodos propios
	void quema();
};

