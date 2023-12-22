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

public :
	entreprise(string nom);
	~entreprise();
};

