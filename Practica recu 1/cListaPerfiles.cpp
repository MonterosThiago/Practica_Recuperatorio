#include "cListaPerfiles.h"

cPerfil* cLista_Perfiles::operator[](string nombre)
{
    list<cPerfil*>::iterator it = this->lista.begin();

    while (it != this->lista.end())
    {
        if ((*it)->get_nombre() == nombre)
            return *it;
        it++;
    }
    if (it == this->lista.end())
        throw new exception;
}

list<cPerfil*>::iterator cLista_Perfiles::Begin()
{
    return this->lista.begin();
}

list<cPerfil*>::iterator cLista_Perfiles::end()
{
    return this->lista.end();
}

void cLista_Perfiles::push_back(list<cPerfil*>::iterator cosa)
{
    this->lista.push_back(*cosa);
}

void cLista_Perfiles::push_back(cPerfil* agregado)
{
    this->lista.push_back(agregado);
}

void cLista_Perfiles::remove(cPerfil* borrado)
{
    this->lista.remove(borrado);
}
