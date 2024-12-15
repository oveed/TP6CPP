#include "vecteur3d.h"

int main() {
    cout << "Creation d'un vecteur nul : " << endl;
    Vecteur v1;
    v1.affiche();

    cout << "Deplacement du vecteur de (-2, 5) : " << endl;
    v1.deplacer(-2, 5);
    v1.affiche();

    cout << "Creation d'un vecteur3D dynamique avec (4, -1, 7) : " << endl;
    Vecteur3D* v2 = new Vecteur3D(4, -1, 7);
    v2->affiche();
    delete v2;

    return 0;
}
