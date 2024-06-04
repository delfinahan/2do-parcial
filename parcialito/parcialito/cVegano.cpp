#include "cVegano.h"

cVegano::cVegano(string nomV, string apV, posicionMesa comensalV) :cComensal(nombre, apellido, posComensal)
{
}

cVegano::~cVegano()
{
}

string cVegano::to_string() {
	stringstream salida;
	salida << "nombre:" << this->get_nombre() << "apellido: " << this->get_apellido() << "lugar: " << this->get_posComensal();
	salida << "comio: " << endl;
	vector<cComida*>::iterator it = this->listaComidas.begin();
	for (it; it < this->listaComidas.end(); it++)
		salida << (*it)->get_comida() << endl;
	return(salida.str());
}

bool cVegano::comensalContento(cMesa* objeto)
{
	int cont = 0;
	if (this->get_posComensal() != objeto->get_posSal())
		cont++;
	if (this->get_posComensal() != objeto->get_posAceite())
		cont++;
	if (this->get_posComensal() != objeto->get_posVinagre())
		cont++;
	if (this->get_posComensal() != objeto->get_posOliva())
		cont++;
	if (this->get_posComensal() != objeto->get_cuchillo())
		cont++;
	
	if (cont > 3)
		return false;//esta lejos de mas de 3 objetos
	else
		return true;
}

void cVegano::elegirComida(cComida* comida)
{
	if (comida->get_carne() == false && comida->get_queso() == false)
		agregarAlPlato(comida);
	else
		return;
}
