#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include "cComensal.h"
#include "cMesa.h"

class cVegetariano:public cComensal
{
private:
	vector<cComensal*> listaComensales;

public:
	cVegetariano(string nomVege, string apVege, posicionMesa comensalVege);
	~cVegetariano();
	string to_string();
	bool comensalContento(cMesa* objeto);
	void elegirComida(cComida* comida);
};

