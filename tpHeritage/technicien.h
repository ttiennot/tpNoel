#pragma once

#include "employe.h"

class technicien :
	public employe
{
public :
	technicien(string raisonSociale, string nom, string prenom, int age);
	~technicien();
};

