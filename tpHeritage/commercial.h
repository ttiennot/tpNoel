#pragma once
#include "employe.h"

class commercial :
	public employe
{
protected :
	int prime;
public:
	commercial(string raisonSociale, string nom, string prenom, int age);
	~commercial();
};

