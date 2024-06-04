#include "cAyudantes.h"


cAyudantes::cAyudantes(string nomAy, string apAy, posicionMesa comensalAy):cComensal(nombre, apellido, posComensal)
{
}

cAyudantes::~cAyudantes()
{
}

string cAyudantes::to_string() {
	stringstream salida;
	salida << "nombre:" << this->get_nombre() << "apellido: " << this->get_apellido() << "lugar: " << this->get_posComensal();
	salida << "comio: " << endl;
	vector<cComida*>::iterator it = this->listaComidas.begin();
	for (it; it < this->listaComidas.end(); it++)
		salida << (*it)->get_comida()<< endl;
	return(salida.str());
}

bool cAyudantes::comensalContento(cMesa* objeto)
{
	for (int i = 0; i < this->listaComidas.size(); i++) {
		if (this->listaComidas[i]->get_carne() == true)
			return true;
		else
			return false;
	}
}

void cAyudantes::elegirComida(cComida* comida)
{
	agregarAlPlato(comida);
}
