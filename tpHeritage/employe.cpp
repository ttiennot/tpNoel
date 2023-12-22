#include "employe.h"
#include "entreprise.h"
using namespace std;
employe::employe(string raisonSociale, string nom, string prenom, int age)
	: entreprise(raisonSociale)
{
	this->nom = nom;
	this->prenom = prenom;
	this->age = age;
	this->salaire = 0;
}

employe::~employe()
{
}

string employe::getNom()
{
	return nom;
}

string employe::getPrenom()
{
	return prenom;
}

int employe::getAge()
{
	return age;
}

int employe::getSalaire()
{
	return salaire;
}
