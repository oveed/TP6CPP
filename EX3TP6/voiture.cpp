#include "voiture.h"

Voiture::Voiture(int annee, float prix, int nbPlaces)
    : Vehicule(annee, prix), nbPlaces(nbPlaces) {}

void Voiture::accelerer() const {
    cout << "Je peux atteindre 200km/h" << endl;
}

void Voiture::affiche() const {
    Vehicule::affiche();
    cout << "Nombre de places: " << nbPlaces << endl;
}
