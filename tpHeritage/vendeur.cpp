#include "vendeur.h"

vendeur::vendeur(string nom, string prenom, int age) :
commercial(nom, prenom, age)
{
	this->prime = 2;
	this->salaire = salaire + prime;
}

vendeur::~vendeur()
{
}
