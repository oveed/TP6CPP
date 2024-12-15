#ifndef PIECE_H
#define PIECE_H

#include <iostream>
#include <string>

class Piece {
public:
    std::string couleur;
    int x, y;

    Piece(std::string c, int xPos, int yPos) : couleur(c), x(xPos), y(yPos) {}
    virtual void deplacer() = 0;
    virtual void afficher() const = 0;
};

#endif

