#pragma once

#include <string>
#include <iostream>
#include "entreprise.h"
using namespace std;

class employe :
	public  entreprise
{
protected :
	string nom;
	string prenom;
	int age;
	int salaire;
public :
	employe(string raisonSociale, string nom, string prenom, int age);
	~employe();
	string getNom();
	string getPrenom();
	int getAge();
	int getSalaire();
};

