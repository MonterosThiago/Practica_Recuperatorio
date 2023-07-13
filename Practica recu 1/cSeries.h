#pragma once
#ifndef _CSERIES_H
#define _CSERIES_H
#include "cCont_Normal.h"

class cSeries : public cContenidoNormal {
private:
	unsigned int Cantidad_Temporadas;
	unsigned int Capitulos_por_Temp;
};
#endif