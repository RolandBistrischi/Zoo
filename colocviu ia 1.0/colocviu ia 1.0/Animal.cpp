#include "Animal.h"
#include<iostream>
using namespace std;

void Animal::setCuloare(string color) {
	culoare=color;
}
string Animal::getCuloare() {
	return culoare;
}

void Animal::setVarsta(int age) {
	varsta=age;
}

int Animal::getVarsta() {
	return varsta;
}

void Animal::setGen(string gin) {
	gen=gin;
}

string Animal::getGen() {
	return gen;
}

string Animal::get_Nume()
{
	return nume;
}

void Animal::set_Blana(bool blan)
{
	blana = blan;
}

bool Animal:: get_Blana() 
{
	
	return blana;
}

void Animal::set_Domestic(bool de_casa)
{ 
	domestic = de_casa; 
}

bool Animal::get_Domestic() 
{
	return domestic;
}

void Animal::set_Picioare(int feet) 
{
	picioare = feet; 
}

int Animal::get_Picioare() 
{
	return picioare; 
}

void Animal::set_Inaltime(int hight) 
{
	inaltime = hight; 
}

int Animal::get_Inaltime()
{
	return inaltime; 
}

void Animal::setAdresa(string adress)
{
	adresa.setAdresa(adress);
}

string Animal::getAdresa()
{
	return adresa.getAdresa();
}

void Animal::Fuge(string nume)
{
	cout << "Fugi " << nume << " fugi ";
}

Animal::Animal():adresa() 
{
	culoare = "alb";
	varsta = 90;
	gen = "neutru";
}

Animal::Animal(string name): adresa()
{
	nume=name;
}

Animal::Animal(string name,int age): adresa()
{
	nume = name;
	varsta = age;
}

Animal::Animal(string name, string color, string gin, bool blan, bool de_casa, int feet, int hight, int age): adresa()
{
	nume = name;
	culoare=color;
	gen = gin;
	blana = blan;
	domestic = de_casa;
	picioare = feet;
	inaltime = hight;
	varsta = age;
}

Animal::~Animal() {

}
