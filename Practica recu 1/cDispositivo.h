#pragma once
#ifndef _CDISPOSITIVO_H
#define _CDISPOSITIVO_H
#include "cContenido.h"
#include "cCuenta.h"
#include "cPamplix.h"
#include <stack>
class cDispositivo {

protected:
	list<cContenido*> Descargados;
	cCuenta* Cuenta;
	const unsigned int id;
	unsigned int maximo;
	cPamplix* aplicacion;
	cPerfil* Perfil_actual;
	static unsigned int cantidad_dispositivos;

public:
	cDispositivo(cPamplix* a);
	cDispositivo(int id, cPamplix* a);
	void login(string Email, string password);
	void virtual Reproducir(cContenido* contenido)=0;
	void virtual Pausar() = 0;
	void virtual Cancelar() = 0;
	cCuenta* get_usuario();
	cLista_Perfiles* Perfiles_Disponibles();
	void Descargar_Contenido(stack<string> Pelis_A_Descargar);
	void logout();
};

#endif