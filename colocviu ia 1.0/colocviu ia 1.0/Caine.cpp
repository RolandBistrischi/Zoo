#include "Caine.h"




void Caine::Fuge(string nume)
{
	Animal::Fuge(nume);
	cout << "dupa veverite in " << get_Mediu_Viata() << endl;
}