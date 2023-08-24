#pragma once
#include "Zombi.h"
class ZombiGallina : public Zombi
{
	int gallina;
public:
	//Constructores
	ZombiGallina() {};
	//Metodos accesores
	int getGallina() { return gallina; }
	void setGallina(int _gallina) { gallina = _gallina; }
	//Metodos propios
	void gallinas();
};

