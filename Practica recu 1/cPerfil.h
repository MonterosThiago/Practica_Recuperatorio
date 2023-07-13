#pragma once
#ifndef _CPERFIL_H
#define _CPERFIL_H
#include "cEstadoVisualizacion.h"

class cPerfil {
private:
	bool Familiar;
	list<cEstadoVisualizacion*> vistos;
	bool En_uso;
	list<cContenido*> contenidos;
	string nombre;
public:
	cPerfil();
	cPerfil(string nombre_, bool ATP);
	cPerfil(string nombre_);
	~cPerfil();
	cContenido* Elegir_contenido_random();
	ostream& operator<<(ostream& out);

	void MostrarContenidoVisto();
	string get_nombre();
	bool get_disponibilidad();
	void set_contenido(list<cContenido*> set);
	void agregar_a_vistos(cEstadoVisualizacion* agregado);
	friend istream& operator>>(istream& in, cPerfil cosa);
};
istream& operator>>(istream& in, cPerfil cosa)
list<cContenido*>::iterator operator+(list<cContenido*>::iterator original, unsigned int corrimiento);

#endif