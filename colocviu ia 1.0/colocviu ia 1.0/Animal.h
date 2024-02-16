#pragma once
#include "Interfata.h"
#include "Proprietar.h"
#include <iostream>
#include<string>
using namespace std;

class Animal:public Interfata
{
private:
	string nume, culoare, gen;
	bool blana, domestic;
	int picioare, inaltime, varsta;
	Proprietar adresa;
public:
	void setCuloare(string color);
	string getCuloare() override;
	void setVarsta(int age);
	int getVarsta() override;
	void setGen(string gin);
	string getGen() override;

	void set_Nume(string name) { nume = name; }
	string get_Nume();
	void set_Blana(bool blan);
	bool get_Blana();

	void set_Domestic(bool de_casa);
	bool get_Domestic();
	void set_Picioare(int feet);
	int get_Picioare();

	void set_Inaltime(int hight);
	int get_Inaltime();

	void setAdresa(string adress);
	string getAdresa();

	virtual void Fuge(string nume);

	Animal();
	Animal(string name);
	Animal(string name, int age);
	Animal(string name, string color, string gin, bool blan, bool de_casa, int feet, int hight, int age);

	~Animal();

};

