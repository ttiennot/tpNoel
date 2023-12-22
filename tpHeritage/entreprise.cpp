// entreprise.cpp
#include "entreprise.h"

entreprise::entreprise(string nom)
{
    RaisonSociale = nom;
}

entreprise::~entreprise()
{
    // Clean up memory, delete allocated employees
    for (auto commercialPtr : commerciauxList) {
        delete commercialPtr;
    }

    for (auto technicienPtr : techniciensList) {
        delete technicienPtr;
    }
}

void entreprise::setRaisonSociale(string nom)
{
    RaisonSociale = nom;
}

void entreprise::addCommercial(commercial* newCommercial)
{
    commerciauxList.push_back(newCommercial);
}

void entreprise::addTechnicien(technicien* newTechnicien)
{
    techniciensList.push_back(newTechnicien);
}

void entreprise::displayEmployees()
{
    cout << "Liste des employes :" << endl;

    cout << "Commerciaux:" << endl;
    for (auto commercialPtr : commerciauxList) {
        cout << "Nom: " << commercialPtr->getNom() << "\n" << ", Prenom: " << commercialPtr->getPrenom() << "\n" << ", Salaire: " << commercialPtr->getSalaire() << endl;
    }

    cout << "Techniciens:" << endl;
    for (auto technicienPtr : techniciensList) {
        cout << "Nom: " << technicienPtr->getNom() << "\n" << ", Prenom: " << technicienPtr->getPrenom() << "\n" << ", Salaire: " << technicienPtr->getSalaire() << "euros" << endl;
    }
}

