#include "ZombiCono.h"
void ZombiCono::conos()
{
	direccionY = 1;
	for (int i = 0; i < 10; i++)
	{
		posicionY += direccionY * velocidadMovimiento;
		//el cono le da mas vida
	}


}