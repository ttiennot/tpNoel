#pragma once
#include "commercial.h";

class representant :
	public commercial
{
public :
	representant(string nom, string prenom, int age);
	~representant();
	void setNbDeplacement(int val);
	int getNbDeplacement();
	void resetDeplacement();


protected :
	int nbrDeplacements;
};

