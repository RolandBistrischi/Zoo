#pragma once
#include <iostream>
#include<string>
#include "Animal.h"
using namespace std;

class Pasare :public Animal
{
private:
	bool zboara;
	string provenienta, culoare_predominanta;
public:


	virtual void Fuge(string nume) override;
};

