#pragma once

#include "employe.h"

class technicien :
	public employe
{
public :
	technicien(string nom, string prenom, int age);
	~technicien();
};

