#include "voiture.h"
#include "camion.h"

int main() {
    Voiture v1(2022, 35000, 5);
    Camion c1(2021, 75000, 20);

    cout << "Informations sur la voiture:" << endl;
    v1.affiche();
    v1.accelerer();

    cout << "Informations sur le camion:" << endl;
    c1.affiche();
    c1.accelerer();

    return 0;
}
