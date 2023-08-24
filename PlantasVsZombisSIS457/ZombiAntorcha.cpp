#include "ZombiAntorcha.h"
void ZombiAntorcha::quema()
{
	direccionY = 1;
	for (int i = 0; i < 10; i++)
	{
		posicionY += direccionY * velocidadMovimiento;
		//quema todo a su paso
	}


}