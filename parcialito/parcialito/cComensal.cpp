#include "cComensal.h"

cComensal::cComensal(string nom, string ap, posicionMesa comensal) {
	this->nombre = nom;
	this->apellido = ap;
	this->posComensal = comensal;
}

cComensal::~cComensal(){

}

string cComensal::get_nombre()
{
	return this->nombre;
}

string cComensal::get_apellido()
{
	return this->apellido;
}

vector<cComida*> cComensal::get_listaComidas()
{
	return this->listaComidas;
}

void cComensal::operator+(cComida* comida)
{
	this->agregarAlPlato(comida);
//	this->listaComidas.push_back(comida);
}


/*
void cComensal::operator-(cComida* comida)
{
	this->listaComidas.erase(comida);
}
*/


ostream& operator<<(ostream& os, cComensal* P)
{
	os << P->to_string()<<endl; 
	return os;
}

string cComensal::to_string() {
	stringstream salida;
	salida << "nombre:" << this->get_nombre() << "apellido: " << this->get_apellido() << "lugar: " << this->get_posComensal() << endl;
	return(salida.str());
}

posicionMesa cComensal::get_posComensal()
{
	return this->posComensal;
}

void cComensal::agregarAlPlato(cComida* comida) {
	if (comida == nullptr)
		throw exception("Error, Elemento Nulo");
	else
		this->listaComidas.push_back(comida);
//		operator+(comida);
}

bool cComensal::comensalPipon() {
	int calorias = 0;
	for (int i = 0; i < this->listaComidas.size(); i++) {
		calorias = this->listaComidas[i]->get_calorias() + calorias;
		if (calorias > 1500) {
			return true; //a mi solo me importa que llegue a las 1500 calorias para determinar que esta pipon, no importa en que comida.
			break;
		}
	}
	return false;
}