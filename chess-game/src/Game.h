#ifndef GAME_H
#define GAME_H

#include "Board.h"
#include "Piece.h"

class Game {
public:
    Game();
    void startGame();
    bool makeMove(const std::string& move);
    bool checkGameOver() const;

private:
    Board board;
    bool isWhiteTurn;
    bool isGameOver;
};

#endif // GAME_H