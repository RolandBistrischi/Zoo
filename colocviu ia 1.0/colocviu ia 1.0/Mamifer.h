#pragma once
#include <iostream>
#include<string>
#include "Animal.h"
using namespace std;

class Mamifer :public Animal
{
private:
	string mediu_viata;
	int viteza;
protected:
	bool coada;
public:
	void set_Mediu_Viata(string viata);
	string get_Mediu_Viata();

	void set_Viteza(int speed);
	int get_Viteza();
	void set_Cozi(bool tail);
	bool get_Cozi();

	virtual void Fuge(string nume) override;

	Mamifer();
	Mamifer(string mediu_viata, int viteza, bool coada);
	~Mamifer();
};

