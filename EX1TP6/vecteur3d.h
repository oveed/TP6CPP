#include "vecteur.h"

class Vecteur3D : public Vecteur {
private:
    float z;

public:
    Vecteur3D(float x = 0, float y = 0, float z = 0);
    void affiche() const;
};

