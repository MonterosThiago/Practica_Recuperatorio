#pragma once

#ifndef _CANDROID_H
#define _CANDROID_H

#include "cDispositivo.h"

class cAndroid : public cDispositivo {

private:
	string nombre_bluetooth;
public:
	cAndroid(cPamplix* a);
	cAndroid(unsigned int a, cPamplix* ap);
	~cAndroid();
	void Reproducir(cContenido* contenido);
	void Pausar();
	void Cancelar();

};
#endif