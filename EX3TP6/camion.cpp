#include "camion.h"

Camion::Camion(int annee, float prix, float chargeMaximale)
    : Vehicule(annee, prix), chargeMaximale(chargeMaximale) {}

void Camion::accelerer() const {
    cout << "Je peux atteindre 120km/h" << endl;
}

void Camion::affiche() const {
    Vehicule::affiche();
    cout << "Charge maximale: " << chargeMaximale << " tonnes" << endl;
}

