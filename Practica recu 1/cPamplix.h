#pragma once
#ifndef _CPAMPLIX_H
#define _CPAMPLIX_H

#include <iostream>
#include "cPelicula.h"
class cPamplix {
private:

	list<cContenido*> Contenidos;
	list<cDispositivo*> Dispositivos;
	list<cCuenta*>cuentas;
	friend cContenido* Elegir_contenido_random();
public:
	cPamplix();
	~cPamplix();
	void Agregar_Perfil(cPerfil* per);
	void Agregar_dispositivo(cDispositivo* dispo);
	void Agregar_Cuenta(cCuenta* tacuen);
	void Modificar_Perfiles(cPerfil* per);
	void Modificar_Cuentas(cCuenta* tacuen);
	void Modificar_Dispositivos(cDispositivo* dispo);
	void Dar_de_Baja_perfil(cPerfil* per);
	void Dar_de_Baja_Cuenta(cCuenta* tacuen);
	void Dar_de_Baja_Dispositivo(cDispositivo* dispo);
	cCuenta* Buscar_Cuenta(string Mail);
	cPelicula* Buscar_Pelicula(string titulo);
	list<cContenido*> get_cont();
	list<cContenido*>::iterator get_primer_contenido();
	list<cContenido*>::iterator get_ultimo_contenido();
	static int TotalCOntenido;
	cCuenta* SingUp(string mail, string contra, string num_tarjeta);
};
#endif