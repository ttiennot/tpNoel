// tpHeritage.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "employe.h"
#include <string>
#include "entreprise.h"
#include "technicien.h"
#include "vendeur.h"
using namespace std;

int main()
{
    employe* employe1 = new employe(string("caca"), string("pipi"), string("popo"), 10);
    //std::cout << "Entreprise: " << employe1->getRaisonSociale() << std::endl;
    std::cout << "Prénom: " << employe1->getPrenom() << std::endl;
    std::cout << "Nom: " << employe1->getNom() << std::endl;
    std::cout << "Âge: " << employe1->getAge() << std::endl;
    std::cout << "Salaire: " << employe1->getSalaire() << std::endl;

    technicien* technicien1 = new technicien(string("caca"), string("pipi"), string("popo"), 10);
    std::cout << "Prénom: " << technicien1->getPrenom() << std::endl;
    std::cout << "Nom: " << technicien1->getNom() << std::endl;
    std::cout << "Âge: " << technicien1->getAge() << std::endl;
    std::cout << "Salaire: " << technicien1->getSalaire() << std::endl;

    vendeur* vendeur1 = new vendeur(string("caca"), string("pipi"), string("popo"), 10);
    std::cout << "Prénom: " << vendeur1->getPrenom() << std::endl;
    std::cout << "Nom: " << vendeur1->getNom() << std::endl;
    std::cout << "Âge: " << vendeur1->getAge() << std::endl;
    std::cout << "Salaire: " << vendeur1->getSalaire() << std::endl;

}
