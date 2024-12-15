#include "vehicule.h"

int Vehicule::compteur = 1;

Vehicule::Vehicule(int annee, float prix)
    : numeroSerie(compteur++), annee(annee), prix(prix) {}

void Vehicule::affiche() const {
    cout << "Matricule: " << numeroSerie << " | Annee: " << annee
         << " | Prix: " << prix << " TND" << endl;
}

