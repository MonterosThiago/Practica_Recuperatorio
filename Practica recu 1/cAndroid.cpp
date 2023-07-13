#include "cAndroid.h"

cAndroid::cAndroid(cPamplix* a): cDispositivo(a)
{
	nombre_bluetooth = this->Perfil_actual->get_nombre();
}

cAndroid::cAndroid(unsigned int a, cPamplix* ap) :cDispositivo(a, ap)
{
}

cAndroid::~cAndroid()
{
}

void cAndroid::Reproducir(cContenido* contenido)
{
	list<cContenido*>::iterator it = this->aplicacion->get_primer_contenido();
	srand(time(0));
	bool completado = (bool)(rand() % 2);
	time_t aux; time(&aux);
	tm aux_tm;
	aux_tm.tm_year = 0; aux_tm.tm_mon = 0; aux_tm.tm_mday = 0;

	while (it != this->aplicacion->get_ultimo_contenido())
	{
		if ((*it) == contenido)
		{
			if (completado) {
				localtime_s(&aux_tm, &aux);
				cEstadoVisualizacion* nuevo = new cEstadoVisualizacion(contenido, true, aux_tm);
				this->Perfil_actual->agregar_a_vistos(nuevo);
			}
			else {
				cEstadoVisualizacion* nuevo = new cEstadoVisualizacion(contenido, false, aux_tm);
				this->Perfil_actual->agregar_a_vistos(nuevo);
			}
		}
		else
		{
			throw new exception;
		}
	}
}

void cAndroid::Pausar()
{
}

void cAndroid::Cancelar()
{
}

