#include "ZombiExcavador.h"
void ZombiExcavador::excava()
{
	direccionY = 1;
	for (int i = 0; i < 10; i++)
	{
		posicionY += direccionY * velocidadMovimiento;
		//usa su pala moviendo la planta 2 cuadros atras
	}
}