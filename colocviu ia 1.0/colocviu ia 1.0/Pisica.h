#pragma once
#include <iostream>
#include<string>
#include "Mamifer.h"
using namespace std;

class Pisica :public Mamifer
{
private:
	int soareci_prinsi, nivel_energie,nr_stapani;
public:


	virtual void Fuge(string nume)override;
};

