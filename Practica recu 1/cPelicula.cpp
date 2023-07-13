#include "cPelicula.h"

cPelicula::cPelicula()
{
}

cPelicula::cPelicula(cPelicula& copia)
{
	this->Actores = copia.Actores;
	this->Anio_lanzamiento = copia.Anio_lanzamiento;
	this->audio = copia.audio;
	this->Director = copia.Director;
	this->Duracion = copia.Duracion;
	this->Genero = copia.Genero;
	this->Productor = copia.Productor;
	this->subtitulos = copia.subtitulos;
	this->titulo = copia.titulo;
}

cPelicula::cPelicula(list<cContenido*>::iterator copia)
{
	this->Actores = "alguien";
	this->Anio_lanzamiento = (*copia)->Anio_lanzamiento;
	this->audio = (*copia)->audio;
	this->Director = (*copia)->Director;
	this->Duracion = (*copia)->Duracion;
	this->Genero = "alguno";
	this->Productor = (*copia)->Productor;
	this->subtitulos = (*copia)->subtitulos;
	this->titulo = (*copia)->titulo;
}

cPelicula::~cPelicula()
{
}
