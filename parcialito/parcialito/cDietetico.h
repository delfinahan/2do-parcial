#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include "cComensal.h"
#include "cMesa.h"

class cDietetico:public cComensal
{
private:

public:
	cDietetico(string nomD, string apD, posicionMesa comensalD);
	~cDietetico();
	string to_string();
	bool comensalContento(cMesa* obejeto);
	void elegirComida(cComida* comida);
};

