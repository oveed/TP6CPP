#ifndef PION_H
#define PION_H

#include "Piece.h"

class Pion : public Piece {
public:
    Pion(std::string c, int xPos, int yPos) : Piece(c, xPos, yPos) {}

    void deplacer() override {
        if (y < 8) {
            y += 1;
        } else {
            std::cout << "Le pion a depassé la limite de l'échiquier!" << std::endl;
        }
    }

    void afficher() const override {
        std::cout << "Pion " << couleur << " en position (" << x << ", " << y << ")" << std::endl;
    }
};

#endif

