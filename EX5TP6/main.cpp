#include "contractuel.h"

int main() {
    cout << "Creation d'un enseignant:" << endl;
    Enseignant e1("Ahmed", 45, 'M', "Mathematiques");
    cout << e1.getPersonne() << endl;

    cout << "\nCreation d'un etudiant:" << endl;
    Etudiant et1("Amine", 21, 'M', "Informatique");
    cout << et1.getPersonne() << endl;

    cout << "\nCreation d'un contractuel:" << endl;
    Contractuel c1("Sarah", 30, 'F', "Physique", "Chimie");
    cout << c1.getPersonne() << endl;

    return 0;
}
