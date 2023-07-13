#pragma once
#ifndef _CCUENTA_H
#define _CCUENTA_H

#include "cListaPerfiles.h"
class cCuenta {
	string tipo;
	unsigned int maxDispo;
	unsigned int maxPerfiles;
	const string Mail;
	string contrasenia;
	string tarjeta;
	float Precio;
	cLista_Perfiles* Perfiles;
	

public:
	cCuenta(string mail, string contra, string tarjeta);
	~cCuenta();
	cLista_Perfiles* getPerfiles();
	void operator-(cPerfil* quitado);
	string get_mail();
	string get_contra();
	void agregar_perfil(cPerfil* nuevo);
};
void operator+(cCuenta original,cPerfil* agregado);
#endif