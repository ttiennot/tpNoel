#include "commercial.h"

using namespace std;

commercial::commercial(string raisonSociale, string nom, string prenom, int age) :
	employe(raisonSociale, nom, prenom, age) {
	this->salaire = 50;
	this->prime = 0;
}

commercial::~commercial()
{
}
