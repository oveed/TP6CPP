#ifndef CONTRACTUEL_H
#define CONTRACTUEL_H

#include "enseignant.h"
#include "etudiant.h"

class Contractuel : public Enseignant, public Etudiant {
public:
    Contractuel(string nom, int age, char sexe, string charge, string filiere);
    string getPersonne() const override;
};

#endif

