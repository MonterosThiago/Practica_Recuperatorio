#include "cPamplix.h"

cPamplix::cPamplix()
{
    cPamplix::TotalCOntenido = 250;
}

cPamplix::~cPamplix()
{

}

void cPamplix::Agregar_Perfil(cPerfil* per)
{
}

void cPamplix::Agregar_Cuenta(cCuenta* tacuen)
{
    this->cuentas.push_back(tacuen);
}


cCuenta* cPamplix::Buscar_Cuenta(string Mail)
{
    list<cCuenta*>::iterator it = this->cuentas.begin();

    while (it != this->cuentas.end())
    {
        if ((*it)->get_mail() == Mail)
            return *it;
        it++;
    }
    throw new exception;

}

cPelicula* cPamplix::Buscar_Pelicula(string titulo)
{
    list<cContenido*>::iterator it = this->Contenidos.begin();

    while (it != this->Contenidos.end())
    {
        if ((*it)->get_nombre() == titulo) {
            cPelicula* copia = new cPelicula(it);
            return copia;
        }

        it++;
    }
    if (it == this->Contenidos.end())
        throw new exception;
}

list<cContenido*> cPamplix::get_cont()
{
    return this->Contenidos;
}

list<cContenido*>::iterator cPamplix::get_primer_contenido()
{
    return this->Contenidos.begin();
}

list<cContenido*>::iterator cPamplix::get_ultimo_contenido()
{
    return this->Contenidos.end();
}

cCuenta* cPamplix::SingUp(string mail, string contra, string num_tarjeta)
{
    cCuenta* nueva = new cCuenta(mail, contra, num_tarjeta);
    Agregar_Cuenta(nueva);
    return nueva;
}
