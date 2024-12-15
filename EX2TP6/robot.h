#include <iostream>
#include <cmath>
using namespace std;

class Robot {
public:
    string nom;
    float x, y, portee;
    bool estMort;

public:
    Robot(string nom, float x, float y, float portee);
    void affiche() const;
    void deplacer(float dx, float dy);
    bool estAPortee(const Robot& autre) const;
    void definirMort();
};


