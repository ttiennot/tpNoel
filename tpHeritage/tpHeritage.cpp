#include <iostream>
#include <string>
#include "entreprise.h"
#include "technicien.h"
#include "vendeur.h"
#include "representant.h"

using namespace std;

int main() {
    // Create an instance of the entreprise class
    entreprise myEnterprise("MyCompany");

    // Menu loop
    int choice;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Set Company Name" << endl;
        cout << "2. Add Employee" << endl;
        cout << "3. Display Salaries" << endl;
        cout << "4. Reset Representant Trips" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string newName;
            cout << "Enter the new company name: ";
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
            }
            else if(type == 2) {
                vendeur* vendeur1 = new vendeur(name, prenom, age);
            }
            else if (type == 3) {
                representant* representant1 = new representant(name, prenom, age);
            }
            else {
                cout << "valeur saisie pas comprise entre 1 et 3";
            }
            break;
        }
        case 3: {
            //myEnterprise.displaySalaries();
            break;
        }
        case 4: {
            //representant1.resetDeplacement();
            break;
        }
        case 5: {
            cout << "Exiting program." << endl;
            break;
        }
        default:
            cout << "Invalid choice. Please enter a number between 1 and 6." << endl;
        }

    } while (choice != 5);

    return 0;
}
