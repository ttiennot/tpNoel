#pragma once
#include "commercial.h"

class vendeur :
	public commercial
{
public :
	vendeur(string nom, string prenom, int age);
	~vendeur();
};

