#include "cPerfil.h"
#include "cPamplix.h"
cPerfil::cPerfil()
{
}

cPerfil::cPerfil(string nombre_, bool ATP)
{
	this->nombre = nombre_;
	this->Familiar = ATP;
}

cPerfil::cPerfil(string nombre_)
{
	this->nombre = nombre_;
	this->Familiar = false;
}

cPerfil::~cPerfil()
{
}

cContenido* cPerfil::Elegir_contenido_random()
{
	list<cContenido*>::iterator it = this->contenidos.begin();
	srand(time(0));
	unsigned int corrimiento = (rand() % cPamplix::TotalCOntenido+1);

	return *(it+corrimiento);
}
ostream& cPerfil::operator<<(ostream& out)
{
	out << this->nombre<<" "<< this->Familiar<<endl;

}
istream& operator>>(istream& in, cPerfil cosa)
{
	in>>cosa.nombre >> cosa.Familiar;
	return in;
}

string cPerfil::get_nombre()
{
	return this->nombre;
}

bool cPerfil::get_disponibilidad()
{
	return this->En_uso;
}

void cPerfil::set_contenido(list<cContenido*> set)
{
	this->contenidos = set;
}

void cPerfil::agregar_a_vistos(cEstadoVisualizacion*agregado)
{
	this->vistos.push_back(agregado);
}

list<cContenido*>::iterator operator+(list<cContenido*>::iterator original, unsigned int corrimiento)
{
	list<cContenido*>::iterator it = original;
	for (int i = 0; i < corrimiento; i++)
	{
		it++;
	}
	return it;
}
