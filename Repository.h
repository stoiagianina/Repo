#include <vector>
#include "Cheltuieli.h"

class Repository
{
private:
	std::vector<Cheltuieli> allCosts;
public:
	Repository();
	std::vector<Cheltuieli>getAllRepo();
	void addElem(Cheltuieli cheltuieli);
	int repoSize();
};

void teste1();