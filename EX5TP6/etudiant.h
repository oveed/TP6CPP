#ifndef ETUDIANT_H
#define ETUDIANT_H

#include "personne.h"

class Etudiant : public Personne {
protected:
    string filiere;

public:
    Etudiant(string nom = "", int age = 0, char sexe = 'M', string filiere = "");
    void setFiliere(const string& filiere);
    string getFiliere() const;
    string getPersonne() const override;
};

#endif

