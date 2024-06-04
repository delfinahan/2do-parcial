#pragma once
#include <string>
#include <iostream>
#include "cComensal.h"
#include "cComida.h"
#include "cMesa.h"
#include "cAlternado.h"
#include "cAyudantes.h"
#include "cDietetico.h" 
#include "cVegano.h"
#include "cVegetariano.h"
using namespace std;

//FALTA OTRA SOBRECARGA Y TRY CATCH

int main() {

	vector<cComida*>bandeja;

	cAlternado* alternado1 = new cAlternado("camila", "zavidowski", puntaDer);
	cAlternado* alternado2 = new cAlternado("Delfina", "hanisch", puntaIzq);
	//cAlternado* alternado3 = new cAlternado("maria", "durand", centro);

	cAyudantes* ayudante = new cAyudantes("emilia", "janin", centro);
	//cAyudantes* ayudante2 = new cAyudantes("isabella", "ferrari", puntaDer);
	//cAyudantes* ayudante3 = new cAyudantes("camila", "bongiovanni", centro);

	cDietetico* dietetico = new cDietetico("florencia", "velo", centro);
	//cDietetico* dietetico2 = new cDietetico("saul", "lezama", puntaIzq);
	//cDietetico* dietetico3 = new cDietetico("renata", "stasi", puntaDer);

	cVegano* vegano = new cVegano("saul", "lezama", puntaDer);
	//cVegano* vegano2 = new cVegano("mariano", "bordeira", centro);
	//cVegano* vegano3 = new cVegano("federico", "fioriti", centro);

	cVegetariano* vegetariano = new cVegetariano("bautista", "rach", puntaDer);
	//cVegetariano* vegetariano2 = new cVegetariano("nicolas", "rapp", puntaIzq);
	//cVegetariano* vegetariano3 = new cVegetariano("stefano", "taco", puntaIzq);

	cComida* comida1 = new cComida("chinchu", true, false, 300);
	cComida* comida2 = new cComida("cebolla asada", false, false, 100);
	cComida* comida3 = new cComida("matambre a la pizza", true, true, 500);
	cComida* comida4 = new cComida("provoleta", false, true, 200);
	cComida* comida5 = new cComida("vacio", true, false, 400);

//	bandeja.push_back(comida1);
//	bandeja.push_back(comida2);
//	bandeja.push_back(comida3);
//	bandeja.push_back(comida4);
//	bandeja.push_back(comida5);

	cMesa* mesa = new cMesa(centro, centro, puntaIzq, puntaDer, puntaIzq, puntaIzq, 2);


	alternado1->elegirComida(comida1);
	alternado2->elegirComida(comida2);
	ayudante->elegirComida(comida3);
	dietetico->elegirComida(comida4);
	vegano->elegirComida(comida5);
	vegetariano->elegirComida(comida3);

	alternado1->comensalContento(mesa);
	alternado2->comensalContento(mesa);
	ayudante->comensalContento(mesa);
	dietetico->comensalContento(mesa);
	vegano->comensalContento(mesa);
	vegetariano->comensalContento(mesa);

	cout << alternado1; //sobrecarga <<
	cout << alternado2;
	cout << ayudante;
	cout << dietetico;
	cout << vegano;
	cout << vegetariano;

	try {
		vegano->agregarAlPlato(comida3);
	}
	catch (exception* e) {
		cout << e->what() << endl;
		delete e;
	}
	cout << "." << endl;

	
	delete mesa;
	delete comida5;
	delete comida4;
	delete comida3;
	delete comida2;
	delete comida1;
	delete vegetariano;
	delete vegano;
	delete dietetico;
	delete ayudante;
	delete alternado2;
	delete alternado1;
}