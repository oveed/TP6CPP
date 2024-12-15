#ifndef PERSONNE_H
#define PERSONNE_H

#include <iostream>
#include <string>
using namespace std;

class Personne {
protected:
    string nom;
    int age;
    char sexe;

public:
    Personne(string nom = "", int age = 0, char sexe = 'M');
    string getNom() const;
    int getAge() const;
    char getSexe() const;

    void setNom(const string& nom);
    void setAge(int age);
    void setSexe(char sexe);

    virtual string getPersonne() const;
};

#endif

