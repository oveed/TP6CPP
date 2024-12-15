#include "contractuel.h"

Contractuel::Contractuel(string nom, int age, char sexe, string charge, string filiere)
    : Enseignant(nom, age, sexe, charge), Etudiant(nom, age, sexe, filiere) {}

string Contractuel::getPersonne() const {
    return Enseignant::getPersonne() + " | Filiere: " + Etudiant::getFiliere();
}
