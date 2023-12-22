// entreprise.h
#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "commercial.h"
#include "technicien.h"

using namespace std;

class entreprise
{
protected:
    string RaisonSociale;
    vector<commercial*> commerciauxList;
    vector<technicien*> techniciensList;

public:
    entreprise(string nom);
    ~entreprise();
    void setRaisonSociale(string nom);
    void addCommercial(commercial* newCommercial);
    void addTechnicien(technicien* newTechnicien);
    void displayEmployees();
};
