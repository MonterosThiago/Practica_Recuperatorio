#include "cDispositivo.h"
#include "cPelicula.h"
cDispositivo::cDispositivo(cPamplix* a):id(cantidad_dispositivos)
{
  cDispositivo::cantidad_dispositivos++;
  this->aplicacion = a;
}
cDispositivo::cDispositivo(int id_, cPamplix* a):id(id_)
{
	this->aplicacion = a;
}
unsigned int cDispositivo::cantidad_dispositivos = 1;

void cDispositivo::login(string Email, string password)
{
	try {
		this->Cuenta = this->aplicacion->Buscar_Cuenta(Email);

	}
	catch (exception* e)
	{
		cout << e->what();
	}
}
cCuenta* cDispositivo::get_usuario()
{
	return this->Cuenta;
}

cLista_Perfiles* cDispositivo::Perfiles_Disponibles()
{
	cLista_Perfiles* aux= this->Cuenta->getPerfiles();
	list<cPerfil*>::iterator it = aux->Begin();

	while (it != aux->end())
	{
		(*it)->set_contenido(this->aplicacion->get_cont()); //les da acceso a los perfiles que se quieran usar a el contenido de la plataforma
	}
	return aux;
}

void cDispositivo::Descargar_Contenido(stack<string> Pelis_A_Descargar) //enrealidad habria que hacer uno para cada tipo de contenido
{
	while (!Pelis_A_Descargar.empty())
	{
		string aux = Pelis_A_Descargar.top();
		Pelis_A_Descargar.pop();
		try {
			this->Descargados.push_back(this->aplicacion->Buscar_Pelicula(aux));
		}
		catch (exception* e)
		{
			cout << e->what();
		}
	}
}
