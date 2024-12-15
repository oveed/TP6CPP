#include "robotchasseur.h"

int main() {
    RobotChasseur optimus("Optimus", 1, 2, 20);
    optimus.affiche();

    optimus.deplacer(15, 10);
    cout << "Optimus après deplacement:" << endl;
    optimus.affiche();

    Robot r1("Megatron", 25, 22, 10);
    Robot r2("Bumblebee", 18, 5, 8);
    Robot r3("Jazz", 10, 12, 5);

    r1.affiche();
    r2.affiche();
    r3.affiche();

    optimus.tuer(r1);
    optimus.tuer(r2);
    optimus.tuer(r3);

    return 0;
}
