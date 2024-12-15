#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H

#include "personne.h"

class Enseignant : public Personne {
protected:
    string charge;

public:
    Enseignant(string nom = "", int age = 0, char sexe = 'M', string charge = "");
    void setCharge(const string& charge);
    string getCharge() const;
    string getPersonne() const override;
};

#endif

