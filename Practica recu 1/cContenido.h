#pragma once

#ifndef _CCONTENIDO_H
#define _CCONTENIDO_H

#include "cDispositivo.h"
using namespace std;

class cContenido {
protected:
	string titulo;
	string Director;
	string Productor;
	unsigned int Anio_lanzamiento;
	double Duracion;
	list<string> audio;
	list<string> subtitulos;
	friend class cDispositivo;
	friend class cPelicula;
public:
	string get_nombre();
};
#endif