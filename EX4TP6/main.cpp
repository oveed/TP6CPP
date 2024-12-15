#include <iostream>
#include <vector>
#include "Pion.h"
#include "Roi.h"

int main() {
    std::vector<Piece*> pieces;

    Pion* pionBlanc = new Pion("Blanc", 4, 2);
    Pion* pionNoir = new Pion("Noir", 3, 5);
    Roi* roiBlanc = new Roi("Blanc", 4, 4);

    pieces.push_back(pionBlanc);
    pieces.push_back(pionNoir);
    pieces.push_back(roiBlanc);

    for (Piece* piece : pieces) {
        piece->afficher();
        piece->deplacer();
        piece->afficher();
    }

    // Nettoyage de la mémoire
    for (Piece* piece : pieces) {
        delete piece;
    }

    return 0;
}
