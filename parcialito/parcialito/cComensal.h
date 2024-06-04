#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include<vector>
#include "cComida.h"
#include "enumPosicionMesa.h"
#include "cMesa.h"
using namespace std;

class cComensal
{
protected:
	string nombre;
	string apellido;
	posicionMesa posComensal;

	vector<cComida*> listaComidas;

public:
	cComensal(string nom, string ap, posicionMesa comensal);
	virtual ~cComensal();
	string get_nombre();
	string get_apellido();
	vector <cComida*>get_listaComidas();
	posicionMesa get_posComensal();

	void operator+(cComida* comida);
	friend ostream& operator<<(ostream& os, cComensal* P);


	virtual string to_string() = 0;
	void agregarAlPlato(cComida* comida);
	bool comensalPipon();
	virtual bool comensalContento(cMesa* objeto) = 0;
	virtual void elegirComida(cComida* comida) = 0;
};

