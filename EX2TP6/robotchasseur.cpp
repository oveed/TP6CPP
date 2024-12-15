#include "robotchasseur.h"

RobotChasseur::RobotChasseur(string nom, float x, float y, float portee)
    : Robot(nom, x, y, portee) {}

void RobotChasseur::tuer(Robot& autre) {
    if (estAPortee(autre) && !autre.estMort) {
        autre.definirMort();
        cout << "Robot " << autre.nom << " a ete tue par " << nom << "!" << endl;
    }
}

