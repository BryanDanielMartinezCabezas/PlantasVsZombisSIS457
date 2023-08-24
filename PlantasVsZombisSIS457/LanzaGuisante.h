#pragma once
#include "Planta.h"
class LanzaGuisante :
    public Planta
{
	int guisante;
public:
	//Constructores
	LanzaGuisante() {};
	//Metodos accesores
	int getGuisante() { return guisante; }
	void setGuisante(int _guisante) { guisante = _guisante; }
	//Metodos propios
	void lanzarGuisante();
};

