#include "vecteur.h"

Vecteur::Vecteur(float x, float y) : x(x), y(y) {}

void Vecteur::affiche() const {
    cout << "(" << x << ", " << y << ")" << endl;
}

void Vecteur::deplacer(float dx, float dy) {
    x += dx;
    y += dy;
}
