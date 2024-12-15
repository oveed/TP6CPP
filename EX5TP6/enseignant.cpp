#include "enseignant.h"

Enseignant::Enseignant(string nom, int age, char sexe, string charge)
    : Personne(nom, age, sexe), charge(charge) {}

void Enseignant::setCharge(const string& charge) {
    this->charge = charge;
}

string Enseignant::getCharge() const {
    return charge;
}

string Enseignant::getPersonne() const {
    return Personne::getPersonne() + " | Charge: " + charge;
}

