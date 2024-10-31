#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include "Piece.h"

class Board {
public:
    Board();
    void initializeBoard();
    void displayBoard() const;
    void updateBoard(int fromX, int fromY, int toX, int toY);

private:
    std::vector<std::vector<Piece*>> board;
};

#endif // BOARD_H