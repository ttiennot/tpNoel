#include "technicien.h"
using namespace std;

technicien::technicien(string raisonSociale, string nom, string prenom, int age) :
employe(raisonSociale, nom, prenom, age){
	this->salaire = 40;
}

technicien::~technicien()
{
}
