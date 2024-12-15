#include "robot.h"

Robot::Robot(string nom, float x, float y, float portee)
    : nom(nom), x(x), y(y), portee(portee), estMort(false) {}

void Robot::affiche() const {
    cout << "Robot: " << nom << " | Position: (" << x << ", " << y << ")"
         << " | Portee: " << portee
         << " | Statut: " << (estMort ? "Mort" : "En vie") << endl;
}

void Robot::deplacer(float dx, float dy) {
    x += dx;
    y += dy;
}

bool Robot::estAPortee(const Robot& autre) const {
    return sqrt((x - autre.x) * (x - autre.x) + (y - autre.y) * (y - autre.y)) <= portee;
}

void Robot::definirMort() {
    estMort = true;
}

