#include "cComida.h"

cComida::cComida(string com, bool c, bool q, unsigned int cal)
{
	this->comida = com;
	this->carne = c;
	this->queso = q;
	this->calorias = cal;
}

cComida::~cComida()
{
}

string cComida::get_comida()
{
	return this->comida;
}


bool cComida::get_carne()
{
	return this->carne;
}

bool cComida::get_queso()
{
	return this->queso;
}

unsigned int cComida::get_calorias()
{
	return this->calorias;
}

