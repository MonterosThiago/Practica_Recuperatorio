#pragma once
#ifndef _CPELICULA_H
#define _CPELICULA_H
#include "cCont_Normal.h"

class cPelicula: public cContenidoNormal {
private:

public:
	cPelicula();
	cPelicula(cPelicula& copia);
	cPelicula(list<cContenido*>::iterator copia);
	~cPelicula();


};
#endif