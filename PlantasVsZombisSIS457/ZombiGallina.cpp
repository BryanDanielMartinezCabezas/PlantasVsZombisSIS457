#include "ZombiGallina.h"
void ZombiGallina::gallinas()
{
	direccionY = 1;
	for (int i = 0; i < 10; i++)
	{
		posicionY += direccionY * velocidadMovimiento;
		//salen gallinas muy veloces pero con 1 de vida
	}
}