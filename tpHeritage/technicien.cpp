#include "technicien.h"
using namespace std;

technicien::technicien(string nom, string prenom, int age) :
employe(nom, prenom, age){
	this->salaire = 40;
}

technicien::~technicien()
{
}
