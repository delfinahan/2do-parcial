#pragma once
#include "enumPosicionMesa.h"
class cMesa
{
private:
	posicionMesa sal;
	posicionMesa aceite;
	posicionMesa vinagre;
	posicionMesa aceto;
	posicionMesa oliva;
	posicionMesa cuchilloCortaBien;
	const unsigned int maxPosicion; /*cant maxima de personas que se pueden sentar en un sector. 
	Es decir, cant de personas q se pueden sentar en el lado izq por ejemplo */

public:
	cMesa(posicionMesa posSal, posicionMesa posAceite, posicionMesa posVinagre, posicionMesa posAceto, posicionMesa posOliva, posicionMesa posCuchillo, const unsigned int espacio);
	~cMesa();
	posicionMesa get_posSal();
	//void set_posSal(posicionMesa sal);
	posicionMesa get_posAceite();
	//void set_posAceite(posicionMesa aceite);
	posicionMesa get_posVinagre();
	//void set_posVinagre(posicionMesa vinagre);
	posicionMesa get_posAceto();
	//void set_posAceto(posicionMesa aceto);
	posicionMesa get_posOliva();
	//void set_posOliva(posicionMesa oliva);
	posicionMesa get_cuchillo();
	//void set_cuchillo(posicionMesa cuchillo);
	unsigned int get_maxPosicion();
};

