
#include <string.h>
//#include <iostream>

#include "Repository.h"

class Controller
{
private:
	Repository repo;
public:
	Controller();


	std::vector<Cheltuieli> getAll();
	void addCtr(Cheltuieli c);
	void elimina_cheltuieli(int ap);
	void elimina_cheltuiala(const  std::string t);
	void inlocuire_suma(int ap, const  std::string t, int s);
	void afisare_cheltuieli_tot();
	void afisare_cheltuieli_ap(int ap);
	void afisare_cheltuiala(int s);
	void afisare_chelt(int s);
	int calcul_cheltuieli_totale(std::string tip);
	int max_cheltuiala(int ap);
	void sortare(std::string tip);
	void stergere_cheltuieli_suma(int s);
	void stergere_cheltuieli(std::string tip);
};
void test_c();

