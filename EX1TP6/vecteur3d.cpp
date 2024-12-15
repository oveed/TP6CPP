#include "vecteur3d.h"

Vecteur3D::Vecteur3D(float x, float y, float z) : Vecteur(x, y), z(z) {}

void Vecteur3D::affiche() const {
    cout << "(" << x << ", " << y << ", " << z << ")" << endl;
}

