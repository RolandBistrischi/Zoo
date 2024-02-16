#pragma once
#include <iostream>
#include<string>
using namespace std;

class Proprietar
{
private:
	string adresa;

public:
	Proprietar();
	//Proprietar(string adresa);
	void setAdresa(string adress);
	string getAdresa();
	~Proprietar();
};
