#include "vehicule.h"

class Camion : public Vehicule {
private:
    float chargeMaximale;

public:
    Camion(int annee, float prix, float chargeMaximale);
    void accelerer() const override;
    void affiche() const override;
};

