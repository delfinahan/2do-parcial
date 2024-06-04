#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

class cComida
{
private:
	string comida;
	bool carne;
	bool queso;
	unsigned int calorias;


public:
	cComida(string com,bool c, bool q, unsigned int cal);
	~cComida();
	string get_comida();
	bool get_carne();
	bool get_queso();
	unsigned int get_calorias();

};

