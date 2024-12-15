#include "vehicule.h"

class Voiture : public Vehicule {
private:
    int nbPlaces;

public:
    Voiture(int annee, float prix, int nbPlaces);
    void accelerer() const override;
    void affiche() const override;
};


