#include "cCuenta.h"

cCuenta::cCuenta(string mail, string contra, string tarjeta_):Mail(mail)
{
    this->contrasenia = contra;
    this->tarjeta = tarjeta_;
}

cCuenta::~cCuenta()
{
}

cLista_Perfiles* cCuenta::getPerfiles()
{
    cLista_Perfiles* Nuevalista;
    list<cPerfil*>::iterator it = this->Perfiles->Begin();

    while (it != this->Perfiles->end())
    {
        if ((*it)->get_disponibilidad() == false)
            Nuevalista->push_back(it);
        it++;
    }
    return Nuevalista;
}

void cCuenta::operator-(cPerfil* quitado)
{
    cPerfil* aux = quitado;
    this->Perfiles->remove(quitado);
    delete aux;
}

string cCuenta::get_mail()
{
    return this->Mail;
}

string cCuenta::get_contra()
{
    return this->contrasenia;
}

void cCuenta::agregar_perfil(cPerfil* nuevo)
{
    this->Perfiles->push_back(nuevo);
}

void operator+(cCuenta original, cPerfil* agregado)
{
    original.agregar_perfil(agregado);
}
