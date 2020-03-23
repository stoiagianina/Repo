#include <string.h>
#include <iostream>

class Cheltuieli {
private:
	int nrApartament, suma;
	std::string tip;
public:
	Cheltuieli();
	Cheltuieli(int nr, int s, std::string t);
	Cheltuieli(const Cheltuieli &c);
	~Cheltuieli();
	int getNrApartament();
	int getSuma();
	void setNrApartament(int x);
	void setSuma(int s);
	void setTip(std::string t);
	std::string getTip();
};
void teste();