#include "entreprise.h"

entreprise::entreprise(string nom)
{
	RaisonSociale = nom;
}

entreprise::~entreprise()
{

}

void entreprise::setRaisonSociale(string nom)
{
	RaisonSociale = nom;
}
