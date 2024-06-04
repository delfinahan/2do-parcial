#include "cAlternado.h"
#include <time.h>

cAlternado::cAlternado(string nomA, string apA, posicionMesa comensalA):cComensal(nombre, apellido, posComensal) {
}

cAlternado::~cAlternado()
{
}

string cAlternado::to_string() {
	stringstream salida;
	salida << "nombre:" << this->get_nombre() << "apellido: " << this->get_apellido() << "lugar: " << this->get_posComensal();
	salida << "comio: " << endl;
	vector<cComida*>::iterator it = this->listaComidas.begin();
	for (it; it < this->listaComidas.end(); it++)
		salida << (*it)->get_comida() << endl;
	return(salida.str());
}

bool cAlternado::comensalContento(cMesa* objeto)
{
	return true; //siempre contento
}

void cAlternado::elegirComida(cComida* comida)
{
	if (this->alternado % 2 == 0) {
		agregarAlPlato(comida);
		this->alternado + 1;
	}
	else
		return;
}

/* RANDOM (no va en esto)
	srand(time(NULL));
	int resul = rand() % 2;
	if (resul == 0) {
		return;
	}
	else
		agregarAlPlato(comida);
*/