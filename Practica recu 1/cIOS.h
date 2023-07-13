#pragma once

#ifndef _CIOS_H
#define _CIOS_H

#include "cDispositivo.h"

class cIOS : public cDispositivo {

public: 
	cIOS();
	~cIOS();
	void Reproducir(cContenido* contenido);
	void Pausar();
	void Cancelar();
};
#endif