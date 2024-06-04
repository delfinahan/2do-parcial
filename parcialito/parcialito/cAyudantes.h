#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include "cComensal.h"

class cAyudantes:public cComensal
{
private:

public:
	cAyudantes(string nomAy, string apAy, posicionMesa comensalAy);
	~cAyudantes();
	string to_string();
	bool  comensalContento(cMesa* objeto);
	void elegirComida(cComida* comida);
};

