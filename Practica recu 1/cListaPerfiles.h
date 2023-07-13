#pragma once

#ifndef _CLISTAPERFILES_H
#define _CLISTAPERFILES_H
#include "cPerfil.h"
#include <list>
using namespace std;

class cLista_Perfiles {
private:
	list<cPerfil*> lista;
public:
	cPerfil* operator[](string nombre);
	list<cPerfil*>::iterator Begin();
	list<cPerfil*>::iterator end();
	void push_back(list<cPerfil*>::iterator cosa);
	void push_back(cPerfil* agregado);
	void remove(cPerfil* borrado);
};

#endif