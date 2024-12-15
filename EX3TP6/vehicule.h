#ifndef VEHICULE_H
#define VEHICULE_H

#include <iostream>
using namespace std;

class Vehicule {
protected:
    static int compteur;
    int numeroSerie;
    int annee;
    float prix;

public:
    Vehicule(int annee, float prix);
    virtual void accelerer() const = 0;
    virtual void affiche() const;
};

#endif
