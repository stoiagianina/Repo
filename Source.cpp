#include <iostream>
#include <assert.h>

#include "C:\\Users\user\source\repos\lab5\lab5\Header.h"

using namespace std;

Controller::Controller()
{

}

std::vector <Cheltuieli> Controller::getAll()
{
	std::vector <Cheltuieli>vector = this->repo.getAllRepo();
	return vector;
}

void Controller::addCtr(Cheltuieli c)
{
	this->repo.addElem(c);
}

//D: elimina toate cheltuielile unui ap
void Controller::elimina_cheltuieli(int ap)
{
	int size = repo.repoSize;
	std::vector<Cheltuieli> all = repo.getAllRepo();
	for (int i = 0; i < size; i++)
	{
		if (all[i].getNrApartament() == ap)
		{
			all[i].setSuma(0);
		}
	}
}

//D: elimina cheltuielile de un tip de la toate apartamentele
void Controller::elimina_cheltuiala(const  std::string t)
{
	int size = repo.repoSize;
	std::vector<Cheltuieli> all = repo.getAllRepo();
	for (int i = 0; i < size; i++)
	{
		std::string tip = all[i].getTip();
		if (all[i].getTip() == t)
		{
			all[i].setSuma(0);
		}
	}
}

//D:inlocuieste suma de plata a unei cheltuieli cu una noua
void Controller::inlocuire_suma(int ap, const  std::string t, int sumanoua)
{
	int size = repo.repoSize;
	std::vector<Cheltuieli> all = repo.getAllRepo();
	for (int i = 0; i < size; i++)
	{
		if (all[i].getNrApartament() == ap && all[i].getTip() == t)
			all[i].setSuma(sumanoua);
	}
}
//D: afiseaza fiecare apartament cu toate cheltuielile lui
void Controller::afisare_cheltuieli_tot()
{
	int size = repo.repoSize;
	std::vector<Cheltuieli> all = repo.getAllRepo();
	for (int i = 0; i < size; i++)//parcurge ap
	{
		all[i].getNrApartament();
		all[i].getSuma();
		all[i].getTip();
	}
}
//D:afiseaza toate cheltuielile unui apartament
void Controller::afisare_cheltuieli_ap(int ap)
{
	int size = repo.repoSize;
	std::vector<Cheltuieli> all = repo.getAllRepo();
	for (int i = 0; i < size; i++)
	{
		if (all[i].getNrApartament == ap)
		{
			all[i].getTip();
			all[i].getSuma();
		}
	}
}
//D: afiseaza toate cheltuielile > decat o suma data pentru toate apartamentele
void Controller::afisare_cheltuiala(int s)
{
	int size = repo.repoSize;
	std::vector<Cheltuieli> all = repo.getAllRepo();
	for (int i = 0; i < size; i++)
	{
		if (all[i].getSuma() > s)
		{
			all[i].getNrApartament;
			all[i].getTip();
			all[i].getSuma();
		}
	}
}
//D: afiseaza toate cheltuielile = cu o suma data pentru toate apartamentele
void Controller::afisare_chelt(int s)
{
	int size = repo.repoSize;
	std::vector<Cheltuieli> all = repo.getAllRepo();
	for (int i = 0; i < size; i++)
	{
		if (all[i].getSuma() == s)
		{
			all[i].getNrApartament;
			all[i].getTip();
			all[i].getSuma();
		}
	}
}

//D: calculeaza suma de pe toate ap dupa tip
int Controller::calcul_cheltuieli_totale(std::string t)
{
	int size = repo.repoSize;
	std::vector<Cheltuieli> all = repo.getAllRepo();
	int s = 0;
	for (int i = 0; i < size; i++)
	{
		if (all[i].getTip() == t)
		{
			s += all[i].getSuma();
		}
	}
	return s;
}
//D: calculeaza cea mai mare cheltuiala a unui apartament
int Controller::max_cheltuiala(int ap)
{
	int size = repo.repoSize;
	std::vector<Cheltuieli> all = repo.getAllRepo();
	int max = -1;
	for (int i = 0; i < size; i++)
	{
		if (all[i].getNrApartament() == ap && all[i].getSuma() > max)
		{
			max = all[i].getSuma();
		}
	}
	return max;
}
//D: sorteaza descrescator cheltuielile de un tip la toate apartamentele
void Controller::sortare(std::string t)
{
	int size = repo.repoSize;
	std::vector<Cheltuieli> all = repo.getAllRepo();
	std::vector<Cheltuieli> tip;
	int nr = 0;
	for (int i = 0; i < size; i++)
	{
		if (all[i].getTip() == t)
		{
			tip[nr] = all[i];
			nr++;
		}

	}
	for (int i = 0; i < nr - 1; i++)
	{
		for (int j = i + 1; j < nr; j++)
			if (tip[i].getTip() == t && tip[j].getTip() == t)
				if (tip[i].getSuma() < tip[j].getSuma())
				{
					Cheltuieli aux = tip[i];
					tip[i] = tip[j];
					tip[j] = aux;
				}
	}
}
//D: sterge cheltuielile mai mari decat o suma
void Controller::stergere_cheltuieli_suma(int s)
{
	int size = repo.repoSize;
	std::vector<Cheltuieli> all = repo.getAllRepo();
	for (int i = 0; i < size; i++)
	{
		if (all[i].getSuma() > 100)
			//delete all[i];
			all.erase(all.begin() +i);
	}
}
//D: sterge toate cheltuielile inafara de cea data
void Controller::stergere_cheltuieli(std::string t)
{
	int size = repo.repoSize;
	std::vector<Cheltuieli> all = repo.getAllRepo();
	for (int i = 0; i < size; i++)
	{
		if (all[i].getTip() != t)
			delete all[i];
	}
}
void test_c()
{
	Cheltuieli c1 = Cheltuieli();
	assert(c1.getNrApartament() == 0);
	assert(c1.getSuma() == 0);
	assert(c1.getTip() == " ");

	Cheltuieli c2 = Cheltuieli(24, 300," gaz");
	assert(c2.getNrApartament() == 24);
	assert(c2.getSuma() == 300);
	std:string c = c2.getTip();
	assert(c[0] == 'g');
	assert(c[1] == 'a');
	assert(c[2] == 'z');

	cout << "Testele pentru clasa cheltuiala functioneaza." << endl;
}