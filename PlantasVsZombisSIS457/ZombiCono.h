#pragma once
#include "Zombi.h"
class ZombiCono : public Zombi
{
	int cono;
public:
	//Constructores
	ZombiCono() {};
	//Metodos accesores
	int getCono() { return cono; }
	void setCono(int _cono) { cono = _cono; }
	//Metodos propios
	void conos();

};

