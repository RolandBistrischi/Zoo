#pragma once
#include "Mamifer.h"
using namespace std;

void Mamifer::set_Mediu_Viata(string viata)
{
	mediu_viata = viata;
}

string Mamifer::get_Mediu_Viata()
{
	//cout <<" Traieste in mediul: "<< mediu_viata << endl;
	return mediu_viata;
}


void Mamifer::set_Viteza(int speed)
{
	viteza = speed;
}


int Mamifer::get_Viteza()
{
	cout << " Viteza este de: " << viteza << " km/h" << endl;
	return viteza;
}

void Mamifer::set_Cozi(bool tail)
{
	coada = tail;
}

bool Mamifer::get_Cozi()
{
	if(coada==1)
		cout << get_Nume() << " are coada" << endl;
	else
		cout << get_Nume() << " nu are coada" << endl;
	return coada;
}


void Mamifer::Fuge(string nume)
{
	Animal::Fuge(nume);
	cout <<" si alearga "<< "in " << get_Mediu_Viata() << endl;
}

Mamifer::Mamifer() :Animal(){}

Mamifer::Mamifer(string mediu_live, int speed, bool tail) : Animal()
{
	mediu_viata = mediu_live;
	viteza = speed;
	coada = tail;
}

Mamifer::~Mamifer(){}