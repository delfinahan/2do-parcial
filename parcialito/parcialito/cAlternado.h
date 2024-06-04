#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include "cComensal.h"

class cAlternado:public cComensal
{
private:
	unsigned alternado;
public:
	cAlternado(string nomA, string apA, posicionMesa comensalA);
	~cAlternado();
	string to_string();
	bool comensalContento(cMesa* objeto);
	void elegirComida(cComida* comida);
};

