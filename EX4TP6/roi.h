#ifndef ROI_H
#define ROI_H

#include "Piece.h"

class Roi : public Piece {
public:
    Roi(std::string c, int xPos, int yPos) : Piece(c, xPos, yPos) {}

    void deplacer() override {
        // Le roi peut se déplacer dans l'une des 8 directions.
        std::cout << "Le roi peut se deplacer d'un pas dans l'une des 8 directions." << std::endl;
    }

    void afficher() const override {
        std::cout << "Roi " << couleur << " en position (" << x << ", " << y << ")" << std::endl;
    }
};

#endif

