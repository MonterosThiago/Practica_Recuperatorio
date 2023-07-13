#pragma once

#ifndef _CPC_H
#define _CPC_H

#include "cDispositivo.h"

class cPC : public cDispositivo {

public:
	cPC();
	~cPC();
	void Reproducir(cContenido* contenido);
	void  Pausar();
	void  Cancelar();
};
#endif