#include "Cheltuieli.h"
#include <assert.h>
Cheltuieli::Cheltuieli()
{

}
Cheltuieli::Cheltuieli(int nr, int s, std::string t)
{
	this->nrApartament = nr;
	this->suma = s;
	this->tip = t;
}
Cheltuieli::Cheltuieli(const Cheltuieli &c)
{
	this->nrApartament = c.nrApartament;
	this->suma = c.suma;
	this->tip = c.tip;
}
Cheltuieli::~Cheltuieli()
{
	this->nrApartament = NULL;
	this->tip = "";
	this->suma = NULL;
}

int Cheltuieli::getNrApartament()
{
	return this->nrApartament;
}
int Cheltuieli::getSuma()
{
	return this->suma;
}
std::string Cheltuieli::getTip()
{
	return this->tip;
}
void Cheltuieli::setNrApartament(int x)
{
	this->nrApartament = x;
}
void Cheltuieli::setSuma(int s)
{
	this->suma = s;
}
void Cheltuieli::setTip(std::string t)
{
	this->tip = t;
}
void teste()
{
	Cheltuieli c1 = Cheltuieli(1, 432, "apa calda");
	Cheltuieli c2 = Cheltuieli(3, 788, "gaz");
	assert(c1.getSuma() == 432);
	assert(c2.getNrApartament() == 3);
	c1.setTip("electricitate");
	assert(c1.getTip() == "electricitate");
	c2.setSuma(500);
	assert(c2.getSuma() == 500);
	std::cout << "Teste din clasa...\n";
}