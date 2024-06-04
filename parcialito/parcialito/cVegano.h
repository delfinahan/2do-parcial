#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include "cComensal.h"
#include "cMesa.h"

class cVegano:public cComensal
{
private:

public:
	cVegano(string nomV, string apV, posicionMesa comensalV);
	~cVegano();
	string to_string();
	bool comensalContento(cMesa* objeto);
	void elegirComida(cComida* comida);
};

