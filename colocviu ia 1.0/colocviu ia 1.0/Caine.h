#pragma once
#include <iostream>
#include<string>
#include "Mamifer.h"
using namespace std;


class Caine :public Mamifer
{
private:
	bool maidanez;
public:
	string culoare_ochi, tip_caine;
	int nr_pui;

	virtual void Fuge(string nume)override;

};

