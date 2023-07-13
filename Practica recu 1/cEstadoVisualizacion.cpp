#include "cEstadoVisualizacion.h"

cEstadoVisualizacion::cEstadoVisualizacion(cContenido* inicializacion, bool completado, tm fecha)
{
	this->Contenido = inicializacion;
	this->Completado = completado;
	this->Fecha_Completado = fecha;
}

cEstadoVisualizacion::~cEstadoVisualizacion()
{
}
