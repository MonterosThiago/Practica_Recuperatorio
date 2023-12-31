#pragma once 

#include "cPamplix.h"
#include "cExceptionPerfil.h"
#include "libraries.h"

int main()
{
	cPamplix* PamplixCorp = new cPamplix();
	cout << PamplixCorp;

	try {
		cDispositivo* midispositivo = new cAndroid(PamplixCorp);

		midispositivo->login("campitoloco92@gmail.com", "River2018");
		cCuenta* Francisco = midispositivo->get_usuario();

		cLista_Perfiles* MisPerfiles= midispositivo->Perfiles_Disponibles();
		cPerfil* MiPerfil = (*MisPerfiles)["Fran"];
		cContenido* contenido = MiPerfil->Elegir_contenido_random();

		midispositivo->Reproducir(contenido);
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}

	try {
		cDispositivo* misdispositivo2 = new cAndroid(2, PamplixCorp);
		misdispositivo2->login("campitoloco92@gmail.com", "River2018");

		cDispositivo* midispositivo3 = new cAndroid(PamplixCorp);
		midispositivo3->login("campitoloco92@gmail.com", "River2018");
	}
	catch (exception& e) { cout << e.what() << endl; }

	cCuenta* Cindy = PamplixCorp->SingUp("cindylamejor@hotmail.com", "mu�eco4everandever", "4319-6542-6489-1234");
	try {
		cDispositivo* midispositivo4 = new cAndroid(PamplixCorp);
		cPerfil* mio = new cPerfil("Cin");
		cPerfil* flia = new cPerfil("Familia", false);
		cPerfil* Franco = new cPerfil();
		cin >> *Franco;
		cout << Franco;
		(*Cindy) + mio;
		(*Cindy) + flia;
		*Cindy + Franco;

		stack<string> pelisADescargar;
		(*Cindy) - Franco;
		pelisADescargar.push("Harry Potter y la piedra filosofal");
		pelisADescargar.push("Cars");
		pelisADescargar.push("Intensamente");
		
		midispositivo4->login("cindylamejor@hotmail.com", "mu�eco4everandever");
		midispositivo4->Descargar_Contenido(pelisADescargar);
		midispositivo4->logout();
	}
	catch (cExceptionPerfil* e) { cout << e->what() << endl;}
}