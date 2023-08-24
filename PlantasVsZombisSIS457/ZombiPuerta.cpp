#include "ZombiPuerta.h"
ZombiPuerta::ZombiPuerta()
{
	int vida = 100;
}
void ZombiPuerta::puertas()
{
	direccionY = 1;
	for (int i = 0; i < 10; i++)
	{
		posicionY += direccionY * velocidadMovimiento;
		//la puerta le da mas vida
	}
}