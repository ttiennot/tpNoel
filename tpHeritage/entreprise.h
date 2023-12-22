#pragma once

#include <string>
#include <iostream>
#include "commercial.h"
#include "technicien.h"
using namespace std;

class entreprise
{
protected :
	string RaisonSociale;
	//technicien technicien;
	//commercial commercial;
public :
	entreprise(string nom);
	~entreprise();
	void setRaisonSociale(string nom);
};

