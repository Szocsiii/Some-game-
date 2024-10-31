#include <iostream>
#include "Game.h"

int main() {
    Game chessGame;
    chessGame.startGame();

    while (!chessGame.checkGameOver()) {
        chessGame.displayBoard();
        std::string move;
        std::cout << "Enter your move: ";
        std::cin >> move;
        chessGame.makeMove(move);
    }

    std::cout << "Game over!" << std::endl;
    return 0;
}