#include "etudiant.h"

Etudiant::Etudiant(string nom, int age, char sexe, string filiere)
    : Personne(nom, age, sexe), filiere(filiere) {}

void Etudiant::setFiliere(const string& filiere) {
    this->filiere = filiere;
}

string Etudiant::getFiliere() const {
    return filiere;
}

string Etudiant::getPersonne() const {
    return Personne::getPersonne() + " | Filiere: " + filiere;
}

