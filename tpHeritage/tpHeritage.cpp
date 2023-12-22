#include <iostream>
#include <string>
#include "entreprise.h"
#include "technicien.h"
#include "vendeur.h"
#include "representant.h"

using namespace std;
//main du programme :
int main() {
    // Create an instance of the entreprise class
    entreprise myEnterprise("MyCompany");

    // Menu loop
    int choice;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. saisir nom entreprise" << endl;
        cout << "2. ajouter employes" << endl;
        cout << "3. afficher employes et salaires" << endl;
        cout << "4. reset trajets representants" << endl;
        cout << "5. quitter" << endl;

        cout << "entrer choix : ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string newName;
            cout << "Entrer nom entreprise: ";
            cin >> newName;
            myEnterprise.setRaisonSociale(newName);
            break;
        }
        case 2: {
            int type;
            string name;
            string prenom;
            int age;
            cout << "Quel type d'employe ? \n 1-technicien \n 2-vendeur \n 3-representant";
            cin >> type;
            cout << "nom ?";
            cin >> name;
            cout << "prenom ?";
            cin >> prenom;
            cout << "age ?";
            cin >> age;
            system("CLS");
            if (type == 1) {
                technicien* technicien1 = new technicien(name, prenom, age);
                myEnterprise.addTechnicien(technicien1);
            }
            else if(type == 2) {
                vendeur* vendeur1 = new vendeur(name, prenom, age);
                myEnterprise.addCommercial(vendeur1);
            }
            else if (type == 3) {
                representant* representant1 = new representant(name, prenom, age);
                myEnterprise.addCommercial(representant1);
            }
            else {
                cout << "valeur saisie pas comprise entre 1 et 3";
            }
            break;
        }
        case 3: {
            myEnterprise.displayEmployees();
            break;
        }
        case 4: {
            //myEnterprise.resetDeplacement();
            break;
        }
        case 5: {
            cout << "Quitter programme." << endl;
            break;
        }
        default:
            cout << "choisir valeur entre 1 et 5" << endl;
        }

    } while (choice != 5);

    return 0;
}
