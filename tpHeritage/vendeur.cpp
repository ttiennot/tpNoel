#include "vendeur.h"

vendeur::vendeur(string raisonSociale, string nom, string prenom, int age) :
commercial(raisonSociale, nom, prenom, age)
{
	this->prime = 2;
	this->salaire = salaire + prime;
}

vendeur::~vendeur()
{
}
