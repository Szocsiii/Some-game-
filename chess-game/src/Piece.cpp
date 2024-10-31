#include "Piece.h"
#include "Color.h" // Ensure Color is included

Piece::Piece(char symbol, Color color) : symbol(symbol), color(color) {}

char Piece::getSymbol() const {
    return symbol;
}

Color Piece::getColor() const {
    return color;
}

bool Piece::isValidMove(int startX, int startY, int endX, int endY) {
    // Default implementation, should be overridden by derived classes
    return false;
}

// Derived classes (e.g., Pawn, Rook, Knight) will implement their specific movement rules.