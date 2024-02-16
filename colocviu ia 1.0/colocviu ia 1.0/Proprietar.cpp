#include "Proprietar.h"

void Proprietar::setAdresa(string adress)
{
	adresa = adress;
}

string Proprietar::getAdresa()
{
	return adresa;
}


Proprietar::Proprietar() { adresa = "Cluj st Observator 47"; }

/*Proprietar::Proprietar(string adress) 
{
	adresa = adress;
}*/


Proprietar::~Proprietar(){}