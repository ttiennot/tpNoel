#include "commercial.h"

using namespace std;

commercial::commercial(string nom, string prenom, int age) :
	employe(nom, prenom, age) {
	this->salaire = 50;
	this->prime = 0;
}

commercial::~commercial()
{
}
