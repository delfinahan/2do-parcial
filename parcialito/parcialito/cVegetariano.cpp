#include "cVegetariano.h"

cVegetariano::cVegetariano(string nomVege, string apVege, posicionMesa comensalVege):cComensal(nombre, apellido, posComensal) {

}

cVegetariano::~cVegetariano()
{
}

string cVegetariano::to_string() {
	stringstream salida;
	salida << "nombre:" << this->get_nombre() << "apellido: " << this->get_apellido() << "lugar: " << this->get_posComensal();
	salida << "comio: " << endl;
	vector<cComida*>::iterator it = this->listaComidas.begin();
	for (it; it < this->listaComidas.end(); it++)
		salida << (*it)->get_comida() << endl;
	return(salida.str());
}

bool cVegetariano::comensalContento(cMesa* max)
{
	int cont = 0;
	for (int i = 0; i < this->listaComensales.size(); i++) {
		cVegetariano* vegetariano = dynamic_cast<cVegetariano*>(listaComensales[i]);
		if (vegetariano!=nullptr && this->get_posComensal() == listaComensales[i]->get_posComensal())
			cont++;
	}
	if (cont == max->get_maxPosicion())
		return true; //el vegetariano esta rodeado de otros vegetarianos. El sector esta lleno de vegetarianos
	else
		return false;
}

void cVegetariano::elegirComida(cComida* comida)
{
	if (comida->get_carne() == false)
		agregarAlPlato(comida);
	else
		return;
}

