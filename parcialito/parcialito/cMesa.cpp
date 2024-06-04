#include "cMesa.h"

unsigned int cMesa::get_maxPosicion()
{
	return this->maxPosicion;
}

cMesa::cMesa(posicionMesa posSal, posicionMesa posAceite, posicionMesa posVinagre, posicionMesa posAceto, posicionMesa posOliva, posicionMesa posCuchillo, const unsigned int espacio) :maxPosicion(espacio) {
	this->sal = posSal;
	this->aceite = posAceite;
	this->vinagre = posVinagre;
	this->aceto = posAceto;
	this->oliva = posOliva;
	this->cuchilloCortaBien = posCuchillo;
}

cMesa::~cMesa()
{
}

posicionMesa cMesa::get_posSal()
{
	return this->sal;
}

posicionMesa cMesa::get_posAceite()
{
	return this->aceite;
}

posicionMesa cMesa::get_posVinagre()
{
	return this->vinagre;
}

posicionMesa cMesa::get_posAceto()
{
	return this->aceto;
}

posicionMesa cMesa::get_posOliva()
{
	return this->oliva;
}

posicionMesa cMesa::get_cuchillo()
{
	return this->cuchilloCortaBien;
}
