#pragma once
#include "Zombi.h"
class ZombiExcavador : public Zombi
{
	int excavar;
public:
	//Constructores
	ZombiExcavador() {};
	//Metodos accesores
	int getExcavar() { return excavar; }
	void setExcavar(int _excavar) { excavar = _excavar; }
	//Metodos propios
	void excava();//pala

};

