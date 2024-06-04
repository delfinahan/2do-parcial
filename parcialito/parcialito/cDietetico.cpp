#include "cDietetico.h"

cDietetico::cDietetico(string nomD, string apD, posicionMesa comensalD) :cComensal(nombre, apellido, posComensal) {

}

cDietetico::~cDietetico()
{
}

string cDietetico::to_string() {
    stringstream salida;
    salida << "nombre:" << this->get_nombre() << "apellido: " << this->get_apellido() << "lugar: " << this->get_posComensal();
    salida << "comio: " << endl;
    vector<cComida*>::iterator it = this->listaComidas.begin();
    for (it; it < this->listaComidas.end(); it++)
        salida << (*it)->get_comida() << endl;
    return(salida.str());
}

bool cDietetico::comensalContento(cMesa* objeto)
{
    if (this->get_posComensal() == objeto->get_posAceite()) {
        return false;
    }
    else
        return true;
}

void cDietetico::elegirComida(cComida* comida)
{
    int cantCalorias = 0;
    for (int i = 0; i < this->listaComidas.size(); i++) {
        cantCalorias = this->listaComidas[i]->get_calorias()+cantCalorias;
    }

    if ((cantCalorias + comida->get_calorias())<2000) {
        agregarAlPlato(comida);
    }
    else
        throw new exception("ha completado la cantidad de calorias");
}
