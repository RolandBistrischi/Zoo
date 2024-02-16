#include <iostream>
#include<conio.h>
#include<vector>
#include<string>
#include "Interfata.h"
#include"Proprietar.h"
#include "Animal.h"
#include "Mamifer.h"
#include "Pasare.h"
#include "Caine.h"
#include "Pisica.h"
using namespace std;

int main()
{
	//Animal p();
	Animal p("Bobita", "roz", "fata", 1, 0, 6, 100, 10);
	p.set_Nume("Bobita");
	cout<<p.get_Nume( ) ;
	p.set_Blana(1);
	if (p.get_Blana() == 1)
		cout << " are blana" << endl;
	else
		cout << " nu are blana" << endl;
	p.setCuloare("albastru");
	p.setVarsta(45);
	p.setGen("mascul");
	p.setAdresa("Magureni");
	//cout << p.get_Nume();
	//if (p.get_Blana() == 1)
		//cout << " are blana" << endl;
	//else
		//cout << " nu are blana" << endl;
	cout << " varsta  "<<p.getVarsta()<<"  Domestic? "<<p.get_Domestic()<<" inaltimea de  "<<p.get_Inaltime()<<endl;
	cout << "Locuiaste la: "<<p.getAdresa()<< endl;
	cout <<"Are culoarea: " << p.getCuloare()<<endl ;
	cout << "Are genul: " << p.getGen() << endl;
	cout << "Varsta: " << p.getVarsta() << endl;
	p.Fuge(p.get_Nume());//*/

	cout << endl << endl;
	Mamifer am;
	am.set_Nume("Bob");
	cout<<am.get_Nume();
	am.set_Mediu_Viata("apa");
	cout << " Traieste in mediul: " << am.get_Mediu_Viata() << endl;
	am.set_Viteza(30);
	am.get_Viteza();

	am.set_Cozi(0);
	am.get_Cozi();
	am.Fuge(am.get_Nume());//*/

	cout << endl << endl;
	Pisica pisi;
	pisi.set_Nume("Joe");
	cout << pisi.get_Nume()<<endl;
	pisi.set_Mediu_Viata("podea");
	pisi.get_Mediu_Viata();
	pisi.set_Viteza(15);
	pisi.get_Viteza();
	pisi.set_Cozi(1);
	pisi.get_Cozi();
	pisi.Fuge(pisi.get_Nume());//*/

	cout << endl << endl;
	Pasare gaina;
	gaina.set_Nume("cocostarg");
	cout << gaina.get_Nume() << endl;
	gaina.set_Blana(0);
	if (gaina.get_Blana() == 1)
		cout << " are blana" << endl;
	else
		cout << " nu are blana" << endl;
	gaina.set_Inaltime(15);
	cout<<"inaltime: "<<gaina.get_Inaltime()<<endl;
	gaina.set_Picioare(2);
	cout<<" picioare "<<gaina.get_Picioare()<<endl;
	gaina.Fuge(gaina.get_Nume());//*/

	//pointeri
	cout << endl << endl;
	Caine *pis=new Caine();
	pis->set_Nume("Russel");
	cout << pis->get_Nume() << endl;
	pis->set_Mediu_Viata("curte");
	pis->get_Mediu_Viata();
	pis->set_Viteza(90);
	pis->get_Viteza();
	pis->set_Cozi(1);
	pis->get_Cozi();
	pis->setAdresa("Baiut");
	cout <<"Locuia in: "<< pis->getAdresa()<<endl;
	pis->Fuge(pis->get_Nume());
	delete pis;



	return 0;
}