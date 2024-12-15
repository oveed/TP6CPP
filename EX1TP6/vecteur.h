#include <iostream>
using namespace std;

class Vecteur {
protected:
    float x, y;

public:
    Vecteur(float x = 0, float y = 0);
    void affiche() const;
    void deplacer(float dx, float dy);
};
