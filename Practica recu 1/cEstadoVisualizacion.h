#pragma once

#ifndef _CESTADOVISUALIZACION_H
#define _CESTADOVISUALIZACION_H
#include <ctime>
#include "cContenido.h"

class cEstadoVisualizacion {

private:
	bool Completado;
	tm Fecha_Completado;
	cContenido* Contenido;
public:
	cEstadoVisualizacion(cContenido* inicializacion, bool completado/*?*/, tm fecha);
	~cEstadoVisualizacion();
};




#endif