#include "Repository.h"
#include <assert.h>

Repository::Repository()
{
}
std::vector<Cheltuieli> Repository::getAllRepo()
{
	return this->allCosts;
}
void Repository::addElem(Cheltuieli cheltuieli)
{
	allCosts.push_back(cheltuieli);
}
int Repository::repoSize()
{
	return this->allCosts.size();
}
void teste1()
{
	Cheltuieli c1 = Cheltuieli(1, 432, "apa calda");
	Cheltuieli c2 = Cheltuieli(3, 788, "gaz");
	Repository repo;
	repo.addElem(c1);
	assert(repo.repoSize() == 1);
	std::cout << "Teste din repo...\n";
}
	