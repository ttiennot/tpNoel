#include "representant.h"

representant::representant(string raisonSociale, string nom, string prenom, int age) :
	commercial(raisonSociale, nom, prenom, age)
{
	this->prime = 5;
	this->nbrDeplacements = 0;
	this->salaire = salaire + prime + (3 * nbrDeplacements);
}

representant::~representant()
{
}

void representant::setNbDeplacement(int val)
{
	this->nbrDeplacements += val;
}

int representant::getNbDeplacement()
{
	return nbrDeplacements;
}

void representant::resetDeplacement()
{
	this->nbrDeplacements = 0;
}
 