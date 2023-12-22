#pragma once

#include <string>
#include <iostream>
using namespace std;

class employe
{
protected :
	string nom;
	string prenom;
	int age;
	int salaire;
public :
	employe(string nom, string prenom, int age);
	~employe();
	string getNom();
	string getPrenom();
	int getAge();
	int getSalaire();
};

